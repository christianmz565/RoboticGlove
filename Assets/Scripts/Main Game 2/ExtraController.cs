using UnityEngine;

public class ExtraController : MonoBehaviour
{
    [SerializeField] private Sprite[] sprites;

    // Start is called before the first frame update
    void Start()
    {
        SpriteRenderer sRenderer = GetComponent<SpriteRenderer>();
        sRenderer.sprite = sprites[Random.Range(0, sprites.Length)];
        sRenderer.size = Vector2.one;
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.name == "Player")
        {
            other.GetComponent<PlayerController>().Score();
            Destroy(gameObject);
        }
    }
}
