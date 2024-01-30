using UnityEngine;

public class SceneChangeButton : BaseButton
{
    [SerializeField] private string sceneTo;

    public override void InteractAction()
    {
        StartCoroutine(SceneChanger.ChangeScene(sceneTo));
    }
}
