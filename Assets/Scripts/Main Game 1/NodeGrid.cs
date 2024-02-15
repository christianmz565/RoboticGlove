using System.Collections.Generic;
using UnityEngine;

public class NodeGrid : MonoBehaviour
{
    private const float SIZE = 1;
    private Dictionary<string, NodeController> nodes = new Dictionary<string, NodeController>();
    private int width;
    private int height;
    private float initialX;
    private float initialY;

    void Awake()
    {
        SpriteRenderer spriteRenderer = GetComponent<SpriteRenderer>();
        width = (int)spriteRenderer.size.x;
        height = (int)spriteRenderer.size.y;
        initialX = -width / 2;
        initialY = -height / 2;
    }

    public NodeController GetNodeByRelativePos(Vector2 relativePos)
    {
        string key = GenerateKey(relativePos);
        if (nodes.ContainsKey(key))
            return nodes[key];
        return null;
    }

    public void AddNode(NodeController node, Vector2 realPos)
    {
        Vector2 relativePos = RealToRelativePosition(realPos);
        string key = GenerateKey(relativePos);
        while (nodes.ContainsKey(key))
        {
            node.transform.Translate(Vector2.right * SIZE);
            relativePos += Vector2.right;
            key = GenerateKey(relativePos);
        }
        nodes.Add(key, node);
        LockToGrid(node, relativePos);
    }

    /*public void DrawGrid()
    {
        Vector2 start = new Vector2(initialX, initialY);
        for (int i = 0; i < width / SIZE; i++)
        {
            for (int j = 0; j < height / SIZE; j++)
            {
                Vector2 current = start + Vector2.right * i * SIZE + Vector2.up * j * SIZE;
                Debug.DrawLine(current, current + Vector2.right * SIZE, new Color(255, 255, 0), 100);
                Debug.DrawLine(current, current + Vector2.up * SIZE, new Color(255, 255, 0), 100);
            }
        }
    }*/

    public NodeController GetNodeByRealPos(Vector2 realPos)
    {
        Vector2 relativePos = RealToRelativePosition(realPos);
        return GetNodeByRelativePos(relativePos);
    }

    public void MoveNode(NodeController node, Vector2 oldPos, Vector2 newPos)
    {
        string oldKey = GenerateKey(oldPos);
        nodes.Remove(oldKey);
        string newKey = GenerateKey(newPos);
        while (nodes.ContainsKey(newKey))
        {
            node.transform.Translate(Vector2.right * SIZE);
            newPos += Vector2.right;
            newKey = GenerateKey(newPos);
        }
        nodes.Add(newKey, node);
        LockToGrid(node, newPos);
        node.UpdateEdges();
    }

    public Vector2 RealToRelativePosition(Vector2 pos)
    {
        int nodeI = (int)((pos.x - initialX) / SIZE);
        int nodeJ = (int)((pos.y - initialY) / SIZE);
        return new Vector2(nodeI, nodeJ);
    }

    public Vector2 RelativeToRealPosition(Vector2 pos)
    {
        float realX = initialX + pos.x * SIZE + SIZE / 2f;
        float realY = initialY + pos.y * SIZE + SIZE / 2f;
        return new Vector2(realX, realY);
    }

    private string GenerateKey(Vector2 relativePos)
    {
        return relativePos.x + "," + relativePos.y;
    }

    private void LockToGrid(NodeController node, Vector2 relativePos)
    {
        Vector3 pos = RelativeToRealPosition(relativePos);
        pos.z = node.transform.position.z;
        node.transform.position = pos;
    }
}
