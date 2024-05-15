using System.Collections.Generic;
using ArduinoBluetoothAPI;
using UnityEngine;
using UnityEngine.Android;
using System.IO;
using SystemDateTime = System.DateTime;

public class BluetoothManager : MonoBehaviour
{
    public byte[] captions = new byte[4];
    public string game;
    private BluetoothHelper helper;
    private Dictionary<string, int[]> gameCharacteristics = new()
    {
        { "1", new int[] { 0, 1, 2, 3, 4 }},
        { "2", new int[] { 4 }}
    };
    private const string serviceUUID = "4f7c0630-0059-408d-9acd-e04553c7b60a";
    private string[] characteristicUUIDs = new string[]
    {
        "4f7c0631-0059-408d-9acd-e04553c7b60a",
        "4f7c0632-0059-408d-9acd-e04553c7b60a",
        "4f7c0633-0059-408d-9acd-e04553c7b60a",
        "4f7c0634-0059-408d-9acd-e04553c7b60a",
        "4f7c0635-0059-408d-9acd-e04553c7b60a"
    };
    private List<BluetoothHelperCharacteristic> bluetoothHelperCharacteristics = new();
    private FileStream infoFile;
    private StreamWriter infoFileWriter;
    private static BluetoothManager instance;

    void Start()
    {
        if (instance != null && instance != this)
        {
            Destroy(gameObject);
        }
        else
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
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
    }

    public void Update()
    {
        if (helper != null)
        {
            foreach (BluetoothHelperCharacteristic characteristic in bluetoothHelperCharacteristics)
            {
                if (characteristic != null)
                {
                    helper.ReadCharacteristic(characteristic);
                    Debug.Log(captions[0] + "/" + captions[1] + "/" + captions[2] + "/" + captions[3] + "/" + captions[4]);
                }
            }
        }
    }
    
    public void WriteInFile()
    {
        // Saving data in file
        infoFileWriter.WriteLine(
                //(SystemDateTime.Now.Ticks / SystemTimeSpan.TicksPerSecond) +
                SystemDateTime.Now.ToString("dd-MM-yyyy hh:mm:ss.fff zzz") +
                "," + captions[0] +
                "," + captions[1] +
                "," + captions[2] +
                "," + captions[3]
            );
        infoFileWriter.Flush();
        infoFile.Flush();
        Debug.Log("Writing in file . . .");
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

        foreach (int current in gameCharacteristics[game])
        {
            BluetoothHelperCharacteristic characteristic = new(characteristicUUIDs[current], serviceUUID);
            bluetoothHelperCharacteristics.Add(characteristic);
        }
    }

    private void OnConnectionFailed(BluetoothHelper helper)
    {
        Debug.Log("OnConnectionFailed");
        helper.ScanNearbyDevices();
        Debug.Log("-OnConnectionFailed");
    }

    private void OnCharacteristicChanged(BluetoothHelper helper, byte[] data, BluetoothHelperCharacteristic characteristic)
    {
        //Debug.Log($"Update valud for characteristic [{characteristic.getName()}] of service [{characteristic.getService()}]");
        //Debug.Log($"New value : [{System.Text.Encoding.ASCII.GetString(data)}]");
        //caption = System.Text.Encoding.ASCII.GetString(data);

        // no dire absolutamente nada sobre el bucle que habia aqui
        for (int i = 0; i < data.Length; i++)
            captions[i] = data[i];
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