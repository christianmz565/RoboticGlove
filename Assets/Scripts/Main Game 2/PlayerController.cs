using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerController : MonoBehaviour
{
    public int health;
    public float score = 0;
    public int currentColumn;
    public bool alive = true;
    [SerializeField] private Text scoreText;
    [SerializeField] private Sprite[] sprites;
    [SerializeField] private GameObject gameOverText;
    private Text healthText;
    private AudioSource carAudio;
    private Vector3[] positions = {
        new(-GameSettings.Width / 2, -2.5f, -2),
        new(-GameSettings.Width / 2 + GameSettings.Width / 3, -2.5f, -2),
        new(-GameSettings.Width / 2 + 2 * GameSettings.Width / 3, -2.5f, -2),
        new(-GameSettings.Width / 2 + 3 * GameSettings.Width / 3, -2.5f, -2)
    };

    // Start is called before the first frame update
    void Start()
    {
        carAudio = GetComponent<AudioSource>();
        carAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;
        healthText = GetComponentInChildren<Text>();
        healthText.text = health + "";
        GetComponent<SpriteRenderer>().sprite = sprites[Random.Range(0, sprites.Length)];
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
            currentColumn = 0;
        else if (Input.GetKeyDown(KeyCode.F))
            currentColumn = 1;
        else if (Input.GetKeyDown(KeyCode.J))
            currentColumn = 2;
        else if (Input.GetKeyDown(KeyCode.K))
            currentColumn = 3;

        transform.position = positions[currentColumn];
    }

    public void Hurt()
    {
        health--;
        if (health < 0)
        {
            alive = false;
            StartCoroutine(SlowTimeDown());
            if (GameSettings.Level != "-1")
            {
                gameOverText.SetActive(true);
                StartCoroutine(End());
            }
        }
        else
        {
            healthText.text = health + "";
        }
    }

    private IEnumerator SlowTimeDown()
    {
        while (GameSettings.ScrollSpeed > 0)
        {
            GameSettings.ScrollSpeed = Mathf.Max(0, GameSettings.ScrollSpeed - 0.25f);
            yield return new WaitForSeconds(0.1f);
        }
    }

    private IEnumerator End()
    {
        yield return new WaitUntil(() => GameSettings.ScrollSpeed == 0);
        StartCoroutine(SceneChanger.ChangeScene("Levels Menu"));
    }

    public void Score(float points)
    {
        score += points;
        scoreText.text = "Puntaje\n" + score;
    }
}
