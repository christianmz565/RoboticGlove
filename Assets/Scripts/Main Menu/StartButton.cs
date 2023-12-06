using UnityEngine;

public class StartButton : MonoBehaviour, BaseButton
{
    public void OnInteract()
    {
        StartCoroutine(SceneChanger.ChangeScene("Levels Menu"));
    }
}
