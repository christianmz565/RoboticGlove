using UnityEngine;

public class ObstacleController : MonoBehaviour
{
    [SerializeField] private Mesh[] meshes;
    [SerializeField] private Material material;

    // Start is called before the first frame update
    void Start()
    {
        int idx = Random.Range(0, meshes.Length);
        GetComponent<MeshFilter>().mesh = meshes[idx];
        GetComponent<MeshRenderer>().material = material;
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(GameSettings.ScrollSpeed * Vector3.left * Time.deltaTime);
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.name == "Player")
        {
            other.GetComponent<PlayerController>().Hurt();
            Destroy(gameObject);
        }
    }

    void OnTriggerExit2D(Collider2D other)
    {
        if (other.name == "Bottom")
            Destroy(gameObject);
    }
}
