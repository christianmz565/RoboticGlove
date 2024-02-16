using System.Collections;
using UnityEngine;

public class ExtraController : AnyObjectController
{
    [SerializeField] private Sprite[] sprites;
    private AudioSource extraAudio;

    // Start is called before the first frame update
    void Start()
    {
        SpriteRenderer sRenderer = GetComponent<SpriteRenderer>();
        sRenderer.sprite = sprites[Random.Range(0, sprites.Length)];
        sRenderer.size = Vector2.one;

        extraAudio = GetComponent<AudioSource>();
        extraAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.name == "Player")
        {
            extraAudio.Play();
            other.GetComponent<PlayerController>().Score(100);
            StartCoroutine(DestroyExtra());
        }
    }

    private IEnumerator DestroyExtra()
    {
        GetComponent<SpriteRenderer>().enabled = false;
        yield return new WaitUntil(() => extraAudio.time == extraAudio.clip.length);
        Destroy(gameObject);
    }
}
