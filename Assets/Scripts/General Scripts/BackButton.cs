using UnityEngine;

public class BackButton : MonoBehaviour, BaseButton
{
    public void OnInteract()
    {
        StartCoroutine(SceneChanger.ChangeScene("Main Menu"));
    }
}
