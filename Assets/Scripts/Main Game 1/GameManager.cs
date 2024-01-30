using System.Collections;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField] private Transform edgesParent;
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
            for (int i = 0; i < edgesParent.childCount; i++)
            {
                EdgeController edgeComp = edgesParent.GetChild(i).GetComponent<EdgeController>();
                edgeComp.CheckCleared();
                if (!edgeComp.isCleared)
                {
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
