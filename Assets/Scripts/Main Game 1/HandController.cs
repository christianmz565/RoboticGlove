using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Reflection;
using ArduinoBluetoothAPI;
using UnityEngine.Android;
using System.IO;
using SystemDateTime = System.DateTime;
using UnityEngine.Networking;
using SystemException = System.Exception;
using System;
public class HandController : MonoBehaviour
{
    [SerializeField] private Sprite[] sprites;
    [SerializeField] private NodeGrid nodeGrid;
    private AudioSource pullAudio;
    private NodeController pickedNode;
    private Vector2 previousNodePos;
    private bool isHolding = false;
    //Bluethoot controladores 
    private BluetoothHelper helper;
    private static string serviceUUID = "fda4e100-3e30-4182-b66c-cf08e4779ab6";
    private static string characteristicUUIDfx1 = "fda4e108-3e30-4182-b66c-cf08e4779ab6";
    private BluetoothHelperCharacteristic bluetoothHelperCharacteristicfx1;
    public byte ejex = 0;
    public byte ejey = 0;
    public byte caption1 = 0;
    public byte caption2 = 0;
    public byte caption3 = 0;
    public byte caption4 = 0;
    public byte caption5 = 0;
    //ARCHIVOS
    public List<int[]> captionsList = new List<int[]>();

    private FileStream infoFile;
    private StreamWriter infoFileWriter;
    // Start is called before the first frame update
    private static string PostRegistroFlex = "http://192.168.0.6/registroSesionForce";
    void Start()
    {
        pullAudio = GetComponent<AudioSource>();
        pullAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;

        BluetoothHelper.BLE = true;
        helper = BluetoothHelper.GetInstance("Papita - Soft Robotic Glove");
        helper.OnScanEnded += OnScanEnded;
        helper.OnConnected += OnConnected;
        helper.OnConnectionFailed += OnConnectionFailed;
        helper.OnCharacteristicChanged += OnCharacteristicChanged;
        helper.OnCharacteristicNotFound += OnCharacteristicNotFound;
        helper.OnServiceNotFound += OnServiceNotFound;
        //helper.OnCharacteristicChanged += (helper, value, characteristic) =>
        //{
        //    Debug.Log(value);
        //};
        helper.ScanNearbyDevices();
        Permission.RequestUserPermission(Permission.CoarseLocation);
        //caption = helper.Read();
        //helper.ReadCharacteristic(bluetoothHelperCharacteristic);

        string infoFilePath = "";
        bool fileExists = false;

        for (int i = 1; !fileExists; i++)
        {
            //Persistent data path
            infoFilePath = Application.persistentDataPath + "/gameInfoRoboticGlove_" + i + ".csv";
            Debug.Log("infoFilePath: " + infoFilePath);

            // Creating file for saving data from gloves
            try
            {
                // Check if the file exists
                if (!File.Exists(infoFilePath))
                {
                    // Create the file
                    FileStream fileStream = File.Create(infoFilePath);
                    fileStream.Close(); // Close the file stream once done
                    Debug.Log("File created successfully.");
                    fileExists = true;
                }
                else
                {
                    Debug.Log("File already exists.");
                }
            }
            catch (IOException e)
            {
                Debug.LogError("Error creating file: " + e.Message);
            }
        }

        // Filling the file
        infoFile = File.Open(infoFilePath, FileMode.Open);
        infoFileWriter = new StreamWriter(infoFile);
        infoFileWriter.WriteLine("timestamp,caption1,caption2,caption3,caption4");
        infoFileWriter.Flush();
        infoFile.Flush();

        // Testing Data Send via web API
        Debug.Log("Preparing and sending data to database");
        captionsList.Add(new int[] { 4, 4, 4, 4, 4, 4, 4 });
        Debug.Log("Added register to list");
        SendPostCaptionsList();
        Debug.Log("Tried to send the Data to Database");
    }

