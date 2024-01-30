using UnityEngine;

public class GameButton : BaseButton
{
    public override void InteractAction()
    {
        GameSettings.Game = transform.parent.name;
        StartCoroutine(SceneChanger.ChangeScene("Levels Menu"));
    }
}
