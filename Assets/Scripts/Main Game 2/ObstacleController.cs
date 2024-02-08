using System.Collections;
using UnityEngine;

public class ObstacleController : MonoBehaviour
{
    [SerializeField] private Mesh[] meshes;
    [SerializeField] private Material material;
    private AudioSource hitAudio;

    // Start is called before the first frame update
    void Start()
    {
        int idx = Random.Range(0, meshes.Length);
        GetComponent<MeshFilter>().mesh = meshes[idx];
        GetComponent<MeshRenderer>().material = material;

        hitAudio = GetComponent<AudioSource>();
        hitAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;
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
            hitAudio.Play();
            other.GetComponent<PlayerController>().Hurt();
            StartCoroutine(DestroyObstacle());
        }
    }

    private IEnumerator DestroyObstacle()
    {
        GetComponent<MeshRenderer>().enabled = false;
        yield return new WaitUntil(() => hitAudio.time == hitAudio.clip.length);
        Destroy(gameObject);
    }

    void OnTriggerExit2D(Collider2D other)
    {
        if (other.name == "Bottom")
            Destroy(gameObject);
    }
}
