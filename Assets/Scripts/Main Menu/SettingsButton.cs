using UnityEngine;

public class SettingsButton : MonoBehaviour, BaseButton
{
    public void OnInteract()
    {
        SceneChanger.ChangeScene(this, "Settings Menu");
    }
}
