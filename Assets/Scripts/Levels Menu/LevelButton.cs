using UnityEngine;

public class LevelButton : BaseButton
{
    new void Start()
    {
        base.Start();
        if (GameSettings.Level == name)
        {
            Vector3 pos = transform.position;
            Transform cursor = GameObject.Find("Cursor").transform;
            pos.z = cursor.transform.position.z;
            cursor.position = pos;
        }
    }

    public override void InteractAction()
    {
        GameSettings.Level = name;
        StartCoroutine(SceneChanger.ChangeScene("Main Game " + GameSettings.Game));
    }
}
