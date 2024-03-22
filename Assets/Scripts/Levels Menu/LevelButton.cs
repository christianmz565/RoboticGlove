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
        GameObject bluetoothManager = GameObject.Find("BluetoothManager");
        Destroy(bluetoothManager);

        // in case this doesnt work make it a coroutine and add a delay after destroying the manager because thanks unity
        GameObject newBluetoothManager = new();
        BluetoothManager manager = newBluetoothManager.AddComponent<BluetoothManager>();
        Instantiate(newBluetoothManager);
        manager.game = GameSettings.Game;

        StartCoroutine(SceneChanger.ChangeScene("Main Game " + GameSettings.Game));
    }
}
