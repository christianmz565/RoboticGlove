using System.Collections;
using UnityEngine;

public class TutorialG2 : MonoBehaviour
{
    public float timeScale;
    [SerializeField] private PlayerController player;
    private Animator animator;
    private const float slowDelay = 0.3f;

    void Start()
    {
        animator = GetComponent<Animator>();
        animator.enabled = false;
    }

    void Update()
    {
        Time.timeScale = timeScale;
    }

    public IEnumerator SlowDown()
    {
        yield return new WaitForSeconds(slowDelay);
        animator.enabled = true;
        animator.Play("SlowDown");
    }
}