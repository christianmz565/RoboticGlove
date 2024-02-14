using System;
using UnityEngine;
using UnityEngine.UI;

public class PatientController : MonoBehaviour
{
    [SerializeField] private Text nameText;
    [SerializeField] private Text scoreText;

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
    }
}
