using System.Collections;
using UnityEngine;

public class LevelBuilder : MonoBehaviour
{
    [SerializeField] private Transform nodesParent;
    [SerializeField] private Transform edgesParent;
    [SerializeField] private GameObject nodePrefab;
    [SerializeField] private GameObject edgePrefab;
    [SerializeField] private NodeGrid nodeGrid;
    [SerializeField] private LevelG1Generator levelGenerator;
    [SerializeField] private Game1Manager manager;

    // Start is called before the first frame update
    void Start()
    {
        if (GameSettings.Level != "-1")
        {
            TextAsset dataAsset = Resources.Load<TextAsset>("Game 1/Levels/" + GameSettings.Level);
            string data = dataAsset.text;
            Level level = JsonUtility.FromJson<Level>(data);
            GameSettings.difficulty = level.difficulty;
            BuildLevel(level);
        }
        else
        {
            StartCoroutine(GenerateLevelRepeat());
        }
    }

    private IEnumerator GenerateLevelRepeat()
    {
        int count=0;
        do
        {
            Debug.Log("Generating level attempt " + count++);
            DestroyLevel();
            yield return new WaitForEndOfFrame();
            Level level = levelGenerator.GenerateLevel();
            BuildLevel(level);
            yield return new WaitForEndOfFrame();
            manager.CheckWin();
        } while (manager.hasWon);
    }

    public void BuildLevel(Level level)
    {
        for (int i = 0; i < level.nodePositions.Length; i++)
        {
            Vector2 pos = level.nodePositions[i];
            NodeController instNode = Instantiate(nodePrefab, new Vector3(0, 0, -1), Quaternion.identity, nodesParent).GetComponent<NodeController>();
            instNode.name = i + "";

            nodeGrid.AddNode(instNode, pos);
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
    }

    private void DestroyLevel()
    {
        foreach (Transform edge in edgesParent)
            Destroy(edge.gameObject);
        foreach (Transform node in nodesParent)
            Destroy(node.gameObject);
    }
}
