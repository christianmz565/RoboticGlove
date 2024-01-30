using UnityEngine;

public class Level
{
    public Vector2[] nodePositions;
    public Vector2Int[] edgeNodes;

    public Level(Vector2[] nodePositions, Vector2Int[] edgeNodes)
    {
        this.nodePositions = nodePositions;
        this.edgeNodes = edgeNodes;
    }
}
