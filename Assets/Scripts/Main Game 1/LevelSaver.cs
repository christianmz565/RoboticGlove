using System.IO;
using UnityEngine;

public class LevelSaver : MonoBehaviour
{
    [SerializeField] private Transform hand;
    [SerializeField] private NodeGrid nodeGrid;
    [SerializeField] private GameObject nodePrefab;
    [SerializeField] private GameObject edgePrefab;
    private Transform nodesParent;
    private Transform edgesParent;
    private Level level;
    private Vector2 node1Pos;
    private NodeController node1;

    // Start is called before the first frame update
    void Start()
    {
        nodesParent = GameObject.Find("Nodes Parent").transform;
        edgesParent = GameObject.Find("Edges Parent").transform;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.N))
        {
            Vector2 pos = Vector2.zero;
            NodeController instNode = Instantiate(nodePrefab, Vector2.zero, Quaternion.identity, nodesParent).GetComponent<NodeController>();
            instNode.name = nodesParent.childCount - 1 + "";
            nodeGrid.AddNode(instNode.GetComponent<NodeController>(), pos);
        }

        if (Input.GetKeyDown(KeyCode.E))
        {
            node1Pos = nodeGrid.RealToRelativePosition(hand.position);
            node1 = nodeGrid.GetNode(node1Pos);
        }

        if (Input.GetKeyDown(KeyCode.R))
        {
            Vector2 node2Pos = nodeGrid.RealToRelativePosition(hand.position);
            NodeController node2 = nodeGrid.GetNode(node2Pos);

            EdgeController instEdge = Instantiate(edgePrefab, Vector2.zero, Quaternion.identity, edgesParent).GetComponent<EdgeController>();
            instEdge.name = "edge";
            instEdge.node1Idx = int.Parse(node1.name);
            instEdge.node2Idx = int.Parse(node2.name);
            instEdge.nodesParent = nodesParent;

            nodesParent.GetChild(int.Parse(node1.name)).GetComponent<NodeController>().edges.Add(instEdge);
            nodesParent.GetChild(int.Parse(node2.name)).GetComponent<NodeController>().edges.Add(instEdge);
        }
        if (Input.GetKeyDown(KeyCode.L))
        {
            Vector2[] nodePositions = new Vector2[nodesParent.childCount];
            Vector2Int[] edgeNodes = new Vector2Int[edgesParent.childCount];
            for (int i = 0; i < nodesParent.childCount; i++)
            {
                nodePositions[i] = new Vector2(nodesParent.GetChild(i).transform.position.x, nodesParent.GetChild(i).transform.position.y);
            }
            for (int i = 0; i < edgesParent.childCount; i++)
            {
                edgeNodes[i] = new Vector2Int(edgesParent.GetChild(i).GetComponent<EdgeController>().node1Idx, edgesParent.GetChild(i).GetComponent<EdgeController>().node2Idx);
            }
            level = new Level(nodePositions, edgeNodes);
        }
        if (Input.GetKeyDown(KeyCode.P))
        {
            string data = JsonUtility.ToJson(level);
            File.WriteAllText("Assets/Resources/Levels/output.json", data);
        }
    }
}