using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnyObjectController : MonoBehaviour
{
    void Update()
    {
        transform.Translate(GameSettings.ScrollSpeed * Time.deltaTime * Vector2.down);
    }

    public void OnTriggerExit2D(Collider2D other)
    {
        if (other.name == "Bottom")
            Destroy(gameObject);
    }
}
