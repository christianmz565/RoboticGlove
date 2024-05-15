using System.Collections.Generic;
using ArduinoBluetoothAPI;
using UnityEngine;
using UnityEngine.Android;
using System.IO;
using SystemDateTime = System.DateTime;
using UnityEngine.Networking;
using System.Collections;
using SystemException = System.Exception;

public class BluetoothManager : MonoBehaviour
{
    public byte[] captions = new byte[4];
    public string game;
    private BluetoothHelper helper;
    private const string serviceUUIDG1 = "fda4e100-3e30-4182-b66c-cf08e4779ab6";
    private const string characteristicUUIDG1 = "fda4e108-3e30-4182-b66c-cf08e4779ab6";
    private const string serviceUUIDG2 = "4f7c0630-0059-408d-9acd-e04553c7b60a";
    private const string characteristicUUIDG2 = "4f7c0635-0059-408d-9acd-e04553c7b60a";
    private BluetoothHelperCharacteristic bluetoothHelperCharacteristic;
    public static BluetoothManager instance;
    public byte ejex = 0, ejey = 0, caption1 = 5, caption2 = 50, caption3 = 10, caption4 = 75, caption5 = 0;
    // Archivos
    public List<int[]> captionsList = new();
    private FileStream infoFile;
    private StreamWriter infoFileWriter;
    private static string PostRegistroFlex = "http://192.168.0.6/registroSesionForce";


    void Start()
    {
        if (instance != null && instance != this)
        {
            Destroy(gameObject);
            Debug.Log("removing this instance of ble man " + gameObject.name);
        }
        else
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
            Debug.Log("keeping this instance of ble man " + gameObject.name);
        }


        //Bluethoot Configuration
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

        Debug.Log("Preparing and sending data to database");
        captionsList.Add(new int[] { 4, 4, 4, 4, 4, 4, 4 });
        Debug.Log("Added register to list");
        SendPostCaptionsList();
        Debug.Log("Tried to send the Data to Database");
    }

    void SendPostCaptionsList()
    {
        StartCoroutine(PostRequest(PostRegistroFlex));
    }

    private IEnumerator PostRequest(string uri)
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

    public void Update()
    {
        WriteInFile();
        SaveCaptionsToList();
        if (helper != null && bluetoothHelperCharacteristic != null)
        {
            Debug.Log("");
            helper.ReadCharacteristic(bluetoothHelperCharacteristic);
            Debug.Log(ejex + " / " + ejey + " / " + caption1 + " / " + caption2 + " / " + caption3 + " / " + caption4 + " / " + caption5);
        }
    }

    public void SaveCaptionsToList()
    {
        captionsList.Add(new int[] { ejex, ejey, caption1, caption2, caption3, caption4, caption5 });
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
        //Debug.Log("Writing in file . . .");
    }

    private void OnScanEnded(BluetoothHelper helper, LinkedList<BluetoothDevice> devices)
    {
        Debug.Log("OnScanEnded");
        if (helper.isDevicePaired())
            helper.Connect();
        else
            helper.ScanNearbyDevices();
        Debug.Log("-OnScanEnded");
    }

    private void OnConnected(BluetoothHelper helper)
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
        if (game.Equals("1"))
            bluetoothHelperCharacteristic = new BluetoothHelperCharacteristic(characteristicUUIDG1, serviceUUIDG1);
        else
            bluetoothHelperCharacteristic = new BluetoothHelperCharacteristic(characteristicUUIDG2, serviceUUIDG2);
        helper.Subscribe(bluetoothHelperCharacteristic);
        Debug.Log("Si nos logramos conectar y suscribir");
    }

    private void OnConnectionFailed(BluetoothHelper helper)
    {
        Debug.Log("OnConnectionFailed");
        helper.ScanNearbyDevices();
        Debug.Log("-OnConnectionFailed");
    }

    private void OnCharacteristicChanged(BluetoothHelper helper, byte[] data, BluetoothHelperCharacteristic characteristic)
    {
        int i = 0;
        if (game.Equals("1"))
        {
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
        else
        {
            foreach (byte b in data)
            {
                if (i == 0)
                {
                    caption1 = b;
                }
                else if (i == 1)
                {
                    caption2 = b;
                }
                else if (i == 2)
                {
                    caption3 = b;
                }
                else if (i == 3)
                {
                    caption4 = b;
                }
                i++;
            }
        }
    }

    private void OnServiceNotFound(BluetoothHelper helper, string service)
    {
        Debug.Log("OnServiceNotFound");
        Debug.Log($"Service [{service}] not found");
        Debug.Log("-OnServiceNotFound");
    }

    private void OnCharacteristicNotFound(BluetoothHelper helper, string service, string characteristic)
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
    private void OnDestroy()
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