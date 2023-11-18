using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField] private Transform linesParent;
    private bool hasWon;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (!hasWon)
            CheckWin();
    }

    void CheckWin()
    {
        hasWon = true;
        for (int i = 0; i < linesParent.childCount; i++)
        {
            if (!linesParent.GetChild(i).GetComponent<LineController>().isCleared)
            {
                hasWon = false;
                break;
            }
        }
        if (hasWon)
            SceneChanger.ChangeScene(this, "Levels Menu");
    }

    /*void CheckWinOld()
    {
        bool hasWon = true;
        for (int i = 0; i < objectsParent.transform.childCount; i++)
        {
            if (objectsParent.transform.GetChild(i).GetComponent<ObjectController>().isInGoal == false)
            {
                hasWon = false;
                break;
            }
        }
        if (hasWon)
            Debug.Log("win");
    }*/
}
