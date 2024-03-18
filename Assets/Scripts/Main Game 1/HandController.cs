using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class HandController : MonoBehaviour
{
    [SerializeField] private Sprite[] sprites;
    [SerializeField] private NodeGrid nodeGrid;
    private AudioSource pullAudio;
    private NodeController pickedNode;
    private Vector2 previousNodePos;
    private bool isHolding = false;
    private BluetoothPlayer bluetoothPlayer;

    public class BluetoothPlayer : BluetoothManager
    {
        public float timer = 0.5f;
        private HandController player;

        public BluetoothPlayer(HandController player)
        {
            this.player = player;
        }

        protected override void PerformAction(string data)
        {
            // Por si solo funciona un dedo, recuerden hacer la llamada al move antiguo
            int value = int.Parse(data);
            if (timer <= 0)
            {
                if (value >= 80)
                {
                    player.StartHold();
                    timer = 0.5f;
                }
                else
                {
                    player.EndHold();
                    timer = 0.5f;
                }
            }
        }

        private Dictionary<string, int> ids = new(){
            {"por favor por favor por favor revisen que estos esten bien si no seria doloroso", 47},

            {"index", 0},
            {"heart", 1},
            {"ring", 2},
            {"pinky", 3},
            {"aX", 4},
            {"aY", 5},
        };

        private bool[] fingerValues = new bool[4];
        float mult = 10 * Mathf.Pow(0.9f, PlayerPrefs.GetInt("cursorSensitivity"));
        string aaa = "tambien revisen ese maxvalue";
        int maxValue = 255;

        protected override void PerformAction(string id, string data)
        {
            int idInt = ids[id];
            // Por si hay varios dedos, imagino tendran un identificador
            if (idInt < 4)
            {
                int value = int.Parse(data);
                fingerValues[idInt] = value >= 80;

                // Si todos estan flexionados agarramos, si no soltamos
                if (!fingerValues.Contains(false))
                    player.StartHold();
                else
                    player.EndHold();
            }
            else
            {
                // Y el movimiento de la mano
                Vector2 direction = Vector2.zero;
                if (idInt == 4)
                    direction += (float.Parse(data) / maxValue - 0.5f) * 2 * Vector2.right;
                else
                    direction += (float.Parse(data) / maxValue - 0.5f) * 2 * Vector2.up;
                player.MoveAndPlayAudio(mult * Time.deltaTime * direction);
            }
        }
    }


    // Start is called before the first frame update
    void Start()
    {
        pullAudio = GetComponent<AudioSource>();
        pullAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;

        bluetoothPlayer = new(this);
    }


    // Update is called once per frame
    void Update()
    {
        bluetoothPlayer.timer -= Time.deltaTime;
    }


    string aaa = "Aca esta el move antiguo, si se le necesita solo hagan la llamada en el update";
    void Check()
    {
        float mult = 10 * Mathf.Pow(0.9f, PlayerPrefs.GetInt("cursorSensitivity"));
        Vector2 direction = Vector2.zero;

        if (Input.GetKey(KeyCode.LeftArrow))
            direction += Vector2.left;
        if (Input.GetKey(KeyCode.UpArrow))
            direction += Vector2.up;
        if (Input.GetKey(KeyCode.DownArrow))
            direction += Vector2.down;
        if (Input.GetKey(KeyCode.RightArrow))
            direction += Vector2.right;

        MoveAndPlayAudio(mult * Time.deltaTime * direction);

        if (Input.GetKeyDown(KeyCode.Space))
            StartHold();
        if (Input.GetKeyUp(KeyCode.Space))
            EndHold();
    }

    private void MoveAndPlayAudio(Vector2 direction)
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

        transform.Translate(direction);
    }

    public void StartHold()
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
        }
    }

    public void EndHold()
    {
        if (isHolding)
        {
            isHolding = false;
            pickedNode.EndHold();
            Vector2 newNodePos = nodeGrid.RealToRelativePosition(new Vector2(transform.position.x, transform.position.y));
            nodeGrid.MoveNode(pickedNode, previousNodePos, newNodePos);
            pickedNode = null;
            GetComponent<SpriteRenderer>().sprite = sprites[1];
        }
    }
}
