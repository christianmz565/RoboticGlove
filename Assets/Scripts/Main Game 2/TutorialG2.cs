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
    private bool avoid;

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
            if (avoid)
            {
                for (int i = 0; i < 4; i++)
                    if (i != column)
                        roads[i].color = slowColor;
            }
            else
            {
                roads[column].color = slowColor;
            }
        }
        if (Input.GetKeyDown(KeyCode.F7))
            Time.timeScale = 3f;
        if (Input.GetKeyDown(KeyCode.F8))
            Time.timeScale = 1f;
    }

    // only works between 1 and 4
    // limit those difficulties to normal levels
    // just dont slow on endless mode
    public IEnumerator SlowDown(int column, bool avoid)
    {
        this.column = column;
        this.avoid = avoid;
        animator.SetTrigger("Slow");
        yield return new WaitUntil(() => avoid == (player.currentColumn != this.column) || !player.alive);
        animator.SetTrigger("Speed");
        slowing = false;
    }
}