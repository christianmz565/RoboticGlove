using System.Collections;
using UnityEngine;

public class TutorialG2 : MonoBehaviour
{
    public float timeScale;
    [SerializeField] private PlayerController player;
    [SerializeField] private AudioSource carAudio;
    [SerializeField] private MeshRenderer display;
    private Animator animator;
    private float slowDelay = GameSettings.ScrollSpeed / 3f;

    void Start()
    {
        animator = GetComponent<Animator>();
        animator.enabled = false;
    }

    void Update()
    {
        Time.timeScale = timeScale;
        carAudio.pitch = timeScale * 2.5f;
        display.material.SetFloat("_GrayscaleIntensity", 1 - timeScale);
    }

    public IEnumerator SlowDown()
    {
        yield return new WaitForSeconds(slowDelay);
        animator.enabled = true;
        animator.Play("SlowDown");
    }
}