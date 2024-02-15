using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoadController : MonoBehaviour
{
    [SerializeField] private Transform roadsParent;

    // Update is called once per frame
    void Update()
    {
        for (int i = 0; i < roadsParent.childCount; i++)
        {
            Transform roadTransform = roadsParent.GetChild(i).transform;
            roadTransform.Translate(GameSettings.ScrollSpeed * Time.deltaTime * Vector2.down);
            if (roadTransform.position.y <= -6)
            {
                Vector3 pos = roadTransform.position;
                pos.y = 6;
                roadTransform.position = pos;
            }
        }
    }
}
