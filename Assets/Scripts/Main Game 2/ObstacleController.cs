using System.Collections;
using UnityEngine;

public class ObstacleController : AnyObjectController
{
    private AudioSource hitAudio;

    // Start is called before the first frame update
    void Start()
    {
        hitAudio = GetComponent<AudioSource>();
        hitAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.name == "Player")
        {
            hitAudio.Play();
            other.GetComponent<PlayerController>().Hurt();
            // StartCoroutine(DestroyObstacle());
        }
    }

    private IEnumerator DestroyObstacle()
    {
        GetComponent<SpriteRenderer>().enabled = false;
        yield return new WaitUntil(() => hitAudio.time == hitAudio.clip.length);
        Destroy(gameObject);
    }
}
