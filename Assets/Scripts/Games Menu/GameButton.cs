using UnityEngine;

public class GameButton : BaseButton
{
    public override void InteractAction()
    {
        GameSettings.Game = name;
        StartCoroutine(SceneChanger.ChangeScene("Levels Menu"));
    }
}
