using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class LevelG2Generator : MonoBehaviour
{
    public int mins;
    [SerializeField] private LevelController levelController;
    [SerializeField] private PlayerController player;
    [SerializeField] private Text timeText;
    [SerializeField] private Text resultsText;
    [SerializeField] private AudioSource scoreAudio;
    private string[][] levelPieces;
    private int secs;

    void Start()
    {
        if (GameSettings.Level == "-1")
        {
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
        resultsText.gameObject.SetActive(true);
        scoreAudio.Play();

        float pointValue = 20;
        float difficultyMult = GameSettings.Difficulty * 0.3f + 1;

        resultsText.text = string.Format("{0}\n+{1} PUNTOS!\nMULTIPLICADOR DE DIFICULTAD X{2}", GameSettings.patient.GetName().ToUpper(), player.score, difficultyMult);
        while (mins >= 0 && secs > 0)
        {
            player.Score(pointValue * difficultyMult);
            timeText.text = string.Format("Tiempo Total\n{0:D2}:{1:D2}", mins, secs);
            resultsText.text = string.Format("{0}\n+{1} PUNTOS!\nMULTIPLICADOR DE DIFICULTAD X{2}", GameSettings.patient.GetName().ToUpper(), player.score, difficultyMult);
            yield return new WaitForSeconds(0.01f);
            secs--;
            if (secs == 0)
            {
                mins--;
                secs = 60;
            }
        }

        scoreAudio.loop = false;

        GameSettings.patient.AddScore(player.score);
        GameSettings.patient.SavePatient();
        yield return new WaitForSeconds(2);
        StartCoroutine(SceneChanger.ChangeScene("Levels Menu"));
    }
}