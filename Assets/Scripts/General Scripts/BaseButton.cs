using UnityEngine;
using UnityEngine.UI;

public abstract class BaseButton : MonoBehaviour
{
    [SerializeField] private Sprite pressedSprite;
    private Sprite normalSprite;
    private Transform icon;
    private Image image;
    private float height;
    private const float PRESSED_DOWN_SCALE = 0.1f;

    void Start()
    {
        height = GetComponent<RectTransform>().rect.height;
        // image = GetComponent<Image>();
        // normalSprite = image.sprite;
        // icon = transform.GetChild(0);
    }

    public void StartInteract()
    {
        // image.sprite = pressedSprite;
        transform.Translate(Vector2.down * height * PRESSED_DOWN_SCALE);
    }

    public void EndInteract()
    {
        InteractAction();
        // image.sprite = normalSprite;
        transform.Translate(Vector2.up * height * PRESSED_DOWN_SCALE);
    }

    public abstract void InteractAction();
}
