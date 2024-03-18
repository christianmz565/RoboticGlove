using System.Collections.Generic;
using ArduinoBluetoothAPI;
using UnityEngine;
using UnityEngine.Android;

public abstract class BluetoothManager : MonoBehaviour
{
    //Bluethoot Variables
    private BluetoothHelper helper;
    private const string serviceUUID = "4f7c0630-0059-408d-9acd-e04553c7b60a";
    private const string characteristicUUIDfx1 = "4f7c0631-0059-408d-9acd-e04553c7b60a";
    private const string characteristicUUIDfx2 = "4f7c0632-0059-408d-9acd-e04553c7b60a";
    private const string characteristicUUIDfx3 = "4f7c0633-0059-408d-9acd-e04553c7b60a";
    private const string characteristicUUIDfx4 = "4f7c0634-0059-408d-9acd-e04553c7b60a";
    private BluetoothHelperCharacteristic bluetoothHelperCharacteristicfx1;
    private BluetoothHelperCharacteristic bluetoothHelperCharacteristicfx2;
    private BluetoothHelperCharacteristic bluetoothHelperCharacteristicfx3;
    private BluetoothHelperCharacteristic bluetoothHelperCharacteristicfx4;

    void Start()
    {
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
    }

    void Update()
    {
        helper?.ReadCharacteristic(bluetoothHelperCharacteristicfx1);
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
        bluetoothHelperCharacteristicfx1 = new BluetoothHelperCharacteristic(characteristicUUIDfx1, serviceUUID);
        helper.Subscribe(bluetoothHelperCharacteristicfx1);
        /*
        bluetoothHelperCharacteristicfx2 = new BluetoothHelperCharacteristic(characteristicUUIDfx2, serviceUUID);
        bluetoothHelperCharacteristicfx3 = new BluetoothHelperCharacteristic(characteristicUUIDfx3, serviceUUID);
        bluetoothHelperCharacteristicfx4 = new BluetoothHelperCharacteristic(characteristicUUIDfx4, serviceUUID);
        helper.Subscribe(bluetoothHelperCharacteristicfx2);
        helper.Subscribe(bluetoothHelperCharacteristicfx3);
        helper.Subscribe(bluetoothHelperCharacteristicfx4);
        */
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
        //Debug.Log($"Update valud for characteristic [{characteristic.getName()}] of service [{characteristic.getService()}]");
        //Debug.Log($"New value : [{System.Text.Encoding.ASCII.GetString(data)}]");
        //caption = System.Text.Encoding.ASCII.GetString(data);
        string strBytes = "";
        foreach (byte b in data)
        {
            strBytes += b + "";
        }
        Debug.Log("strBytexByte: " + strBytes);
        
        // Por si solo funciona un dedo
        PerformAction(strBytes);

        // Por si hay varios dedos, imagino tendran un identificador
        string aaa = "tambien revisen este separador no lo dejo como comentario por que no lo leerian";
        string[] set = strBytes.Split(':');
        PerformAction(set[0], set[1]);
    }

    protected abstract void PerformAction(string data);

    protected abstract void PerformAction(string id, string data);

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
        //helper.OnScanEnded -= OnScanEnded;
        //helper.OnConnected -= OnConnected;
        //helper.OnConnectionFailed -= OnConnectionFailed;
        //helper.OnCharacteristicChanged -= OnCharacteristicChanged;
        //helper.OnCharacteristicNotFound -= OnCharacteristicNotFound;
        //helper.OnServiceNotFound -= OnServiceNotFound;
        //helper.Disconnect();
    }
}

