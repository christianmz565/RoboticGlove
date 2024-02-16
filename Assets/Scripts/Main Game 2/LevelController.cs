using System.Collections;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System.IO;

public class LevelController : MonoBehaviour
{
    public bool levelCompleted;
    [SerializeField] private Text percentageText;
    [SerializeField] private Text resultsText;
    [SerializeField] private GameObject notPassPref;
    [SerializeField] private GameObject[] treePrefs;
    [SerializeField] private GameObject obstaclePref;
    [SerializeField] private GameObject extraPref;
    [SerializeField] private PlayerController player;
    [SerializeField] private Transform objectParent;
    [SerializeField] private TutorialG2 tutorial;
    private AudioSource scoreAudio;
    private string[] level;
    private float totalTime = GameSettings.TravelDelay;
    private float startingTime;

    // Start is called before the first frame update
    void Start()
    {
        GameSettings.ScrollSpeed = GameSettings.BaseScrollSpeed + GameSettings.Difficulty * 0.5f;
        scoreAudio = GetComponent<AudioSource>();
        scoreAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;
        if (GameSettings.Level != "-1")
        {
            percentageText.gameObject.SetActive(true);
            level = Resources.Load<TextAsset>("Game 2/Levels/" + GameSettings.Level).text.Split("\n");
            StartLevel();
        }
    }

    void StartLevel()
    {
        Debug.Log("Now playing level " + GameSettings.Level);
        string[] lastArgs = level[level.Length - 1].Split(" ");
        totalTime = float.Parse(lastArgs[3]) + GameSettings.TravelDelay;
        StartCoroutine(GenerateLevel(level));
        StartCoroutine(UpdateLevel());
        StartCoroutine(CalculateResultsAndEnd());
    }

    public IEnumerator GenerateLevel(string[] level)
    {
        startingTime = Time.time;
        for (int line = 1; line < level.Length; line++)
        {
            Debug.Log(level[line]);
            string[] args = level[line].Split(" ");
            yield return new WaitUntil(() => float.Parse(args[3]) < Time.time - startingTime + GameSettings.TravelDelay);
            float width = GameSettings.Width;
            int column = int.Parse(args[2]);
            float posX = -width / 2 + column * width / 3;
            if (args[0] == "t") StartCoroutine(tutorial.SlowDown());
            switch (args[1])
            {
                case "pass":
                    float scale = GameSettings.ScrollSpeed * GameSettings.DurationScaleMult * float.Parse(args[4]);
                    float posY = 6 + scale / 2;

                    for (int col = 0; col < 4; col++)
                    {
                        if (col != column)
                        {
                            float colX = -width / 2 + col * width / 3;
                            GameObject instNotPass = Instantiate(notPassPref, new Vector2(colX, posY), Quaternion.identity, objectParent);
                            float height = scale * 2.5f;
                            instNotPass.GetComponent<SpriteRenderer>().size = new Vector2(10.3f, height);
                            instNotPass.GetComponent<BoxCollider2D>().size = new Vector2(2.5f, height);

                            int maxTrees = (int)(scale / 2f);
                            for (int tree = 0; tree < maxTrees; tree++)
                            {
                                float var = Random.Range(-1f, 1f);
                                float treeX = colX + var;
                                float treeY = 8 + 2f * tree;
                                float treeZ = -3 + tree * 0.05f;
                                Instantiate(treePrefs[Random.Range(0, treePrefs.Length)], new Vector3(treeX, treeY, treeZ), Quaternion.identity, objectParent);
                            }
                        }
                    }
                    break;
                case "obstacle":
                    Instantiate(obstaclePref, new Vector2(posX, 7), Quaternion.identity, objectParent);
                    break;
                case "extra":
                    Instantiate(extraPref, new Vector2(posX, 7), Quaternion.identity, objectParent);
                    break;
            }

        }
        yield return new WaitForSeconds(GameSettings.TravelDelay);
        levelCompleted = true;
    }

    private IEnumerator CalculateResultsAndEnd()
    {
        yield return new WaitUntil(() => levelCompleted);
        resultsText.gameObject.SetActive(true);
        scoreAudio.Play();

        float pointValue = 100;
        float difficultyMult = GameSettings.Difficulty * 0.3f + 1;

        do
        {
            player.Hurt();
            player.Score(pointValue * difficultyMult);
            resultsText.text = string.Format("{0}\n+{1} PUNTOS!\nMULTIPLICADOR DE DIFICULTAD X{2}", GameSettings.patient.GetName().ToUpper(), player.score, difficultyMult);
            yield return new WaitForSeconds(0.25f);
        } while (player.health > 0);
        scoreAudio.loop = false;

        GameSettings.patient.AddScore(player.score);
        GameSettings.patient.SavePatient();
        yield return new WaitForSeconds(2);
        StartCoroutine(SceneChanger.ChangeScene("Levels Menu"));
    }

    private IEnumerator UpdateLevel()
    {
        while (true)
        {
            float percentage = Mathf.Min(100, Mathf.Round((Time.time - startingTime) / totalTime * 100));
            percentageText.text = "Porcentaje\n" + percentage + "%";
            yield return new WaitForSeconds(0.1f);
        }
    }
}