    public void WriteInFile()
    {
        // Saving data in file
        infoFileWriter.WriteLine(
                //(SystemDateTime.Now.Ticks / SystemTimeSpan.TicksPerSecond) +
                SystemDateTime.Now.ToString("dd-MM-yyyy hh:mm:ss.fff zzz") +
                "," + ejex +
                "," + ejey +
                "," + caption1 +
                "," + caption2 +
                "," + caption3 +
                "," + caption4 +
                "," + caption5
            );
        infoFileWriter.Flush();
        infoFile.Flush();
        Debug.Log("Writing in file . . .");
    }
    public void SaveCaptionsToList()
    {
        captionsList.Add(new int[] { ejex, ejey, caption1, caption2, caption3, caption4, caption5 });
    }


    // Update is called once per frame
    void Update()
    {
        Check();
        WriteInFile();
        SaveCaptionsToList();
        if (helper != null && bluetoothHelperCharacteristicfx1 != null)
        {
            Debug.Log("");
            helper.ReadCharacteristic(bluetoothHelperCharacteristicfx1);
            Debug.Log(ejex + " / " + ejey + " / " + caption1 + " / " + caption2 + " / " + caption3 + " / " + caption4 + " / " + caption5);
        }
    }

    void Check()
    {
        float mult = 5 * Mathf.Pow(0.9f, PlayerPrefs.GetInt("cursorSensitivity"));
        Vector2 direction = Vector2.zero;

        if (ejex < 60)
            direction += Vector2.left;
        if (ejex > 200)
            direction += Vector2.right;
        if (ejey < 60)
            direction += Vector2.down;
        if (ejey > 220)
            direction += Vector2.up;

        MoveAndPlayAudio(mult * Time.deltaTime * direction);
        if (!isHolding && caption1 > 8 && caption2 > 90 && caption3 > 15 && caption4 > 140)
            StartHold();
        if (isHolding && caption1 < 3 && caption2 < 30 && caption3 < 5 && caption4 < 40)
            EndHold();
    }

    void MoveAndPlayAudio(Vector2 direction)
    {
        if (!isHolding || direction == Vector2.zero)
        {
            pullAudio.loop = false;
        }
        else if (isHolding && !pullAudio.isPlaying)
        {
            pullAudio.loop = true;
            pullAudio.Play();
        }

        float x = transform.position.x + direction.x;
        float y = transform.position.y + direction.y;
        if (-9 < x && x < 9 && -4 < y && y < 4)
            transform.Translate(direction);
    }

    void StartHold()
    {
        Vector2 nodePos = nodeGrid.RealToRelativePosition(transform.position);
        NodeController node = nodeGrid.GetNodeByRelativePos(nodePos);
        if (node != null)
        {
            previousNodePos = nodePos;
            isHolding = true;
            node.StartHold();
            pickedNode = node;
            GetComponent<SpriteRenderer>().sprite = sprites[0];
            Debug.Log("Now holding " + node.name);
        }
    }

    void EndHold()
    {
        if (isHolding)
        {
            Debug.Log("Now holding (not) " + pickedNode.name);
            isHolding = false;
            pickedNode.EndHold();
            Vector2 newNodePos = nodeGrid.RealToRelativePosition(new Vector2(transform.position.x, transform.position.y));
            nodeGrid.MoveNode(pickedNode, previousNodePos, newNodePos);
            pickedNode = null;
            GetComponent<SpriteRenderer>().sprite = sprites[1];

        }
    }

    void OnScanEnded(BluetoothHelper helper, LinkedList<BluetoothDevice> devices)
    {
        Debug.Log("OnScanEnded");
        if (helper.isDevicePaired())
            helper.Connect();
        else
            helper.ScanNearbyDevices();
        Debug.Log("-OnScanEnded");
    }

    void OnConnected(BluetoothHelper helper)
    {
        Debug.Log("OnConnected");
        List<BluetoothHelperService> services = helper.getGattServices();
        foreach (BluetoothHelperService s in services)
        {
            Debug.Log($"Service : [{s.getName()}]");
            foreach (BluetoothHelperCharacteristic c in s.getCharacteristics())
            {
                Debug.Log($"Characteristic : [{c.getName()}]");
            }
        }
        bluetoothHelperCharacteristicfx1 = new BluetoothHelperCharacteristic(characteristicUUIDfx1, serviceUUID);
        helper.Subscribe(bluetoothHelperCharacteristicfx1);
        Debug.Log("Si nos logramos conectar y suscribir");
    }

