using UnityEngine;

public class HandController : MonoBehaviour
{
    [SerializeField] private Sprite[] sprites;
    [SerializeField] private NodeGrid nodeGrid;
    private NodeController pickedNode;
    private Vector2 previousNodePos;
    private bool isHolding = false;

    // Start is called before the first frame update
    void Start()
    {

    }


    // Update is called once per frame
    void Update()
    {
        Check();
    }

    void Check()
    {
        float mult = 10 * Mathf.Pow(0.9f, PlayerPrefs.GetInt("cursorSensitivity"));
        if (Input.GetKey(KeyCode.LeftArrow))
            transform.Translate(Vector2.left * Time.deltaTime * mult);
        if (Input.GetKey(KeyCode.UpArrow))
            transform.Translate(Vector2.up * Time.deltaTime * mult);
        if (Input.GetKey(KeyCode.DownArrow))
            transform.Translate(Vector2.down * Time.deltaTime * mult);
        if (Input.GetKey(KeyCode.RightArrow))
            transform.Translate(Vector2.right * Time.deltaTime * mult);
        if (Input.GetKeyDown(KeyCode.Space))
            StartHold();
        if (Input.GetKeyUp(KeyCode.Space))
            EndHold();
    }

    void StartHold()
    {
        Vector2 nodePos = nodeGrid.RealToRelativePosition(new Vector2(transform.position.x, transform.position.y));
        NodeController node = nodeGrid.GetNode(nodePos);
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
            nodeGrid.UpdateNode(pickedNode, previousNodePos, newNodePos);
            pickedNode = null;
            GetComponent<SpriteRenderer>().sprite = sprites[1];
        }
    }
}
