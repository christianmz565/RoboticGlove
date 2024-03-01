using System.Collections;
using UnityEngine;

public class TutorialG2 : MonoBehaviour
{
    public float timeScale;
    public Color slowColor;
    public bool slowing;
    [SerializeField] private PlayerController player;
    [SerializeField] private AudioSource carAudio;
    [SerializeField] private SpriteRenderer[] roads;
    private AudioSource musicAudio;
    private Animator animator;
    private int column;

    void Start()
    {
        animator = GetComponent<Animator>();
        musicAudio = GameObject.Find("Music").GetComponent<AudioSource>();
    }

    void Update()
    {
        if (slowing)
        {
            Time.timeScale = timeScale;
            carAudio.pitch = timeScale * 2.5f;
            musicAudio.pitch = timeScale;
            roads[column].color = slowColor;
        }
    }

    // only works between 1 and 4
    // limit those difficulties to normal levels
    // just dont slow on endless mode
    public IEnumerator SlowDown(int col)
    {
        column = col;
        animator.SetTrigger("Slow");
        yield return new WaitUntil(() => player.currentColumn == column || !player.alive);
        animator.SetTrigger("Speed");
        slowing = false;
    }
}