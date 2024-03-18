using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TreeController : MonoBehaviour
{
    [SerializeField] private Transform treesParent;
    private Queue<Transform> queue = new Queue<Transform>();


    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(TreeRelocator());
    }

    // Update is called once per frame
    void Update()
    {
        for (int i = 0; i < treesParent.childCount; i++)
        {
            Transform treeTransform = treesParent.GetChild(i).transform;
            treeTransform.Translate(GameSettings.ScrollSpeed * Time.deltaTime * Vector2.down);
            if (treeTransform.position.y < -8)
            {
                Vector3 pos = treeTransform.position;
                pos.y = 60;
                treeTransform.position = pos;
                queue.Enqueue(treeTransform);
            }
        }
    }

    private IEnumerator TreeRelocator()
    {
        bool invert = false;
        while (true)
        {
            if (queue.Count > 0)
            {
                Transform treeTransform = queue.Dequeue();
                float x = Random.Range(7f, 10f);
                if (invert)
                    x *= -1;
                invert = !invert;
                treeTransform.position = new Vector3(x, 8, treeTransform.position.z);
                yield return new WaitForSeconds(Random.Range(0.5f, 1f));
            }
            yield return null;
        }
    }
}
