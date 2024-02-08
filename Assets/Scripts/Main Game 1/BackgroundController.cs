using UnityEngine;

public class BackgroundController : MonoBehaviour
{
    [SerializeField] Sprite[] backgrounds;

    void Start()
    {
        GetComponent<SpriteRenderer>().sprite = backgrounds[Random.Range(0, backgrounds.Length)];
    }
}