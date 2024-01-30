using UnityEngine;

public class ExitButton : BaseButton
{
    public override void InteractAction()
    {
        Debug.Log("quit");
        Application.Quit();
    }
}
