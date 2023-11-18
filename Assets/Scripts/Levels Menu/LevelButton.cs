using UnityEngine;

public class LevelButton : MonoBehaviour, BaseButton
{
    public void OnInteract()
    {
        GameSettings.level = name;
        SceneChanger.ChangeScene(this, "Main Game");
    }
}
