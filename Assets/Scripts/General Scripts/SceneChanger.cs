using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneChanger
{
    static GameObject fade = GameObject.Find("Fade");
    public static void ChangeScene(MonoBehaviour instance, string scene)
    {
        fade.GetComponent<Animator>().SetTrigger("Enter");
        instance.StartCoroutine(Load(scene));
    }

    static IEnumerator Load(string scene)
    {
        yield return new WaitForSeconds(0.5f);
        SceneManager.LoadScene(scene);
        fade.GetComponent<Animator>().SetTrigger("Leave");
    }
}
