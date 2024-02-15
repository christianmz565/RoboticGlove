using UnityEngine;

public class Level
{
    public int difficulty;
    public Vector2[] nodePositions;
    public Vector2Int[] edgeNodes;

    public Level(int difficulty, Vector2[] nodePositions, Vector2Int[] edgeNodes)
    {
        this.difficulty = difficulty;
        this.nodePositions = nodePositions;
        this.edgeNodes = edgeNodes;
    }
}
