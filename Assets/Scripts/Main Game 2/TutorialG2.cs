using System.Collections;
using UnityEngine;

public class TutorialG2 : MonoBehaviour
{
    public float timeScale;
    [SerializeField] private PlayerController player;
    [SerializeField] private AudioSource carAudio;
    [SerializeField] private MeshRenderer display;
    private Animator animator;

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

    // only works between 1 and 4
    // limit those difficulties to normal levels
    // just dont slow on endless mode
    public IEnumerator SlowDown()
    {
        float slowDelay = GameSettings.ScrollSpeed / 15f;
        Debug.Log(GameSettings.ScrollSpeed + " " + slowDelay);
        yield return new WaitForSeconds(slowDelay);
        animator.enabled = true;
        animator.Play("SlowDown");
    }
}