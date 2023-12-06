using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EdgeController : MonoBehaviour
{
    public bool isCleared = false;
    public bool areNodesHeld = false;
    public Transform nodesParent;
    public int node1Idx;
    public int node2Idx;
    private Transform node1;
    private Transform node2;
    private LineRenderer lineRenderer;
    private EdgeCollider2D edgeCollider;


    // Start is called before the first frame update
    void Start()
    {
        node1 = nodesParent.GetChild(node1Idx);
        node2 = nodesParent.GetChild(node2Idx);
        lineRenderer = GetComponent<LineRenderer>();
        edgeCollider = GetComponent<EdgeCollider2D>();
        UpdateEdge();
        StartCoroutine(CheckCleared());
    }

    // Update is called once per frame
    void Update()
    {
        if (areNodesHeld)
            UpdateEdge();
    }

    private IEnumerator CheckCleared()
    {
        while (true)
        {
            yield return new WaitForSeconds(0.5f);
            if (!areNodesHeld)
            {
                Vector2 pos1 = node1.position;
                Vector2 pos2 = node2.position;
                RaycastHit2D[] hits = new RaycastHit2D[10];
                Physics2D.LinecastNonAlloc(pos1, pos2, hits);
                int edgeCollissions = 0;
                for (int i = 0; i < hits.Length && hits[i].collider != null && edgeCollissions < 2; i++)
                {
                    if (hits[i].transform.parent != null && hits[i].transform.parent.name == "Edges Parent")
                        edgeCollissions++;
                }
                isCleared = edgeCollissions <= 1;
            }
        }
    }

    public void UpdateEdge()
    {
        Vector3 pos1 = node1.position;
        Vector3 pos2 = node2.position;
        List<Vector2> colliderPositions = new List<Vector2>
        {
            pos1 + (pos2 - pos1).normalized * GameSettings.ColliderOffsetScale,
            pos2 + (pos1 - pos2).normalized * GameSettings.ColliderOffsetScale
        };
        Vector3[] rendererPositions = {pos1, pos2};
        edgeCollider.SetPoints(colliderPositions);
        lineRenderer.SetPositions(rendererPositions);

        /*transform.position = (pos1 + pos2) / 2;
        transform.eulerAngles = new Vector3(0, 180 - Mathf.Atan2(pos2.z - pos1.z, pos2.x - pos1.x) * Mathf.Rad2Deg);
        transform.localScale = new Vector3(Vector3.Distance(pos1, pos2), 0.1f, 0.1f);
        BoxCollider collider = GetComponent<BoxCollider>();
        Vector3 boundsSize = lineRenderer.bounds.size;
        float h = Mathf.Sqrt(boundsSize.x * boundsSize.x + boundsSize.z * boundsSize.z);
        float scale = Mathf.Max(0.1f, (h - 1) / h);
        collider.size = new Vector3(scale, 0.5f, 0.5f);*/
    }
}
