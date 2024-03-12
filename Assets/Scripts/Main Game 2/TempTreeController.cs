using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TempTreeController : AnyObjectController
{
    private AudioSource hitAudio;
    private Animator animator;

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
                StartCoroutine(DestroyTree());
        }
    }

    private IEnumerator DestroyTree()
    {
        animator.SetTrigger("Vanish");
        yield return new WaitForSeconds(0.5f);
        Destroy(gameObject);
    }
}
