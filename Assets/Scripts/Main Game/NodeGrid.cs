using System.Collections.Generic;
using UnityEngine;

public class NodeGrid : MonoBehaviour
{
    [SerializeField] private float size;
    private Dictionary<string, NodeController> nodes = new Dictionary<string, NodeController>();
    private int width;
    private int height;
    private float initialX;
    private float initialY;

    void Awake()
    {
        width = (int)transform.localScale.x;
        height = (int)transform.localScale.y;
        initialX = -width / 2;
        initialY = -height / 2;
    }

    public NodeController GetNode(Vector2 relativePos)
    {
        string key = GenerateKey(relativePos);
        if (nodes.ContainsKey(key))
            return nodes[key];
        else
            return null;
    }

    public void AddNode(NodeController node, Vector2 realPos)
    {
        Vector2 relativePos = RealToRelativePosition(realPos);
        string key = GenerateKey(relativePos);
        nodes.Add(key, node);
        LockToGrid(node, relativePos);
    }

    /*public void DrawGrid()
    {
        Vector2 start = new Vector2(initialX, initialY);
        for (int i = 0; i < width / size; i++)
        {
            for (int j = 0; j < height / size; j++)
            {
                Vector2 current = start + Vector2.right * i * size + Vector2.up * j * size;
                Debug.DrawLine(current, current + Vector2.right * size, new Color(255, 255, 0), 100);
                Debug.DrawLine(current, current + Vector2.up * size, new Color(255, 255, 0), 100);
            }
        }
    }*/

    public void DrawGrid()
    {
        MeshRenderer meshRenderer = GetComponent<MeshRenderer>();
        meshRenderer.material.mainTextureScale = new Vector2(width / size, height / size);
    }


    public NodeController GetNodeByPosition(Vector2 realPos)
    {
        Vector2 relativePos = RealToRelativePosition(realPos);
        return GetNode(relativePos);
    }

    public void UpdateNode(NodeController node, Vector2 oldPos, Vector2 newPos)
    {
        string oldKey = GenerateKey(oldPos);
        nodes.Remove(oldKey);
        string newKey = GenerateKey(newPos);
        while (nodes.ContainsKey(newKey))
        {
            node.transform.Translate(Vector2.right * size);
            newPos += Vector2.right;
            newKey = GenerateKey(newPos);
        }
        nodes.Add(newKey, node);
        LockToGrid(node, newPos);
        node.UpdateEdges();
    }

    public Vector2 RealToRelativePosition(Vector2 pos)
    {
        int nodeI = (int)((pos.x - initialX) / size);
        int nodeJ = (int)((pos.y - initialY) / size);
        return new Vector2(nodeI, nodeJ);
    }

    public Vector2 RelativeToRealPosition(Vector2 pos)
    {
        float realX = initialX + pos.x * size + size / 2f;
        float realY = initialY + pos.y * size + size / 2f;
        return new Vector2(realX, realY);
    }

    private string GenerateKey(Vector2 relativePos)
    {
        return relativePos.x + "," + relativePos.y;
    }

    private void LockToGrid(NodeController node, Vector2 relativePos)
    {
        node.transform.position = RelativeToRealPosition(relativePos);
    }
}
