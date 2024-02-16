using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class LevelG1Generator : MonoBehaviour
{
    [SerializeField] private NodeGrid nodeGrid;
    private const int distance = 1;
    private Vector2[] nodePositions;
    private Vector2[] nodeRelPositions;
    private List<Vector2Int> edgeNodes;
    private List<Vector2Int> edgeNodesBidir;

    public Level GenerateLevel()
    {
        int totalNodes = 4 + GameSettings.Difficulty * 2;
        int totalEdges = 4 + GameSettings.Difficulty * 2;
        nodePositions = new Vector2[totalNodes];
        nodeRelPositions = new Vector2[totalNodes];
        edgeNodes = new();
        edgeNodesBidir = new();

        for (int i = 0; i < totalNodes; i++)
        {
            float x, y;
            Vector2 pos;
            do
            {
                x = Random.Range(-8f, 8f);
                y = Random.Range(-4f, 3.5f);
                pos = nodeGrid.RealToRelativePosition(new Vector2(x, y));
            } while (!IsPositionSeparated(pos));
            nodeRelPositions[i] = pos;
            nodePositions[i] = nodeGrid.RelativeToRealPosition(pos);
        }

        HashSet<int> usedNodes = new();
        for (int i = 0; i < totalEdges; i++)
        {
            int node1, node2;
            Vector2Int edge;
            do
            {
                node1 = Random.Range(0, totalNodes);
                node2 = Random.Range(0, totalNodes);
                edge = new(node1, node2);
            } while (node1 == node2 || edgeNodesBidir.Contains(edge));
            edgeNodes.Add(edge);
            edgeNodesBidir.Add(new(node1, node2));
            edgeNodesBidir.Add(new(node2, node1));
            usedNodes.Add(node1);
            usedNodes.Add(node2);
        }

        int picked = -1;
        for (int i = 0; i < totalNodes; i++)
        {
            if (!usedNodes.Contains(i))
            {
                if (picked == -1)
                {
                    picked = i;
                }
                else
                {
                    edgeNodes.Add(new(picked, i));
                    picked = -1;
                }
            }
        }
        if (picked != -1)
            edgeNodes.Add(new(picked, Random.Range(0, totalNodes)));

        return new Level(GameSettings.Difficulty, nodePositions, edgeNodes.ToArray());

    }

    private float RandomInvert(float n)
    {
        if (Random.Range(0, 2) == 0)
            return n;
        else
            return -n;
    }

    private bool IsPositionSeparated(Vector2 pos)
    {
        for (int i = -distance; i <= distance; i++)
        {
            for (int j = -distance; j <= distance; j++)
            {
                if (nodeRelPositions.Contains(new Vector2(pos.x + i, pos.y + j)))
                    return false;
            }
        }
        return true;
    }
}