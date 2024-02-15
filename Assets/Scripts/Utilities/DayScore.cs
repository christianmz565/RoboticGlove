using System;

[Serializable]
public class DayScore
{
    public string day;
    public int score;

    public DayScore(string day, int score)
    {
        this.day = day;
        this.score = score;
    }

    public string GetDay()
    {
        return day;
    }

    public int GetScore()
    {
        return score;
    }

    public void AddScore(int score)
    {
        this.score += score;
    }
}
