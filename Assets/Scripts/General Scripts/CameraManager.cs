using UnityEngine;

public class CameraManager : MonoBehaviour
{
    public static Vector2[] resolutionsList = { new Vector2(640, 480), new Vector2(1280, 720), new Vector2(1366, 768), new Vector2(1600, 900), new Vector2(1920, 1080), new Vector2(1920, 1200), new Vector2(2560, 1440), new Vector2(2560, 1600) };

    void Start()
    {
        int resolutionIndex = PlayerPrefs.GetInt("resolutionIndex", 0);
        Vector2 resolution = resolutionsList[resolutionIndex];
        Camera.main.aspect = resolution.x / resolution.y;
    }
}
