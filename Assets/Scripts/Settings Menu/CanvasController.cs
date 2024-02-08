using UnityEngine.UI;
using UnityEngine;

public class CanvasController : MonoBehaviour
{
    [SerializeField] private Text resolutionText;
    [SerializeField] private Text fullscreenText;
    [SerializeField] private Text volumeText;
    [SerializeField] private Text sensitivityText;

    // Start is called before the first frame update
    void Start()
    {
        LoadCanvas();
    }

    // Update is called once per frame
    void Update()
    {

    }


    void LoadCanvas()
    {
        Vector2[] resolutionsList = SettingsManager.resolutionsList;
        Vector2 resolution = resolutionsList[PlayerPrefs.GetInt("resolutionIndex")];
        resolutionText.text = resolution.x + "x" + resolution.y;
        fullscreenText.text = PlayerPrefs.GetInt("fullscreen") == 1 ? "SI" : "NO";
        volumeText.text = PlayerPrefs.GetInt("volume") + "%";
        sensitivityText.text = PlayerPrefs.GetInt("cursorSensitivity") + "";
    }
}
