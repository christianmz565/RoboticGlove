using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PatientController : MonoBehaviour
{
    [SerializeField] private Text nameText;
    [SerializeField] private Text scoreText;
    [SerializeField] private Text vGuideText;
    [SerializeField] private Transform scoresBoard;
    [SerializeField] private GameObject hGuide;
    [SerializeField] private LineRenderer lineR;
    [SerializeField] private LineRenderer lineL;
    private const float BOARD_DIVISIONS = 10f;
    private const float HORIZONTAL_MAX = 900f;
    private const float VERTICAL_MAX = 167f;
    private const float X_OFFSET = 90f;
    // Start is called before the first frame update
    void Start()
    {
        nameText.text = GameSettings.patient.GetName();
    }

    public void ShowPatient()
    {
        string namestr = string.Format("{0}", GameSettings.patient.GetName());
        string scorestr = string.Format("Puntaje Total\n{0}", GameSettings.patient.GetScore());
        nameText.text = namestr;
        scoreText.text = scorestr;

        List<DayScore> scoresByDay = GameSettings.patient.GetScoresByDay();
        float greatest = 0;
        foreach (DayScore kv in scoresByDay)
        {
            if (kv.GetScoreL() > greatest)
                greatest = kv.GetScoreL();
            if (kv.GetScoreR() > greatest)
                greatest = kv.GetScoreR();

        }
        string greateststr = greatest.ToString();
        int firstD = int.Parse(greateststr[0].ToString()) + 1;
        int max = int.Parse(firstD + new string('0', greateststr.Length - 1));

        float gap = max / BOARD_DIVISIONS;
        string guidestr = "0";
        for (int i = 1; i <= BOARD_DIVISIONS; i++)
            guidestr = string.Format("{0}\n", gap * i) + guidestr;
        vGuideText.text = guidestr;

        int totalScores = scoresByDay.Count;
        lineR.positionCount = totalScores;
        lineL.positionCount = totalScores;

        if (totalScores == 1)
        {
            lineR.positionCount = 2;
            lineL.positionCount = 2;
            lineR.SetPosition(1, lineR.GetPosition(0) + Vector3.right * 10);
            lineL.SetPosition(1, lineL.GetPosition(0) + Vector3.right * 10);
        }

        for (int i = 0; i < totalScores; i++)
        {
            float x;
            if (totalScores == 1)
                x = 0;
            else
                x = HORIZONTAL_MAX / (totalScores - 1) * i;
            lineR.SetPosition(i, new Vector3(x, VERTICAL_MAX * scoresByDay[i].GetScoreR() / max));
            lineL.SetPosition(i, new Vector3(x, VERTICAL_MAX * scoresByDay[i].GetScoreL() / max));
            Text instGuide = Instantiate(hGuide, Vector3.zero, Quaternion.identity, scoresBoard).GetComponent<Text>();
            instGuide.GetComponent<RectTransform>().anchoredPosition = new Vector2(X_OFFSET + HORIZONTAL_MAX / (scoresByDay.Count - 1) * i, 0);
            instGuide.text = string.Format("{0}", scoresByDay[i].GetDay()[..5]);
        }


    }
}
