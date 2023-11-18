using UnityEngine;

public class StartButton : MonoBehaviour, BaseButton
{
    public void OnInteract()
    {
        SceneChanger.ChangeScene(this, "Levels Menu");
    }
}
