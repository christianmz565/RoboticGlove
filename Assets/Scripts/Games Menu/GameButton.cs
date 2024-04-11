using System.Collections;
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
        StartCoroutine(DestroyBluetoothAndChangeScene());
    }

    private IEnumerator DestroyBluetoothAndChangeScene()
    {
        GameObject bluetoothManager = GameObject.Find("Bluetooth Manager");
        Destroy(bluetoothManager);
        yield return new WaitForEndOfFrame();
        StartCoroutine(SceneChanger.ChangeScene("Levels Menu"));
    }
}
