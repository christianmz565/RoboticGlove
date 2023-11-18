using UnityEngine;

public class BackButton : MonoBehaviour, BaseButton
{
    public void OnInteract()
    {
        SceneChanger.ChangeScene(this, "Main Menu");
    }
}
