using UnityEngine;

public class InputManager : MonoBehaviour
{
    private BaseButton button = null;

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
        float mult = Mathf.Pow(0.9f, PlayerPrefs.GetInt("cursorSensitivity")) * 10;
        if (Input.GetKey(KeyCode.A))
            transform.Translate(Time.deltaTime * mult * Vector2.left);
        if (Input.GetKey(KeyCode.W))
            transform.Translate(Time.deltaTime * mult * Vector2.up);
        if (Input.GetKey(KeyCode.S))
            transform.Translate(Time.deltaTime * mult * Vector2.down);
        if (Input.GetKey(KeyCode.D))
            transform.Translate(Time.deltaTime * mult * Vector2.right);

        if (Input.GetKeyDown(KeyCode.Space))
            ButtonInteract();
        if (Input.GetKeyUp(KeyCode.Space))
            ButtonEndInteract();
    }

    void ButtonInteract()
    {
        RaycastHit2D hit = Physics2D.CircleCast(transform.position, 0.25f, Vector2.zero, 0);
        Debug.DrawLine(transform.position, (Vector2)transform.position + Vector2.up / 4, Color.green, 1);
        Debug.DrawLine(transform.position, (Vector2)transform.position + Vector2.right / 4, Color.green, 1);
        Debug.DrawLine(transform.position, (Vector2)transform.position + Vector2.down / 4, Color.green, 1);
        Debug.DrawLine(transform.position, (Vector2)transform.position + Vector2.left / 4, Color.green, 1);
        if (hit.collider != null)
        {
            bool validButton = hit.collider.TryGetComponent<BaseButton>(out button);
            if (validButton)
                button.StartInteract();
        }
    }

    void ButtonEndInteract()
    {
        if (button != null)
        {
            button.EndInteract();
            button = null;
        }
    }
}
