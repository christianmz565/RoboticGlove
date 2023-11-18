using UnityEngine;

public class Level
{
    public Level(Vector2[] objectPositionsN, int[] linesIdx1N, int[] linesIdx2N)
    {
        objectPositions = objectPositionsN;
        linesIdx1 = linesIdx1N;
        linesIdx2 = linesIdx2N;        
    }
    public Vector2[] objectPositions;
    public int[] linesIdx1;
    public int[] linesIdx2;
}
