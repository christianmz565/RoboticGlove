using UnityEngine;

public class LevelBuilder : MonoBehaviour
{
    [SerializeField] private Transform objectsParent;
    [SerializeField] private Transform linesParent;
    [SerializeField] private GameObject objectPrefab;
    [SerializeField] private GameObject linePrefab;
    private Level level;

    // Start is called before the first frame update
    void Start()
    {
        TextAsset dataAsset = Resources.Load<TextAsset>("Levels/" + GameSettings.level);
        string data = dataAsset.text;
        level = JsonUtility.FromJson<Level>(data);
        foreach (Vector2 pos in level.objectPositions)
        {
            GameObject instObject = Instantiate(objectPrefab, pos, Quaternion.identity, objectsParent);
            instObject.name = "Object";
        }
        for (int i = 0; i < level.linesIdx1.Length; i++)
        {
            LineController instLine = Instantiate(linePrefab, Vector2.zero, Quaternion.identity, linesParent).GetComponent<LineController>();
            instLine.name = "Line";
            instLine.object1Idx = level.linesIdx1[i];
            instLine.object2Idx = level.linesIdx2[i];
            instLine.objectsParent = objectsParent;
        }
    }

    // Update is called once per frame
    void Update()
    {

    }
}
