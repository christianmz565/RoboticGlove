using System.Collections.Generic;
using UnityEngine;

public class NodeController : MonoBehaviour
{
    public List<EdgeController> edges;
    private bool isHeld;
    private GameObject handPlayer;

    // Start is called before the first frame update
    void Start()
    {
        handPlayer = GameObject.Find("Hand");
    }

    // Update is called once per frame
    void Update()
    {
        if (isHeld)
        {
            Vector3 pos = handPlayer.transform.position;
            pos.z = transform.position.z;
            transform.position = pos;
        }
    }

    public void StartHold()
    {
        isHeld = true;
        SetEdgesStatus(true);
    }

    public void EndHold()
    {
        isHeld = false;
        SetEdgesStatus(false);
        UpdateEdges();
    }

    public void UpdateEdges()
    {
        foreach (EdgeController edge in edges)
            edge.UpdateEdge();
    }

    private void SetEdgesStatus(bool held)
    {
        foreach (EdgeController edge in edges)
            edge.areNodesHeld = held;
    }


}
