using UnityEngine;

public class GameButton : BaseButton
{
    new void Start()
    {
        base.Start();
        if (GameSettings.Game == name)
        {
            Vector3 pos = transform.position;
            Transform cursor = GameObject.Find("Cursor").transform;
            pos.z = cursor.transform.position.z;
            cursor.position = pos;
        }
    }

    public override void InteractAction()
    {
        GameSettings.Game = name;
        GameSettings.Level = "1";
        StartCoroutine(SceneChanger.ChangeScene("Levels Menu"));
    }
}
