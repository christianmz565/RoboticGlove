using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class Game1Manager : MonoBehaviour
{
    public bool hasWon;
    [SerializeField] private Transform edgesParent;
    [SerializeField] private Text timeText;
    [SerializeField] private Text goalTimeText;
    [SerializeField] private Text scoreText;
    [SerializeField] private Transform results;
    [SerializeField] private AudioClip music;
    private AudioSource scoreAudio;
    public int mins;
    private int secs;
    // Start is called before the first frame update
    void Start()
    {
        AudioSource audioSource = GameObject.Find("Music").GetComponent<AudioSource>();
        audioSource.clip = music;
        audioSource.Play();
        scoreAudio = GetComponent<AudioSource>();
        scoreAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;
        StartCoroutine(AddTime());
        StartCoroutine(CheckWinRepeat());
    }

    // Update is called once per frame
    void Update()
    {

    }

    private IEnumerator CheckWinRepeat()
    {
        yield return new WaitForSeconds(0.5f);
        while (!hasWon)
        {
            yield return null;
            CheckWin();
        }
        CalculateScoreAndEnd();
    }

    public void CheckWin()
    {
        hasWon = true;
        for (int i = 0; i < edgesParent.childCount; i++)
        {
            EdgeController edgeComp = edgesParent.GetChild(i).GetComponent<EdgeController>();
            edgeComp.CheckCleared();
            if (!edgeComp.isCleared)
                hasWon = false;
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

    private void CalculateScoreAndEnd()
    {
        int totalSecs = mins * 60 + secs;
        int nextMark = Mathf.CeilToInt(1f * totalSecs / 300) * 300;
        int totalTime = nextMark - totalSecs;

        float pointValue = 0.1f;
        float difficultyMult = GameSettings.DifficultyG1 * 0.3f + 1;
        float timeMult = 1f / (mins / 5 + 1);
        float scoreMult = 100 * difficultyMult * timeMult;
        int points = (int)(pointValue * scoreMult * totalTime);

        Debug.Log("Points: " + points + " Scorable Time: " + totalTime + " TimeMult: " + timeMult + " DifficultyMult: " + difficultyMult);
        results.gameObject.SetActive(true);
        results.GetComponent<Animator>().Play("ResultsAnimIn");

        Text resultsText = results.GetComponentInChildren<Text>();
        resultsText.text = string.Format("{0}\n+{1:0} PUNTOS!\nTIEMPO TOTAL {2:D2}:{3:D2}", GameSettings.patient.GetName().ToUpper(), points, mins, secs);
        scoreText.text = string.Format("Puntaje\n{0}", points);

        resultsText.gameObject.SetActive(true);
        scoreAudio.Play();

        GameSettings.patient.AddScore((int)points);
        GameSettings.patient.SavePatient();
        scoreAudio.loop = false;
        goalTimeText.text = "";
    }
}
