using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Reflection;
using ArduinoBluetoothAPI;
using UnityEngine.Android;

public class PlayerController : MonoBehaviour
{
    public float score = 0;
    public string caption = "";
    public int currentColumn;
    public bool alive = true;
    [SerializeField] private Text scoreText;
    [SerializeField] private Sprite[] sprites;
    [SerializeField] private GameObject gameOverText;
    private const int MAX_SMOKE = 30;
    private int health = 5;
    private float basePitch;
    private AudioSource carAudio;
    private SpriteRenderer healthSprite;
    private ParticleSystem smoke;
    private ParticleSystem.EmissionModule emission;
    //Bluethoot Variables
    private BluetoothHelper helper;
    private static string serviceUUID = "4f7c0630-0059-408d-9acd-e04553c7b60a";
    private static string characteristicUUIDfx1 = "4f7c0631-0059-408d-9acd-e04553c7b60a";
    private static string characteristicUUIDfx2 = "4f7c0632-0059-408d-9acd-e04553c7b60a";
    private static string characteristicUUIDfx3 = "4f7c0633-0059-408d-9acd-e04553c7b60a";
    private static string characteristicUUIDfx4 = "4f7c0634-0059-408d-9acd-e04553c7b60a";
    private BluetoothHelperCharacteristic bluetoothHelperCharacteristicfx1;
    private BluetoothHelperCharacteristic bluetoothHelperCharacteristicfx2;
    private BluetoothHelperCharacteristic bluetoothHelperCharacteristicfx3;
    private BluetoothHelperCharacteristic bluetoothHelperCharacteristicfx4;

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
        Transform smokeObject = transform.Find("Smoke");
        Transform spriteObject = transform.Find("Sprite");
        Transform healthObject = transform.Find("Health");

        smoke = smokeObject.GetComponent<ParticleSystem>();
        emission = smoke.emission;

        carAudio = GetComponent<AudioSource>();
        basePitch = carAudio.pitch;
        carAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;
        
        spriteObject.GetComponent<SpriteRenderer>().sprite = sprites[Random.Range(0, sprites.Length)];
        healthSprite = healthObject.GetComponent<SpriteRenderer>();

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

    // Update is called once per frame
    void Update()
    {
        if (alive)
            Move();
            
        helper?.ReadCharacteristic(bluetoothHelperCharacteristicfx1);
    }

    void Move()
    {
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

        transform.position = positions[currentColumn];
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
        healthSprite.size = new Vector2(2.5f * health, 2.5f);
        smoke.Play();
        Debug.Log("-HurtFalse");
        return false;
    }

    public void Score(float points)
    {
        Debug.Log("Score");
        score += points;
        scoreText.text = "Puntaje\n" + score + " " + caption;
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
        caption = System.Text.Encoding.ASCII.GetString(data);
        string strBytes = "";
        foreach(byte b in data){
            strBytes += "|" + b;
        }
        Debug.Log("strBytexByte: " + strBytes);
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
    void OnDestroy()
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
