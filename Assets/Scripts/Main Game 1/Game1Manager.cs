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
    [SerializeField] private Text resultsText;
    private AudioSource scoreAudio;
    public int mins;
    private int secs;
    // Start is called before the first frame update
    void Start()
    {
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
        StartCoroutine(calculateScoreAndEnd());
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

    private IEnumerator calculateScoreAndEnd()
    {
        int finalM = mins;
        int finalS = secs;
        goalTimeText.text = string.Format("{0:D2}:{1:D2}", finalM, finalS);

        mins = Mathf.CeilToInt((mins + 1) / 5f) * 5;
        secs = 1;

        float pointValue = 0.1f;
        float difficultyMult = GameSettings.difficulty * 0.3f + 1;
        float timeMult = 5f / mins;
        float scoreMult = 100 * difficultyMult * timeMult;
        float points = 0;

        resultsText.gameObject.SetActive(true);
        scoreAudio.Play();
        while (mins != finalM || secs != finalS)
        {
            points += pointValue * scoreMult;
            secs--;
            if (secs == 0)
            {
                mins--;
                secs = 60;
            }

            resultsText.text = string.Format("{0}\n+{1:0} PUNTOS!\nMULTIPLICADOR DE DIFICULTAD X{2}\nMULTIPLICADOR DE TIEMPO X{3}", GameSettings.patient.GetName().ToUpper(), points, difficultyMult, timeMult);
            timeText.text = string.Format("Tiempo Total\n{0:D2}:{1:D2}", mins, secs);
            scoreText.text = string.Format("Puntaje\n{0}", points);

            yield return new WaitForSeconds(0.01f);
        }

        GameSettings.patient.AddScore((int)points);
        GameSettings.patient.SavePatient();
        scoreAudio.loop = false;
        goalTimeText.text = "";
        yield return new WaitForSeconds(2);
        StartCoroutine(SceneChanger.ChangeScene("Levels Menu"));
    }
}
