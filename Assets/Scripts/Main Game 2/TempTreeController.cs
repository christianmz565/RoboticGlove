using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TempTreeController : MonoBehaviour
{
    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.name == "Player")
        {
            other.GetComponent<PlayerController>().Hurt();
            Destroy(gameObject);
        }
    }
}
