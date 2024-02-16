using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class Patient
{
    public string name;
    public float score;
    public List<DayScore> scoresByDay;

    public Patient(string name)
    {
        this.name = name;
        scoresByDay = new();
    }

    public string GetName()
    {
        return name;
    }

    public float GetScore()
    {
        return score;
    }

    public List<DayScore> GetScoresByDay()
    {
        return scoresByDay;
    }

    public void AddScore(float score)
    {
        this.score += score;
        AddScoreByDay(score);
    }

    public void SavePatient()
    {
        string path = Application.persistentDataPath + "/Patients";
        string jsonPatient = JsonUtility.ToJson(this, true);
        File.WriteAllText(path + "/" + name + ".json", jsonPatient);
    }

    private void AddScoreByDay(float score)
    {
        string day = GenerateDateKey(DateTime.Now);
        foreach (DayScore kv in scoresByDay)
        {
            if (kv.GetDay() == day)
            {
                kv.AddScore(score);
                return;
            }
        }
    }
    
    private string GenerateDateKey(DateTime time)
    {
        return time.ToString("dd/MM/yyyy");
    }
}
