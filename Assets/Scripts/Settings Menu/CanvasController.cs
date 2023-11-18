using TMPro;
using UnityEngine;

public class CanvasController : MonoBehaviour
{
    [SerializeField] private TMP_Text resolutionText;
    [SerializeField] private TMP_Text fullscreenText;
    [SerializeField] private TMP_Text volumeText;
    [SerializeField] private TMP_Text sensitivityText;

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
        fullscreenText.text = PlayerPrefs.GetInt("fullscreen") == 1 ? "Sí" : "No";
        volumeText.text = PlayerPrefs.GetInt("volume") + "%";
        sensitivityText.text = PlayerPrefs.GetInt("cursorSensitivity") + "";
    }
}
