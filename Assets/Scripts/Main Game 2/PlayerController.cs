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

public class PlayerController : MonoBehaviour
{
    public float score = 0;
    public byte caption1 = 0;
    public byte caption2 = 0;
    public byte caption3 = 0;
    public byte caption4 = 0;

    public List<int[]> captionsList = new List<int[]>();

    private FileStream infoFile;
    private StreamWriter infoFileWriter;
    
    public int currentColumn;
    public bool alive = true;
    [SerializeField] private Text scoreText;
    [SerializeField] private Sprite[] sprites;
    [SerializeField] private GameObject gameOverText;
    private const int MAX_SMOKE = 30;
    private int health = 5;
    private float basePitch;
    private AudioSource carAudio;
    private ParticleSystem smoke;
    //private float baseCooldown = 1;
    //private float cooldown = 1;
    private ParticleSystem.EmissionModule emission;
    //Bluethoot Variables
    private BluetoothHelper helper;
    private static string serviceUUID = "4f7c0630-0059-408d-9acd-e04553c7b60a";
    private static string characteristicUUIDfx5 = "4f7c0635-0059-408d-9acd-e04553c7b60a";
    private BluetoothHelperCharacteristic bluetoothHelperCharacteristicfx5;
    private static string PostRegistroFlex = "http://192.168.0.6/registroSesionFlex";

    private Vector3[] positions = {
        new(-GameSettings.Width / 2, -3.5f, -3),
        new(-GameSettings.Width / 2 + GameSettings.Width / 3, -3.5f, -3),
        new(-GameSettings.Width / 2 + 2 * GameSettings.Width / 3, -3.5f, -3),
        new(-GameSettings.Width / 2 + 3 * GameSettings.Width / 3, -3.5f, -3)
    };

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Game started");
        smoke = GetComponentInChildren<ParticleSystem>();
        emission = smoke.emission;
        carAudio = GetComponent<AudioSource>();
        basePitch = carAudio.pitch;
        carAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;
        GetComponentInChildren<SpriteRenderer>().sprite = sprites[Random.Range(0, sprites.Length)];

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

        for(int i = 1; !fileExists; i++){
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
        captionsList.Add(new int[]{4, 4, 4, 4});
        Debug.Log("Added register to list");
        SendPostCaptionsList();
        Debug.Log("Tried to send the Data to Database");
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log(" UPDATE ");
        if (alive){
            Move();
            WriteInFile();
            SaveCaptionsToList();
        }
        if (helper != null && bluetoothHelperCharacteristicfx5 != null){
            Debug.Log("");
            helper.ReadCharacteristic(bluetoothHelperCharacteristicfx5);
            Debug.Log(caption1 + " / " + caption2 + " / " + caption3 + " / " + caption4 + " CC: " + currentColumn);
        }
        // remove this
        if (Input.GetKeyDown(KeyCode.F7))
            Time.timeScale = 2.5f;
    }

    void Move()
    {
        /*
        if (Input.GetKeyDown(KeyCode.D))
        {
            currentColumn = 0;
        }
        else if (Input.GetKeyDown(KeyCode.F))
        {
            currentColumn = 1;
        }
        else if (Input.GetKeyDown(KeyCode.J))
        {
            currentColumn = 2;
        }
        else if (Input.GetKeyDown(KeyCode.K))
        {
            currentColumn = 3;
        }
        */
        if (helper != null && bluetoothHelperCharacteristicfx5 != null){
            if (caption1>27){
                currentColumn = 0;
            }
            else if (caption2>45){
                currentColumn = 1;
            }
            else if (caption3>80){
                currentColumn = 2;
            }
            else if (caption4>61){
                currentColumn = 3;
            }
        }

        transform.position = positions[currentColumn];

        /*
        cooldown -= Time.deltaTime;
        if (cooldown <= 0 && int.Parse(strBytesAct) > 80){
            if (currentColumn == 3)
                currentColumn = 0;
            else
                currentColumn++;
            cooldown = baseCooldown;
        }
        transform.position = positions[currentColumn];
        */
    }
    public void WriteInFile(){
        // Saving data in file
        infoFileWriter.WriteLine(
                //(SystemDateTime.Now.Ticks / SystemTimeSpan.TicksPerSecond) +
                SystemDateTime.Now.ToString("dd-MM-yyyy hh:mm:ss.fff zzz") +
                "," + caption1 +
                "," + caption2 +
                "," + caption3 +
                "," + caption4
            );
        infoFileWriter.Flush();
        infoFile.Flush();
        Debug.Log("Writing in file . . .");
    }
    public void SaveCaptionsToList(){
        captionsList.Add(new int[]{caption1, caption2, caption3, caption4});
    }

    public bool Hurt()
    {
        Debug.Log("Hurt");
        health--;
        if (health <= 0)
        {
            alive = false;
            GameSettings.ScrollSpeed = 0;
            Debug.Log("-HurtTrue");
            return true;
        }
        emission.rateOverTime = MAX_SMOKE / health;
        carAudio.pitch = basePitch - (5 - health) * 0.1f;
        smoke.Play();
        Debug.Log("-HurtFalse");
        return false;
    }

    public void Score(float points)
    {
        Debug.Log("Score");
        score += points;
        scoreText.text = "Puntaje\n" + score;
        Debug.Log("-Score");
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
        bluetoothHelperCharacteristicfx5 = new BluetoothHelperCharacteristic(characteristicUUIDfx5, serviceUUID);
        helper.Subscribe(bluetoothHelperCharacteristicfx5);
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
        foreach(byte b in data){
            if (i==0){
                caption1 = b;
            } else if (i==1){
                caption2 = b;
            } else if (i==2){
                caption3 = b;
            }else if (i==3){
                caption4 = b;
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

    void SendPostCaptionsList(){
        StartCoroutine(PostRequest(PostRegistroFlex));
    }

    IEnumerator PostRequest(string uri){
        foreach(int[] regCapt in captionsList){
            string jsonData = "{" + 
                "\"caption1\":" + regCapt[0] + "," +
                "\"caption2\":" + regCapt[1] + "," +
                "\"caption3\":" + regCapt[2] + "," +
                "\"caption4\":" + regCapt[3] + "," +
                "\"Sesion_idSesion\": 1" +
                "}";
            
            Debug.Log("PostRequest: jsonData ready '" + jsonData + "'");
            // Creating Web Request
            UnityWebRequest webRequest = new UnityWebRequest(uri, "POST");
            Debug.Log("Hello moto");
            try{
                Debug.Log("PostRequest: A 1");
                byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(jsonData);
                Debug.Log("PostRequest: A 2");
                webRequest.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw);
                Debug.Log("PostRequest: A 3");
                webRequest.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
                Debug.Log("PostRequest: A 4");
                webRequest.SetRequestHeader("Content-Type", "application/json");

                Debug.Log("PostRequest: Request configured");
            }catch(SystemException ex){
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
