using UnityEngine;

public class MusicController : MonoBehaviour
{
    [SerializeField] private AudioClip music;
    private static MusicController instance;
    private AudioSource audioSource;

    private void Awake()
    {
        if (instance != null && instance != this)
        {
            instance.audioSource.volume = PlayerPrefs.GetInt("volume") / 100.0f;
            if (instance.audioSource.clip != music)
            {
                instance.audioSource.clip = music;
                instance.audioSource.Play();
            }
            Destroy(gameObject);
        }
        else
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
            audioSource = GetComponent<AudioSource>();
            audioSource.volume = PlayerPrefs.GetInt("volume") / 100.0f;
            audioSource.Play();
        }
    }

    // Start is called before the first frame update
    void Start()
    {
    }
}
