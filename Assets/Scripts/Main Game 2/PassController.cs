using System.Collections;
using UnityEngine;

public class PassController : AnyObjectController
{
    private PlayerController player;
    private bool hurtPlayer = true;
    private bool isChecking = false;
    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.Find("Player").GetComponent<PlayerController>();

    }

    void OnTriggerEnter2D(Collider2D other)
    {
        switch (other.name)
        {
            case "Check":
                isChecking = true;
                StartCoroutine(CheckPlayer());
                break;
            case "Player":
                hurtPlayer = false;
                break;
        }
    }

    new void OnTriggerExit2D(Collider2D other)
    {
        base.OnTriggerExit2D(other);
        switch (other.name)
        {
            case "Check":
                isChecking = false;
                break;
            case "Player":
                hurtPlayer = true;
                break;
        }
    }

    IEnumerator CheckPlayer()
    {
        float timer = GameSettings.PlayerInvulSeconds;
        while (isChecking)
        {
            if (hurtPlayer && timer > GameSettings.PlayerInvulSeconds) {
                player.Hurt();
                timer = 0;
            }
            timer += Time.deltaTime;
            yield return null;
        }
    }
}
