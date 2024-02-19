using System;

[Serializable]
public class DayScore
{
    public string day;
    public float scoreL;
    public float scoreR;

    public DayScore(string day)
    {
        this.day = day;
    }

    public string GetDay()
    {
        return day;
    }

    public float GetScoreL()
    {
        return scoreL;
    }

    public float GetScoreR()
    {
        return scoreR;
    }

    public void AddScore(float score, int hand)
    {
        if (hand == 1)
            scoreR += score;
        else
            scoreL += score;
    }
}
