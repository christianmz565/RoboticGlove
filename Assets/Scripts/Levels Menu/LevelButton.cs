using UnityEngine;

public class LevelButton : MonoBehaviour, BaseButton
{
    public void OnInteract()
    {
        GameSettings.Level = name;
        StartCoroutine(SceneChanger.ChangeScene("Main Game"));
    }
}
