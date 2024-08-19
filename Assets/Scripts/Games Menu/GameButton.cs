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
        StartCoroutine(DestroyAndChangeScene());
    }

    IEnumerator DestroyAndChangeScene()
    {
        GameObject bluetoothManager = GameObject.Find("BluetoothManager");
        Destroy(bluetoothManager);
        BluetoothManager.instance = null;
        yield return new WaitForEndOfFrame();
        yield return new WaitForEndOfFrame();

        // in case this doesnt work make it a coroutine and add a delay after destroying the manager because thanks unity
        GameObject instNewBluetoothManager = Instantiate(new GameObject());
        instNewBluetoothManager.name = "BluetoothManager";
        BluetoothManager manager = instNewBluetoothManager.AddComponent<BluetoothManager>();
        BluetoothManager.instance = manager;
        DontDestroyOnLoad(instNewBluetoothManager);
        manager.game = GameSettings.Game;
        StartCoroutine(SceneChanger.ChangeScene("Levels Menu"));
    }
}
