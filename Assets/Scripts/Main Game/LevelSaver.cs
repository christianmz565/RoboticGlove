using System.IO;
using UnityEngine;

public class LevelSaver : MonoBehaviour
{
    [SerializeField] private Transform[] objectTransforms;
    [SerializeField] private GameObject[] lines;
    private Level level;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.L))
        {
            Vector2[] objectPositions = new Vector2[objectTransforms.Length];
            int[] linesIdx1 = new int[lines.Length];
            int[] linesIdx2 = new int[lines.Length];
            for (int i = 0; i < objectTransforms.Length; i++)
                objectPositions[i] = objectTransforms[i].position;
            for (int i = 0; i < lines.Length; i++)
            {
                linesIdx1[i] = lines[i].GetComponent<LineController>().object1Idx;
                linesIdx2[i] = lines[i].GetComponent<LineController>().object2Idx;
            }
            level = new Level(objectPositions, linesIdx1, linesIdx2);
        }
        if (Input.GetKeyDown(KeyCode.P))
        {
            string data = JsonUtility.ToJson(level);
            File.WriteAllText("Assets/Resources/Levels/output.json", data);
        }
    }
}
