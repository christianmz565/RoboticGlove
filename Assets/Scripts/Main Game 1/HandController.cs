using UnityEngine;

public class HandController : MonoBehaviour
{
    [SerializeField] private Sprite[] sprites;
    [SerializeField] private NodeGrid nodeGrid;
    private AudioSource pullAudio;
    private NodeController pickedNode;
    private Vector2 previousNodePos;
    private bool isHolding = false;

    // Start is called before the first frame update
    void Start()
    {
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

        MoveAndPlayAudio(direction * Time.deltaTime * mult);

        if (Input.GetKeyDown(KeyCode.Space))
            StartHold();
        if (Input.GetKeyUp(KeyCode.Space))
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
        }
    }

    void EndHold()
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
