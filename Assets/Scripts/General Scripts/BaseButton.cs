using UnityEngine;
using UnityEngine.UI;

public abstract class BaseButton : MonoBehaviour
{
    private AudioSource buttonAudio;
    private float height;
    private const float PRESSED_DOWN_SCALE = 0.1f;

    void Start()
    {
        buttonAudio = GetComponent<AudioSource>();
        buttonAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;

        height = GetComponent<RectTransform>().rect.height;
    }

    public void StartInteract()
    {
        buttonAudio.Play();
        transform.Translate(Vector2.down * height * PRESSED_DOWN_SCALE);
    }

    public void EndInteract()
    {
        InteractAction();
        transform.Translate(Vector2.up * height * PRESSED_DOWN_SCALE);
    }

    public abstract void InteractAction();
}
