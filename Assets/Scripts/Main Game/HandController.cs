using UnityEngine;

public class HandController : MonoBehaviour
{
    [SerializeField] private Sprite[] sprites;
    private Collider2D objectCollider;
    private bool isHolding = false;

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
            StartHold();
        if (Input.GetKeyUp(KeyCode.Space))
            EndHold();
    }

    void StartHold()
    {
        RaycastHit2D[] hits = Physics2D.CircleCastAll(transform.position, 0.25f, Vector2.zero, 0);
        foreach (RaycastHit2D hit in hits)
        {
            if (hit.collider.name == "Object")
            {
                objectCollider = hit.collider;
                break;
            }
        }
        if (objectCollider)
        {
            isHolding = true;
            objectCollider.GetComponent<ObjectController>().isHeld = true;
            GetComponent<SpriteRenderer>().sprite = sprites[0];
        }
    }

    void EndHold()
    {
        if (isHolding)
        {
            isHolding = false;
            objectCollider.GetComponent<ObjectController>().isHeld = false;
            GetComponent<SpriteRenderer>().sprite = sprites[1];
            objectCollider = null;
        }
    }
}
