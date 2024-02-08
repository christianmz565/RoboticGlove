using UnityEngine;

public class LevelButton : BaseButton
{
    public override void InteractAction()
    {
        GameSettings.Level = name;
        StartCoroutine(SceneChanger.ChangeScene("Main Game " + GameSettings.Game));
    }
}
