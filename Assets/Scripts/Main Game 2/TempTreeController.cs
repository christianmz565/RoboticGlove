using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TempTreeController : AnyObjectController
{
    private AudioSource hitAudio;

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
            StartCoroutine(DestroyTree());
        }
    }

    private IEnumerator DestroyTree()
    {
        GetComponent<SpriteRenderer>().enabled = false;
        yield return new WaitUntil(() => hitAudio.time == hitAudio.clip.length);
        Destroy(gameObject);
    }
}
