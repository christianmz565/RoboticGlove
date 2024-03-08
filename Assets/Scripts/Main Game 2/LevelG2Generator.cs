using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class LevelG2Generator : MonoBehaviour
{
    public int mins;
    [SerializeField] private LevelController levelController;
    [SerializeField] private PlayerController player;
    [SerializeField] private Text timeText;
    [SerializeField] private Transform results;
    [SerializeField] private AudioSource scoreAudio;
    private string[][] levelPieces;
    private int secs;

    void Start()
    {
        if (GameSettings.Level == "-1")
        {
            GameSettings.ScrollSpeed = GameSettings.BaseScrollSpeed + GameSettings.DifficultyG2 * 0.5f;
            timeText.gameObject.SetActive(true);
            StartCoroutine(StartLevel());
            StartCoroutine(AddTime());
            StartCoroutine(CalculateScoreAndEnd());
        }

    }

    private IEnumerator StartLevel()
    {
        TextAsset[] textAssets = Resources.LoadAll<TextAsset>("Game 2/Pieces");
        levelPieces = new string[textAssets.Length][];
        for (int i = 0; i < textAssets.Length; i++)
        {
            levelPieces[i] = textAssets[i].text.Split("\n");
            yield return null;
        }
        while (player.alive)
        {
            StartCoroutine(levelController.GenerateLevel(levelPieces[Random.Range(0, levelPieces.Length)]));
            yield return new WaitUntil(() => levelController.levelCompleted);
            levelController.levelCompleted = false;
        }
    }

    private IEnumerator AddTime()
    {
        while (player.alive)
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

    private IEnumerator CalculateScoreAndEnd()
    {
        yield return new WaitUntil(() => !player.alive);
        results.gameObject.SetActive(true);
        Text resultsText = results.GetComponentInChildren<Text>();

        float pointValue = 30;
        float difficultyMult = GameSettings.DifficultyG2 * 0.3f + 1;
        player.Score(pointValue * difficultyMult * (mins * 60 + secs));

        resultsText.text = string.Format("{0}\n+{1} PUNTOS!\nTIEMPO TOTAL {2:D2}:{3:D2}", GameSettings.patient.GetName().ToUpper(), player.score, mins, secs);
        scoreAudio.Play();
        results.GetComponent<Animator>().Play("ResultsAnimIn");

        GameSettings.patient.AddScore(player.score);
        GameSettings.patient.SavePatient();
    }
}