    void OnConnectionFailed(BluetoothHelper helper)
    {
        Debug.Log("OnConnectionFailed");
        helper.ScanNearbyDevices();
        Debug.Log("-OnConnectionFailed");
    }

    void OnCharacteristicChanged(BluetoothHelper helper, byte[] data, BluetoothHelperCharacteristic characteristic)
    {
        //Debug.Log($"Update valud for characteristic [{characteristic.getName()}] of service [{characteristic.getService()}]");
        //Debug.Log($"New value : [{System.Text.Encoding.ASCII.GetString(data)}]");
        //caption = System.Text.Encoding.ASCII.GetString(data);
        int i = 0;
        foreach (byte b in data)
        {
            if (i == 0)
            {
                ejey = b;
            }
            else if (i == 1)
            {
                ejex = b;
            }
            else if (i == 2)
            {
                caption1 = b;
            }
            else if (i == 3)
            {
                caption2 = b;
            }
            else if (i == 4)
            {
                caption3 = b;
            }
            else if (i == 5)
            {
                caption4 = b;
            }
            else if (i == 6)
            {
                caption5 = b;
            }
            i++;
        }
    }

    void OnServiceNotFound(BluetoothHelper helper, string service)
    {
        Debug.Log("OnServiceNotFound");
        Debug.Log($"Service [{service}] not found");
        Debug.Log("-OnServiceNotFound");
    }

    void OnCharacteristicNotFound(BluetoothHelper helper, string service, string characteristic)
    {
        Debug.Log("OnCharacteristicNotFound");
        Debug.Log($"Characteristic [{service}] of service [{service}] not found");
        Debug.Log("-OnCharacteristicNotFound");
    }
    /*
        public void Write(string data)
        {
            Debug.Log("Write");
            helper.WriteCharacteristic(bluetoothHelperCharacteristic, data);
            Debug.Log("-Write");
        }
    */

    void SendPostCaptionsList()
    {
        StartCoroutine(PostRequest(PostRegistroFlex));
    }

    IEnumerator PostRequest(string uri)
    {
        foreach (int[] regCapt in captionsList)
        {
            string jsonData = "{" +
                "\"ejex\":" + regCapt[0] + "," +
                "\"ejey\":" + regCapt[1] + "," +
                "\"caption1\":" + regCapt[2] + "," +
                "\"caption2\":" + regCapt[3] + "," +
                "\"caption3\":" + regCapt[4] + "," +
                "\"caption4\":" + regCapt[5] + "," +
                "\"caption5\":" + regCapt[6] + "," +
                "\"Sesion_idSesion\": 1" +
                "}";

            Debug.Log("PostRequest: jsonData ready '" + jsonData + "'");
            // Creating Web Request
            UnityWebRequest webRequest = new UnityWebRequest(uri, "POST");
            Debug.Log("Hello moto");
            try
            {
                Debug.Log("PostRequest: A 1");
                byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(jsonData);
                Debug.Log("PostRequest: A 2");
                webRequest.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw);
                Debug.Log("PostRequest: A 3");
                webRequest.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
                Debug.Log("PostRequest: A 4");
                webRequest.SetRequestHeader("Content-Type", "application/json");

                Debug.Log("PostRequest: Request configured");
            }
            catch (SystemException ex)
            {
                Debug.Log("Catch ex: " + ex);
            }
            // Send Request
            yield return webRequest.SendWebRequest();

            // Check for errors
            if (webRequest.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError("Error sending POST request: " + webRequest.error);
            }
            else
            {
                Debug.Log("POST request sent successfully");
                // Handle the response if needed
                Debug.Log("Response: " + webRequest.downloadHandler.text);
            }
        }
    }

    void OnDestroy()
    {
        Debug.Log("OnDestroy");

        // Saving the file
        infoFileWriter.Close();
        infoFile.Close();
        Debug.Log("End Writing in file, saving the file");

        helper.OnScanEnded -= OnScanEnded;
        helper.OnConnected -= OnConnected;
        helper.OnConnectionFailed -= OnConnectionFailed;
        helper.OnCharacteristicChanged -= OnCharacteristicChanged;
        helper.OnCharacteristicNotFound -= OnCharacteristicNotFound;
        helper.OnServiceNotFound -= OnServiceNotFound;
        helper.Disconnect();
    }
}
