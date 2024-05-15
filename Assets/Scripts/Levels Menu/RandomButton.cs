using UnityEngine;
using UnityEngine.UI;

public class RandomButton : LevelButton
{
    [SerializeField] private InputField difficulty;
    [SerializeField] private Animator invalidDifWarning;

    new void Start()
    {
        base.Start();
    }

    public override void InteractAction()
    {
        if (difficulty.text.Length == 0)
        {
            invalidDifWarning.SetTrigger("New");
            return;
        }
        
        int dif = int.Parse(difficulty.text);
        if (dif >= 0 && dif <= 4)
        {
            if (GameSettings.Game == "1")
                GameSettings.DifficultyG1 = dif;
            else
                GameSettings.DifficultyG2 = dif;
            base.InteractAction();
        }
        else
        {
            invalidDifWarning.SetTrigger("New");
            difficulty.text = "";
        }
    }
}