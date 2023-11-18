using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineController : MonoBehaviour
{
    public bool isCleared;
    public Transform objectsParent;
    public int object1Idx;
    public int object2Idx;
    private Vector2 pos1;
    private Vector2 pos2;
    private Vector2 offset;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(CheckClear());
    }

    // Update is called once per frame
    void Update()
    {
        pos1 = objectsParent.GetChild(object1Idx).transform.position;
        pos2 = objectsParent.GetChild(object2Idx).transform.position;
        LineRenderer line = GetComponent<LineRenderer>();
        line.SetPosition(0, pos1);
        line.SetPosition(1, pos2);
        EdgeCollider2D collider = GetComponent<EdgeCollider2D>();
        offset = (pos2 - pos1).normalized * GameSettings.LINE_COLLIDER_PERCENTAGE;
        collider.SetPoints(new List<Vector2> { pos1 + offset, pos2 - offset });
    }

    IEnumerator CheckClear()
    {
        while (true)
        {
            List<RaycastHit2D> hits = new List<RaycastHit2D>();
            Physics2D.Linecast(pos1 + offset, pos2 - offset, new ContactFilter2D().NoFilter(), hits);
            int count = 0;
            foreach (RaycastHit2D hit in hits)
            {
                if (hit.collider.name.StartsWith("Line"))
                    count++;
                if (count > 1)
                    break;
            }
            isCleared = count <= 1;
            yield return new WaitForSeconds(0.5f);
        }
    }
}
