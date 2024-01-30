using UnityEngine.UI;
using UnityEngine;

public class FullScreenButton : BaseButton
{
    [SerializeField] private Text fullscreenText;

    public override void InteractAction()
    {
        int previous = PlayerPrefs.GetInt("fullscreen");
        bool current = !IntToBool(previous);
        PlayerPrefs.SetInt("fullscreen", BoolToInt(current));
        Debug.Log("fullscreen: " + current);
        fullscreenText.text = current ? "Sí" : "No";
        Screen.fullScreen = current;
        PlayerPrefs.Save();
    }

    private bool IntToBool(int n)
    {
        return n == 1;
    }

    private int BoolToInt(bool b)
    {
        return b ? 1 : 0;
    }

    
}
