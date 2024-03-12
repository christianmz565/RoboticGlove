using System.Collections;
using UnityEngine;

public class ObstacleController : AnyObjectController
{
    private AudioSource hitAudio;
    private Animator animator;

    // Start is called before the first frame update
    void Start()
    {
        hitAudio = GetComponent<AudioSource>();
        animator = GetComponent<Animator>();
        hitAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.name == "Player")
        {
            hitAudio.Play();
            if (!other.GetComponent<PlayerController>().Hurt())
                StartCoroutine(DestroyObstacle());
        }
    }

    private IEnumerator DestroyObstacle()
    {
        animator.SetTrigger("Vanish");
        yield return new WaitForSeconds(0.5f);
        Destroy(gameObject);
    }
}
