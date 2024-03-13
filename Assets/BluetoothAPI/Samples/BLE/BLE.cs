using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ArduinoBluetoothAPI;
using UnityEngine.Android;

public class BLE : MonoBehaviour
{
    private BluetoothHelper helper;
    private static string serviceUUID = "4f7c0630-0059-408d-9acd-e04553c7b60a";
    private static string characteristicUUIDfxMiddle = "4f7c0632-0059-408d-9acd-e04553c7b60";
    private BluetoothHelperCharacteristic bluetoothHelperCharacteristic;
    void Start()
    {
        BluetoothHelper.BLE = true;
        helper = BluetoothHelper.GetInstance("Papita - Soft Robotic Glove");
        helper.OnScanEnded += OnScanEnded;
        helper.OnConnected += OnConnected;
        helper.OnConnectionFailed += OnConnectionFailed;
        helper.OnCharacteristicChanged += OnCharacteristicChanged;
        helper.OnCharacteristicNotFound += OnCharacteristicNotFound;
        helper.OnServiceNotFound += OnServiceNotFound;
        helper.OnCharacteristicChanged += (helper, value, characteristic) =>
        {
            Debug.Log(value);
        };
        helper.ScanNearbyDevices();
        
        Permission.RequestUserPermission(Permission.CoarseLocation);
        bluetoothHelperCharacteristic = new BluetoothHelperCharacteristic(characteristicUUIDfxMiddle, serviceUUID);
    }

    void OnScanEnded(BluetoothHelper helper, LinkedList<BluetoothDevice> devices)
    {
        if(helper.isDevicePaired())
            helper.Connect();
        else
            helper.ScanNearbyDevices();
    }

    void OnConnected(BluetoothHelper helper)
    {
        List<BluetoothHelperService> services = helper.getGattServices();
        foreach (BluetoothHelperService s in services)
        {
            Debug.Log($"Service : [{s.getName()}]");
            foreach (BluetoothHelperCharacteristic c in s.getCharacteristics())
            {
                Debug.Log($"Characteristic : [{c.getName()}]");
            }
        }
        helper.Subscribe(bluetoothHelperCharacteristic);
    }

    void OnConnectionFailed(BluetoothHelper helper)
    {
        Debug.Log("Connection failed");
        helper.ScanNearbyDevices();
    }

    void OnCharacteristicChanged(BluetoothHelper helper, byte [] data, BluetoothHelperCharacteristic characteristic)
    {
        Debug.Log($"Update valud for characteristic [{characteristic.getName()}] of service [{characteristic.getService()}]");
        Debug.Log($"New value : [{System.Text.Encoding.ASCII.GetString(data)}]");
    }

    void OnServiceNotFound(BluetoothHelper helper, string service)
    {
        Debug.Log($"Service [{service}] not found");
    }

    void OnCharacteristicNotFound(BluetoothHelper helper, string service, string characteristic)
    {
        Debug.Log($"Characteristic [{service}] of service [{service}] not found");
    }

    public void Write(string data)
    {
        helper.WriteCharacteristic(bluetoothHelperCharacteristic, data);
    }

    void OnDestroy()
    {
        helper.OnScanEnded -= OnScanEnded;
        helper.OnConnected -= OnConnected;
        helper.OnConnectionFailed -= OnConnectionFailed;
        helper.OnCharacteristicChanged -= OnCharacteristicChanged;
        helper.OnCharacteristicNotFound -= OnCharacteristicNotFound;
        helper.OnServiceNotFound -= OnServiceNotFound;
        helper.Disconnect();
    }
}
