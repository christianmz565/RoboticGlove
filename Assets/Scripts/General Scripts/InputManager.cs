using UnityEngine;

public class InputManager : MonoBehaviour
{

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        Check();
    }

    void Check()
    {
        float mult = 10 * Mathf.Pow(0.9f, PlayerPrefs.GetInt("cursorSensitivity"));
        if (Input.GetKey(KeyCode.A))
            transform.Translate(Vector2.left * Time.deltaTime * mult);
        if (Input.GetKey(KeyCode.W))
            transform.Translate(Vector2.up * Time.deltaTime * mult);
        if (Input.GetKey(KeyCode.S))
            transform.Translate(Vector2.down * Time.deltaTime * mult);
        if (Input.GetKey(KeyCode.D))
            transform.Translate(Vector2.right * Time.deltaTime * mult);
        if (Input.GetKeyDown(KeyCode.Space))
            ButtonInteract();
    }

    void ButtonInteract()
    {
        RaycastHit2D hit = Physics2D.CircleCast(transform.position, 0.25f, Vector2.zero, 0);
        Debug.DrawLine(transform.position, (Vector2)transform.position + Vector2.up / 4, Color.green, 1);
        Debug.DrawLine(transform.position, (Vector2)transform.position + Vector2.right / 4, Color.green, 1);
        Debug.DrawLine(transform.position, (Vector2)transform.position + Vector2.down / 4, Color.green, 1);
        Debug.DrawLine(transform.position, (Vector2)transform.position + Vector2.left / 4, Color.green, 1);
        if (hit)
            hit.collider.GetComponent<BaseButton>().OnInteract();
    }
}
