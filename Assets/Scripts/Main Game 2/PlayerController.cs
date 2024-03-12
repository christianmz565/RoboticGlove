using UnityEngine;
using UnityEngine.UI;
using System.Collections;

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
    private AudioSource carAudio;
    private ParticleSystem smoke;
    private ParticleSystem.EmissionModule emission;

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
        carAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;
        GetComponentInChildren<SpriteRenderer>().sprite = sprites[Random.Range(0, sprites.Length)];
    }

    // Update is called once per frame
    void Update()
    {
        if (alive)
            Move();
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
        smoke.Play();
        return false;
    }

    public void Score(float points)
    {
        score += points;
        scoreText.text = "Puntaje\n" + score;
    }
}
