using UnityEngine;

public static class GameSettings
{
    public static Patient patient = new("No Seleccionado");
    public static string Game = "1";
    public static string Level = "1";
    
    // Game 1
    public static int DifficultyG1;
    public static float ColliderOffsetScale = 0.5f;

    // Game 2
    public static int DifficultyG2;
    public static float Width = 9;
    public static float BaseScrollSpeed = 2;
    public static float ScrollSpeed = 3;
    public static float TravelDelay = 9f / ScrollSpeed;
    public static float DurationScaleMult = 0.8f;
    public static float PlayerInvulSeconds = 0.5f;
}
