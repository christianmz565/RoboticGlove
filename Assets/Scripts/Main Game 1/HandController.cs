using UnityEngine;
public class HandController : MonoBehaviour
{
    [SerializeField] private Sprite[] sprites;
    [SerializeField] private NodeGrid nodeGrid;
    private AudioSource pullAudio;
    private NodeController pickedNode;
    private Vector2 previousNodePos;
    private bool isHolding = false;
    private BluetoothManager bluetoothManager;

    void Start()
    {
        bluetoothManager = GameObject.Find("BluetoothManager").GetComponent<BluetoothManager>();
        pullAudio = GetComponent<AudioSource>();
        pullAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;
    }

    // Update is called once per frame
    void Update()
    {
        Check();
    }

    void Check()
    {
        float mult = 5 * Mathf.Pow(0.9f, PlayerPrefs.GetInt("cursorSensitivity"));
        Vector2 direction = Vector2.zero;

        if (bluetoothManager.ejex < 60)
            direction += Vector2.left;
        if (bluetoothManager.ejex > 200)
            direction += Vector2.right;
        if (bluetoothManager.ejey < 60)
            direction += Vector2.down;
        if (bluetoothManager.ejey > 220)
            direction += Vector2.up;

        MoveAndPlayAudio(mult * Time.deltaTime * direction);
        if (!isHolding && bluetoothManager.caption1 > 8 && bluetoothManager.caption2 > 90 && bluetoothManager.caption3 > 15 && bluetoothManager.caption4 > 140)
            StartHold();
        if (isHolding && bluetoothManager.caption1 < 3 && bluetoothManager.caption2 < 30 && bluetoothManager.caption3 < 5 && bluetoothManager.caption4 < 40)
            EndHold();
    }

    void MoveAndPlayAudio(Vector2 direction)
    {
        if (!isHolding || direction == Vector2.zero)
        {
            pullAudio.loop = false;
        }
        else if (isHolding && !pullAudio.isPlaying)
        {
            pullAudio.loop = true;
            pullAudio.Play();
        }

        float x = transform.position.x + direction.x;
        float y = transform.position.y + direction.y;
        if (-9 < x && x < 9 && -4 < y && y < 4)
            transform.Translate(direction);
    }

    void StartHold()
    {
        Vector2 nodePos = nodeGrid.RealToRelativePosition(transform.position);
        NodeController node = nodeGrid.GetNodeByRelativePos(nodePos);
        if (node != null)
        {
            previousNodePos = nodePos;
            isHolding = true;
            node.StartHold();
            pickedNode = node;
            GetComponent<SpriteRenderer>().sprite = sprites[0];
            Debug.Log("Now holding " + node.name);
        }
    }

    void EndHold()
    {
        if (isHolding)
        {
            Debug.Log("Now holding (not) " + pickedNode.name);
            isHolding = false;
            pickedNode.EndHold();
            Vector2 newNodePos = nodeGrid.RealToRelativePosition(new Vector2(transform.position.x, transform.position.y));
            nodeGrid.MoveNode(pickedNode, previousNodePos, newNodePos);
            pickedNode = null;
            GetComponent<SpriteRenderer>().sprite = sprites[1];

        }
    }

}
