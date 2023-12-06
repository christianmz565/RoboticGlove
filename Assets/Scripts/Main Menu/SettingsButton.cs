using UnityEngine;

public class SettingsButton : MonoBehaviour, BaseButton
{
    public void OnInteract()
    {
        StartCoroutine(SceneChanger.ChangeScene("Settings Menu"));
    }
}
