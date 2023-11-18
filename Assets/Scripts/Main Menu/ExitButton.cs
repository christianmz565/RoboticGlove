using UnityEngine;

public class ExitButton : MonoBehaviour, BaseButton
{
    public void OnInteract()
    {
        Debug.Log("quit");
        Application.Quit();
    }
}
