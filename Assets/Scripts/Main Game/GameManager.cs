using System.Collections;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField] private Transform linesParent;
    private bool hasWon;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(CheckWin());
    }

    // Update is called once per frame
    void Update()
    {
    }

    IEnumerator CheckWin()
    {
        while (!hasWon)
        {
            yield return new WaitForSeconds(1);
            hasWon = true;
            for (int i = 0; i < linesParent.childCount; i++)
            {
                if (!linesParent.GetChild(i).GetComponent<EdgeController>().isCleared)
                {
                    Debug.Log("didnt pass");
                    hasWon = false;
                    break;
                }
            }
            if (hasWon)
                StartCoroutine(SceneChanger.ChangeScene("Levels Menu"));
        }
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
