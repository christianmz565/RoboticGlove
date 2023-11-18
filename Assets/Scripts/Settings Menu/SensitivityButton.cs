using TMPro;
using UnityEngine;

public class SensitivityButton : MonoBehaviour, BaseButton
{
    [SerializeField] private TMP_Text sensitivityText;
    [SerializeField] private int direction;

    void Start()
    {
    }

    public void OnInteract()
    {
        int sensitivity = PlayerPrefs.GetInt("cursorSensitivity");
        switch (direction)
        {
            case -1:
                sensitivity--;
                break;
            case 1:
                sensitivity++;
                break;
        }
        PlayerPrefs.SetInt("cursorSensitivity", sensitivity);
        sensitivity = Mathf.Clamp(sensitivity, 1, 10);
        Debug.Log("Sensitivity changed to " + sensitivity);
        sensitivityText.text = sensitivity + "";
        PlayerPrefs.Save();
    }
}
