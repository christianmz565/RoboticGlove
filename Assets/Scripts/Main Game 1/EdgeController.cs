using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EdgeController : MonoBehaviour
{
    [SerializeField] private Material clearedMaterial;
    private Material defaultMaterial;
    private Material currentMaterial;
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
        defaultMaterial = GetComponent<LineRenderer>().material;
        currentMaterial = defaultMaterial;
        node1 = nodesParent.GetChild(node1Idx);
        node2 = nodesParent.GetChild(node2Idx);
        lineRenderer = GetComponent<LineRenderer>();
        edgeCollider = GetComponent<EdgeCollider2D>();
        UpdateEdge();
    }

    // Update is called once per frame
    void Update()
    {
        if (areNodesHeld)
            UpdateEdge();
        else
            CheckCleared();
    }

    void CheckCleared()
    {
        if (!areNodesHeld)
        {
            Vector2 pos1 = node1.position;
            Vector2 pos2 = node2.position;
            RaycastHit2D[] hits = new RaycastHit2D[20];
            Physics2D.LinecastNonAlloc(pos1, pos2, hits);
            for (int i = 0; i < hits.Length && hits[i].collider != null; i++)
            {
                if (hits[i].collider.name != gameObject.name && hits[i].transform.parent != null && hits[i].transform.parent.name == "Edges Parent") {
                    isCleared = false;
                    ToggleMaterial(defaultMaterial);
                    return;
                }
            }
            ToggleMaterial(clearedMaterial);
            isCleared = true;
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
        pos1.z = 0;
        pos2.z = 0;
        Vector3[] rendererPositions = { pos1, pos2 };
        edgeCollider.SetPoints(colliderPositions);
        lineRenderer.SetPositions(rendererPositions);
    }

    private void ToggleMaterial(Material material)
    {
        if (currentMaterial != material)
        {
            GetComponent<LineRenderer>().material = material;
            currentMaterial = material;
        }
    }
}
