using System;

[Serializable]
public class DayScore
{
    public string day;
    public float score;

    public DayScore(string day, float score)
    {
        this.day = day;
        this.score = score;
    }

    public string GetDay()
    {
        return day;
    }

    public float GetScore()
    {
        return score;
    }

    public void AddScore(float score)
    {
        this.score += score;
    }
}
