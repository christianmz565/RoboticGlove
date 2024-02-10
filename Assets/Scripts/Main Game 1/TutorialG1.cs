using UnityEngine;

public class TutorialG1 : MonoBehaviour
{
    [SerializeField] private GameObject tutorialText;

    void Start()
    {
        if (GameSettings.Level == "1")
            tutorialText.SetActive(true);
    }
}