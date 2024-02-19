using UnityEngine.UI;
using UnityEngine;

public class ChooseHandButton : BaseButton
{
    [SerializeField] private Text chosenHandText;

    public override void InteractAction()
    {
        int previous = PlayerPrefs.GetInt("chosenHand");
        bool current = !IntToBool(previous);
        PlayerPrefs.SetInt("chosenHand", BoolToInt(current));
        Debug.Log("hand: " + current);
        chosenHandText.text = current ? "DERECHA" : "IZQUIERDA";
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
