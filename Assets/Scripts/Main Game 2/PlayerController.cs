using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System.Text;
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
    private ParticleSystem smoke;
    private ParticleSystem.EmissionModule emission;
    //Bluethoot Variables
    private BluetoothHelper helper;
    private static string serviceUUID = "4f7c0630-0059-408d-9acd-e04553c7b60a";
    private static string characteristicUUIDfxMiddle = "4f7c0632-0059-408d-9acd-e04553c7b60";
    private BluetoothHelperCharacteristic bluetoothHelperCharacteristic;

    private Vector3[] positions = {
        new(-GameSettings.Width / 2, -3.5f, -3),
        new(-GameSettings.Width / 2 + GameSettings.Width / 3, -3.5f, -3),
        new(-GameSettings.Width / 2 + 2 * GameSettings.Width / 3, -3.5f, -3),
        new(-GameSettings.Width / 2 + 3 * GameSettings.Width / 3, -3.5f, -3)
    };

    // Start is called before the first frame update
    void Start()
    {
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
        helper.OnCharacteristicChanged += (helper, value, characteristic) =>
        {
            caption = Encoding.Unicode.GetString(value);
        };
        helper.ScanNearbyDevices();

        Permission.RequestUserPermission(Permission.CoarseLocation);
        bluetoothHelperCharacteristic = new BluetoothHelperCharacteristic(characteristicUUIDfxMiddle, serviceUUID);
        helper.ReadCharacteristic(bluetoothHelperCharacteristic);
    }

    // Update is called once per frame
    void Update()
    {
        if (alive)
            Move();

        // remove this
        if (Input.GetKeyDown(KeyCode.F7))
            Time.timeScale = 2.5f;
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
        health--;
        if (health <= 0)
        {
            alive = false;
            GameSettings.ScrollSpeed = 0;
            return true;
        }
        emission.rateOverTime = MAX_SMOKE / health;
        carAudio.pitch = basePitch - (5 - health) * 0.1f;
        smoke.Play();
        return false;
    }

    public void Score(float points)
    {
        score += points;
        scoreText.text = "Puntaje\n" + score + "Caption: " + caption;
    }

    void OnScanEnded(BluetoothHelper helper, LinkedList<BluetoothDevice> devices)
    {
        if (helper.isDevicePaired())
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

    void OnCharacteristicChanged(BluetoothHelper helper, byte[] data, BluetoothHelperCharacteristic characteristic)
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
