using System.Collections;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System.IO;

public class LevelController : MonoBehaviour
{
    public bool levelCompleted;
    [SerializeField] private Text percentageText;
    [SerializeField] private GameObject notPassPref;
    [SerializeField] private GameObject[] treePrefs;
    [SerializeField] private GameObject obstaclePref;
    [SerializeField] private GameObject extraPref;
    [SerializeField] private PlayerController player;
    [SerializeField] private Transform objectParent;
    [SerializeField] private TutorialG2 tutorial;
    [SerializeField] private Transform results;
    [SerializeField] private AudioClip music;
    private AudioSource scoreAudio;
    private string[] level;
    private float totalTime = GameSettings.TravelDelay;
    private float startingTime;

    // Start is called before the first frame update
    void Start()
    {
        AudioSource audioSource = GameObject.Find("Music").GetComponent<AudioSource>();
        audioSource.clip = music;
        audioSource.Play();
        scoreAudio = GetComponent<AudioSource>();
        scoreAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;
        if (GameSettings.Level != "-1")
        {
            GameSettings.ScrollSpeed = GameSettings.BaseScrollSpeed;
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
            if (!player.alive)
                break;
            string[] args = level[line].Split(" ");
            yield return new WaitUntil(() => float.Parse(args[3]) < Time.time - startingTime + GameSettings.TravelDelay);
            float width = GameSettings.Width;
            int column = int.Parse(args[2]);
            float posX = -width / 2 + column * width / 3;
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

                    if (args[0] == "t")
                        StartCoroutine(tutorial.SlowDown(column));
                    break;
                case "obstacle":
                    Instantiate(obstaclePref, new Vector2(posX, 7), Quaternion.identity, objectParent);

                    if (args[0] == "t")
                        StartCoroutine(tutorial.SlowDown(column == 0 ? 1 : 0));
                    break;
                case "extra":
                    Instantiate(extraPref, new Vector2(posX, 7), Quaternion.identity, objectParent);

                    if (args[0] == "t")
                        StartCoroutine(tutorial.SlowDown(column));
                    break;
            }

        }
        yield return new WaitUntil(() => objectParent.childCount == 0);
        levelCompleted = true;
    }

    private IEnumerator CalculateResultsAndEnd()
    {
        yield return new WaitUntil(() => levelCompleted || !player.alive);
        if (player.alive)
            player.GetComponent<Animator>().SetTrigger("EndLevel");
        results.gameObject.SetActive(true);
        Text resultsText = results.GetComponentInChildren<Text>();

        float pointValue = 3500;
        float difficultyMult = GameSettings.DifficultyG2 * 0.3f + 1;
        player.Score(pointValue * difficultyMult * (player.alive ? 1 : 0));

        scoreAudio.Play();
        results.GetComponent<Animator>().Play("ResultsAnimIn");
        resultsText.text = string.Format("{0}\n+{1} PUNTOS!", GameSettings.patient.GetName().ToUpper(), player.score);

        GameSettings.patient.AddScore(player.score);
        GameSettings.patient.SavePatient();
    }

    private IEnumerator UpdateLevel()
    {
        while (player.alive)
        {
            float percentage = Mathf.Min(100, Mathf.Round((Time.time - startingTime) / totalTime * 100));
            percentageText.text = "Porcentaje\n" + percentage + "%";
            yield return new WaitForSeconds(0.1f);
        }
    }
}
