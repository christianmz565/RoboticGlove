using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
    public int health = 5;
    public float score = 0;
    public string caption = "";
    public int currentColumn;
    public bool alive = true;
    [SerializeField] private Text scoreText;
    [SerializeField] private Sprite[] sprites;
    [SerializeField] private GameObject gameOverText;
    private const int MAX_SMOKE = 30;
    private float basePitch;
    private AudioSource carAudio;
    private SpriteRenderer healthSprite;
    private ParticleSystem smoke;
    private ParticleSystem.EmissionModule emission;
    private BluetoothManager bluetoothPlayer;

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
        Transform spriteObject = transform.Find("Sprite");
        Transform smokeObject = spriteObject.Find("Smoke");
        Transform healthObject = spriteObject.Find("Health");

        smoke = smokeObject.GetComponent<ParticleSystem>();
        emission = smoke.emission;

        carAudio = GetComponent<AudioSource>();
        basePitch = carAudio.pitch;
        carAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;

        spriteObject.GetComponent<SpriteRenderer>().sprite = sprites[Random.Range(0, sprites.Length)];
        healthSprite = healthObject.GetComponent<SpriteRenderer>();

        bluetoothPlayer = GameObject.Find("BluetoothManager").GetComponent<BluetoothManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if (alive)
        {
            Move();
            transform.position = positions[currentColumn];
        }
    }

    void Move()
    {
        /*if (Input.GetKeyDown(KeyCode.D))
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
        }*/

        if (bluetoothPlayer.captions[0] > 27)
        {
            currentColumn = 0;
        }
        else if (bluetoothPlayer.captions[0] > 45)
        {
            currentColumn = 1;
        }
        else if (bluetoothPlayer.captions[0] > 80)
        {
            currentColumn = 2;
        }
        else if (bluetoothPlayer.captions[0] > 45)
        {
            currentColumn = 3;
        }
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


}
