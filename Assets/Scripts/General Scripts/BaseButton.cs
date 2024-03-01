using UnityEngine;

public abstract class BaseButton : MonoBehaviour
{
    private AudioSource buttonAudio;
    private Animator animator;

    public void Start()
    {
        buttonAudio = GetComponent<AudioSource>();
        animator = GetComponent<Animator>();
        buttonAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;
    }

    public void StartInteract()
    {
        buttonAudio.Play();
        animator.SetTrigger("Start");

    }

    public void EndInteract()
    {
        InteractAction();
        animator.SetTrigger("End");
    }

    public abstract void InteractAction();
}
