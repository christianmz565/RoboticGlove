using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoadController : MonoBehaviour
{
    [SerializeField] private Transform roadsParent;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        for (int i = 0; i < roadsParent.childCount; i++)
        {
            Transform roadTransform = roadsParent.GetChild(i).transform;
            roadTransform.Translate(Vector2.down * GameSettings.ScrollSpeed * Time.deltaTime);
            if (roadTransform.position.y <= -6)
            {
                Vector3 pos = roadTransform.position;
                pos.y = 6;
                roadTransform.position = pos;
            }
        }
    }
}
