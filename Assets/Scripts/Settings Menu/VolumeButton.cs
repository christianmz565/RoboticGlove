using TMPro;
using UnityEngine;

public class VolumeButton : MonoBehaviour, BaseButton
{
    [SerializeField] private TMP_Text volumeText;
    [SerializeField] private int direction;

    void Start()
    {
    }

    public void OnInteract()
    {
        int volume = PlayerPrefs.GetInt("volume");
        switch (direction)
        {
            case -3:
                volume -= 10;
                break;
            case -2:
                volume -= 5;
                break;
            case -1:
                volume -= 1;
                break;
            case 1:
                volume += 1;
                break;
            case 2:
                volume += 5;
                break;
            case 3:
                volume += 10;
                break;
        }
        PlayerPrefs.SetInt("volume", volume);
        volume = Mathf.Clamp(volume, 0, 100);
        Debug.Log("Volume changed to " + volume);
        volumeText.text = volume + "%";
        PlayerPrefs.Save();
    }
}
