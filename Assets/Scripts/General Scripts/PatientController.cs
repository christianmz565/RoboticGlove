using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PatientController : MonoBehaviour
{
    [SerializeField] private Text nameText;
    [SerializeField] private Text scoreText;
    [SerializeField] private Text boardGuideText;
    [SerializeField] private LineRenderer line;
    private const float BOARD_DIVISIONS = 10f;
    private const float HORIZONTAL_MAX = 900f;
    private const float VERTICAL_MAX = 167f;

    // Start is called before the first frame update
    void Start()
    {
        nameText.text = GameSettings.patient.GetName();
    }

    public void ShowPatient()
    {
        string namestr = string.Format("Hola, {0}!", GameSettings.patient.GetName());
        string scorestr = string.Format("Puntaje Total\n{0}", GameSettings.patient.GetScore());
        nameText.text = namestr;
        scoreText.text = scorestr;

        List<DayScore> scoresByDay = GameSettings.patient.GetScoresByDay();
        float greatest = 0;
        foreach(DayScore kv in scoresByDay)
            if (kv.GetScore() > greatest)
                greatest = kv.GetScore();
        string greateststr = greatest.ToString(); 
        int firstD = int.Parse(greateststr[0].ToString()) + 1;
        int max = int.Parse(firstD + new string('0', greateststr.Length - 1));

        float gap = max / BOARD_DIVISIONS;
        string guidestr = "0";
        for (int i = 1; i <= BOARD_DIVISIONS; i++)
            guidestr = string.Format("{0}\n", gap * i) + guidestr;
        boardGuideText.text = guidestr;

        line.positionCount = scoresByDay.Count;
        for (int i = 0; i < scoresByDay.Count; i++)
            line.SetPosition(i, new Vector2(HORIZONTAL_MAX / (scoresByDay.Count - 1) * i, VERTICAL_MAX * scoresByDay[i].GetScore() / max));
    }
}
