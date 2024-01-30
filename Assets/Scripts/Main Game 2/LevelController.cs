using System.Collections;
using UnityEngine;
using TMPro;

public class LevelController : MonoBehaviour
{
    [SerializeField] private GameObject canvas;
    [SerializeField] private AudioSource audioSource;
    [SerializeField] private AudioClip[] songs;
    [SerializeField] private GameObject passPref;
    [SerializeField] private GameObject notPassPref;
    [SerializeField] private GameObject[] treePrefs;
    [SerializeField] private GameObject obstaclePref;
    [SerializeField] private GameObject extraPref;
    [SerializeField] private PlayerController player;
    [SerializeField] private Transform objectParent;
    private string[] level;
    private float totalTime = GameSettings.TravelDelay;

    // Start is called before the first frame update
    void Start()
    {
        level = Resources.Load<TextAsset>("Game 2/Levels/" + GameSettings.Level).text.Split("\n");
        StartLevel();
    }

    // Update is called once per frame
    void Update()
    {

    }

    void StartLevel()
    {
        Debug.Log("Now playing level " + GameSettings.Level);
        string[] lastArgs = level[level.Length - 1].Split(" ");
        totalTime = float.Parse(lastArgs[2]) + GameSettings.TravelDelay;
        audioSource.clip = songs[int.Parse(GameSettings.Level) - 1];
        audioSource.volume = PlayerPrefs.GetInt("volume") / 100.0f;
        audioSource.Play();
        StartCoroutine(GenerateLevel(level));
        StartCoroutine(UpdateLevel());
    }

    IEnumerator GenerateLevel(string[] level)
    {
        for (int line = 1; line < level.Length; line++)
        {
            Debug.Log(level[line]);
            string[] args = level[line].Split(" ");
            yield return new WaitUntil(() => float.Parse(args[2]) < audioSource.time + GameSettings.TravelDelay);
            float width = GameSettings.Width;
            int column = int.Parse(args[1]);
            float posX = -width / 2 + column * width / 3;
            switch (args[0])
            {
                case "pass":
                    float scale = GameSettings.ScrollSpeed * GameSettings.DurationScaleMult * float.Parse(args[3]);
                    float colliderScale = (scale - 2) * 100;
                    float posY = 7 + scale / 2;
                    GameObject instPass = Instantiate(passPref, new Vector2(posX, posY), Quaternion.identity, objectParent);
                    instPass.transform.localScale = new Vector2(1.5f, scale);
                    float currentSize = instPass.GetComponent<MeshRenderer>().bounds.size.y;
                    float newSize = currentSize - 1.5f;
                    float ratio = newSize / currentSize;
                    instPass.GetComponent<BoxCollider2D>().size = new Vector2(1, Mathf.Max(0.25f, ratio));

                    for (int col = 0; col < 4; col++)
                    {
                        if (col != column)
                        {
                            float colX = -width / 2 + col * width / 3;
                            GameObject instNotPass = Instantiate(notPassPref, new Vector2(colX, posY), Quaternion.identity, objectParent);
                            float height = currentSize * 2.5f;
                            instNotPass.GetComponent<SpriteRenderer>().size = new Vector2(10.3f, height);
                            instNotPass.GetComponent<BoxCollider2D>().size = new Vector2(2.5f, height);

                            int maxTrees = (int)(currentSize / 2.5f);
                            for (int tree = 0; tree < maxTrees; tree++)
                            {
                                float var = Random.Range(-1f, 1f);
                                float treeX = colX + var;
                                float treeY = 9 + 2.5f * tree;
                                Instantiate(treePrefs[Random.Range(0, treePrefs.Length)], new Vector3(treeX, treeY, -1), Quaternion.identity, objectParent);
                            }
                        }
                    }
                    break;
                case "obstacle":
                    int rotationY = column <= 1 ? -85 : -95;
                    Instantiate(obstaclePref, new Vector2(posX, 7), Quaternion.Euler(0, rotationY, 90), objectParent);
                    break;
                case "extra":
                    Instantiate(extraPref, new Vector2(posX, 7), Quaternion.identity, objectParent);
                    break;
            }

        }
        while (objectParent.childCount != 0)
            yield return new WaitForSeconds(0.5f);
        while (player.health > 0)
        {
            player.Hurt();
            player.Score();
            yield return new WaitForSeconds(0.25f);
        }
        Debug.Log("Score: " + player.score);
        
        StartCoroutine(SceneChanger.ChangeScene("Levels Menu"));
    }

    IEnumerator UpdateLevel()
    {
        float startingTime = Time.time;
        while (true)
        {
            float percentage = Mathf.Min(100, Mathf.Round((Time.time - startingTime) / totalTime * 100));
            canvas.transform.Find("Percentage").GetComponent<TextMeshProUGUI>().text = percentage + "%";
            yield return new WaitForSeconds(0.25f);
        }
    }
}
