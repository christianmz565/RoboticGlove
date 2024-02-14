using System.IO;
using UnityEngine;

public class Patient
{
    public string name;
    public int score;

    public Patient(string name)
    {
        this.name = name;
    }

    public string GetName()
    {
        return name;
    }

    public int GetScore()
    {
        return score;
    }

    public void AddScore(int score)
    {
        this.score += score;
    }

    public void SavePatient()
    {
        string path = Application.persistentDataPath + "/Patients";
        string jsonPatient = JsonUtility.ToJson(this, true);
        File.WriteAllText(path + "/" + name + ".json", jsonPatient);
    }
}
