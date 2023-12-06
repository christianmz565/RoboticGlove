using UnityEngine;

public class SceneChangeButton : MonoBehaviour, BaseButton
{
    [SerializeField] private string sceneTo;

    public void OnInteract()
    {
        StartCoroutine(SceneChanger.ChangeScene(sceneTo));
    }
}
