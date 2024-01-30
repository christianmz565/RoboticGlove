using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnyObjectController : MonoBehaviour
{
    void Update()
    {
        transform.Translate(GameSettings.ScrollSpeed * Vector2.down * Time.deltaTime);
    }

    void OnTriggerExit2D(Collider2D other)
    {
        if (other.name == "Bottom")
            Destroy(gameObject);
    }
}
