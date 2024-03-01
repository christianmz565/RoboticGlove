using UnityEngine;
using UnityEngine.UI;

public class SettingsManager : MonoBehaviour
{
    public static Vector2[] resolutionsList = { new Vector2(640, 480), new Vector2(1280, 720), new Vector2(1366, 768), new Vector2(1600, 900), new Vector2(1920, 1080), new Vector2(1920, 1200), new Vector2(2560, 1440), new Vector2(2560, 1600) };

    void Start()
    {
        LoadSettings();
    }

    public void LoadSettings()
    {
        if (!PlayerPrefs.HasKey("resolutionIndex"))
            PlayerPrefs.SetInt("resolutionIndex", 0);
        if (!PlayerPrefs.HasKey("fullscreen"))
            PlayerPrefs.SetInt("fullscreen", 1);
        if (!PlayerPrefs.HasKey("volume"))
            PlayerPrefs.SetInt("volume", 25);
        if (!PlayerPrefs.HasKey("cursorSensitivity"))
            PlayerPrefs.SetInt("cursorSensitivity", 3);

        int resolutionIndex = PlayerPrefs.GetInt("resolutionIndex", 0);
        bool fullscreen = PlayerPrefs.GetInt("fullscreen", 1) == 1;
        Vector2 resolution = resolutionsList[resolutionIndex];
        Screen.SetResolution((int)resolution.x, (int)resolution.y, fullscreen);
        //GameObject.Find("Canvas").GetComponent<CanvasScaler>().referenceResolution = new Vector2(0, resolution.y);
        // do something with volume
    }
}
