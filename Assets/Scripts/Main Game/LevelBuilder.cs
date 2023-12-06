using UnityEngine;

public class LevelBuilder : MonoBehaviour
{
    [SerializeField] private Transform nodesParent;
    [SerializeField] private Transform edgesParent;
    [SerializeField] private GameObject nodePrefab;
    [SerializeField] private GameObject edgePrefab;
    [SerializeField] private NodeGrid nodeGrid;
    private Level level;

    // Start is called before the first frame update
    void Start()
    {
        TextAsset dataAsset = Resources.Load<TextAsset>("Levels/" + GameSettings.Level);
        string data = dataAsset.text;
        level = JsonUtility.FromJson<Level>(data);
        for (int i = 0; i < level.nodePositions.Length; i++)
        {
            Vector2 pos = level.nodePositions[i];
            NodeController instNode = Instantiate(nodePrefab, Vector2.zero, Quaternion.identity, nodesParent).GetComponent<NodeController>();
            instNode.name = i + "";

            nodeGrid.AddNode(instNode.GetComponent<NodeController>(), pos);
        }
        for (int i = 0; i < level.edgeNodes.Length; i++)
        {
            EdgeController instEdge = Instantiate(edgePrefab, Vector2.zero, Quaternion.identity, edgesParent).GetComponent<EdgeController>();
            instEdge.name = i + "";
            instEdge.node1Idx = level.edgeNodes[i].x;
            instEdge.node2Idx = level.edgeNodes[i].y;
            instEdge.nodesParent = nodesParent;

            nodesParent.GetChild(level.edgeNodes[i].x).GetComponent<NodeController>().edges.Add(instEdge);
            nodesParent.GetChild(level.edgeNodes[i].y).GetComponent<NodeController>().edges.Add(instEdge);
        }
        nodeGrid.DrawGrid();
    }

    // Update is called once per frame
    void Update()
    {

    }
}
