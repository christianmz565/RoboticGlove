using System.IO;
using UnityEngine;

public class LevelSaver : MonoBehaviour
{
    [SerializeField] private NodeController[] nodes;
    [SerializeField] private EdgeController[] edges;
    private Level level;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.L))
        {
            Vector2[] nodePositions = new Vector2[nodes.Length];
            Vector2Int[] edgeNodes = new Vector2Int[edges.Length];
            for (int i = 0; i < nodes.Length; i++)
            {
                nodePositions[i] = new Vector2(nodes[i].transform.position.x, nodes[i].transform.position.y);
            }
            for (int i = 0; i < edges.Length; i++)
            {
                edgeNodes[i] = new Vector2Int(edges[i].node1Idx, edges[i].node2Idx);
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