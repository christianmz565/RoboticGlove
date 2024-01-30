using UnityEngine;
using TMPro;

public class PlayerController : MonoBehaviour
{
    public int health;
    public int score = 0;
    [SerializeField] private GameObject canvas;
    [SerializeField] private Sprite[] sprites;
    private Vector3[] positions = {
        new Vector3(-GameSettings.Width / 2, -2.5f, -2),
        new Vector3(-GameSettings.Width / 2 + GameSettings.Width / 3, -2.5f, -2),
        new Vector3(-GameSettings.Width / 2 + 2 * GameSettings.Width / 3, -2.5f, -2),
        new Vector3(-GameSettings.Width / 2 + 3 * GameSettings.Width / 3, -2.5f, -2)
    };

    // Start is called before the first frame update
    void Start()
    {
        GetComponentInChildren<TextMeshPro>().text = health + "";
        GetComponent<SpriteRenderer>().sprite = sprites[Random.Range(0, sprites.Length)];
    }

    // Update is called once per frame
    void Update()
    {
        Move();
    }

    void Move()
    {
        if (Input.GetKeyDown(KeyCode.D))
            transform.position = positions[0];
        else if (Input.GetKeyDown(KeyCode.F))
            transform.position = positions[1];
        else if (Input.GetKeyDown(KeyCode.J))
            transform.position = positions[2];
        else if (Input.GetKeyDown(KeyCode.K))
            transform.position = positions[3];
    }

    public void Hurt()
    {
        //health = Mathf.Max(0, health - 1);
        health -= 1;
        GetComponentInChildren<TextMeshPro>().text = health + "";
    }

    public void Score()
    {
        score += 10;
        canvas.transform.Find("Score").GetComponent<TextMeshProUGUI>().text = "Score: " + score;
    }
}
