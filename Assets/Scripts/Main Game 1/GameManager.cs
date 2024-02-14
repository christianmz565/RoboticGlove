using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    [SerializeField] private Transform edgesParent;
    [SerializeField] private Text timeText;
    [SerializeField] private Text goalTimeText;
    [SerializeField] private Text scoreText;
    private AudioSource scoreAudio;
    private int mins;
    private int secs;
    private bool hasWon;
    // Start is called before the first frame update
    void Start()
    {
        scoreAudio = GetComponent<AudioSource>();
        scoreAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;
        StartCoroutine(CheckWin());
        StartCoroutine(AddTime());
    }

    // Update is called once per frame
    void Update()
    {
    }

    private IEnumerator CheckWin()
    {
        while (!hasWon)
        {
            yield return null;
            hasWon = true;
            for (int i = 0; i < edgesParent.childCount; i++)
            {
                EdgeController edgeComp = edgesParent.GetChild(i).GetComponent<EdgeController>();
                if (!edgeComp.isCleared)
                    hasWon = false;
            }
            if (hasWon)
                StartCoroutine(calculateScoreAndEnd());
        }
    }

    private IEnumerator AddTime()
    {
        while (!hasWon)
        {
            secs++;
            if (secs == 60)
            {
                mins++;
                secs = 0;
            }
            timeText.text = string.Format("Tiempo Total\n{0:D2}:{1:D2}", mins, secs);
            yield return new WaitForSeconds(1);
        }
    }

    private IEnumerator calculateScoreAndEnd()
    {
        int finalM = mins;
        int finalS = secs;
        goalTimeText.text = string.Format("{0:D2}:{1:D2}", finalM, finalS);

        mins = Mathf.CeilToInt((mins + 1) / 5f) * 5;
        secs = 1;
        int scoreMult = 100 / mins;
        int points = 0;

        scoreAudio.Play();
        while (mins != finalM || secs != finalS)
        {
            points += scoreMult;
            secs--;
            if (secs == 0)
            {
                mins--;
                secs = 60;
            }

            timeText.text = string.Format("Tiempo Total\n{0:D2}:{1:D2}", mins, secs);
            scoreText.text = string.Format("Puntaje\n{0}", points);

            yield return new WaitForSeconds(0.01f);
        }

        GameSettings.patient.AddScore(points);
        GameSettings.patient.SavePatient();
        scoreAudio.loop = false;
        goalTimeText.text = "";
        StartCoroutine(SceneChanger.ChangeScene("Levels Menu"));
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
