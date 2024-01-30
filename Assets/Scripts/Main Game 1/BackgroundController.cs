using UnityEngine;

public class BackgroundController : MonoBehaviour
{
    [SerializeField] Material[] backgrounds;

    void Start()
    {
        GetComponent<MeshRenderer>().material = backgrounds[Random.Range(0, backgrounds.Length)];
    }
}