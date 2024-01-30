using UnityEngine;

public class LevelButton : BaseButton
{
    public override void InteractAction()
    {
        GameSettings.Level = transform.parent.name;
        StartCoroutine(SceneChanger.ChangeScene("Main Game " + GameSettings.Game));
    }
}
