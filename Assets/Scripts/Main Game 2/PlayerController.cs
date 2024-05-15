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
    private BluetoothManager bluetoothManager;
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
        bluetoothManager = GameObject.Find("BluetoothManager").GetComponent<BluetoothManager>();
        smoke = GetComponentInChildren<ParticleSystem>();
        emission = smoke.emission;
        carAudio = GetComponent<AudioSource>();
        basePitch = carAudio.pitch;
        carAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;
        GetComponentInChildren<SpriteRenderer>().sprite = sprites[Random.Range(0, sprites.Length)];
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log(" UPDATE ");
        if (alive)
        {
            Move();
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
        
        if (bluetoothManager.caption1 > 27)
        {
            currentColumn = 0;
        }
        else if (bluetoothManager.caption2 > 45)
        {
            currentColumn = 1;
        }
        else if (bluetoothManager.caption3 > 80)
        {
            currentColumn = 2;
        }
        else if (bluetoothManager.caption4 > 61)
        {
            currentColumn = 3;
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
}
