using System.Collections.Generic;
using UnityEngine;
using ArduinoBluetoothAPI;
using System;

public class BluetoothTest : MonoBehaviour
{
    private BluetoothHelper helper;
    private bool isScanning;
    private bool isConnecting;
    private string data;
    private string tmp;
    private LinkedList<BluetoothDevice> devices;
    void Start()
    {
        data = "";
        tmp = "";
        try
        {
            BluetoothHelper.BLE = true;
            helper = BluetoothHelper.GetInstance();
            helper.OnConnected += OnConnected;
            helper.OnConnectionFailed += OnConnectionFailed;
            helper.OnScanEnded += OnScanEnded;
            helper.OnDataReceived += OnDataReceived;

            //helper.setCustomStreamManager(new MyStreamManager()); //implement your own way of delimiting the messages
            helper.setTerminatorBasedStream("\n"); //every messages ends with new line character

        }
        catch (Exception e)
        {
            Debug.LogError(e);
        }

    }
    void OnDataReceived(BluetoothHelper helper)
    {
        data += "\n<" + helper.Read();
    }

    void OnScanEnded(BluetoothHelper helper, LinkedList<BluetoothDevice> devices)
    {
        this.isScanning = false;
        this.devices = devices;
    }

    void OnConnected(BluetoothHelper helper)
    {
        isConnecting = false;
        helper.StartListening();
    }

    void OnConnectionFailed(BluetoothHelper helper)
    {
        isConnecting = false;
        Debug.Log("Connection lost");
    }
}

