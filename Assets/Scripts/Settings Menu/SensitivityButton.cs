using UnityEngine.UI;
using UnityEngine;

public class SensitivityButton : BaseButton
{
    [SerializeField] private Text sensitivityText;
    [SerializeField] private int direction;

    public override void InteractAction()
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
