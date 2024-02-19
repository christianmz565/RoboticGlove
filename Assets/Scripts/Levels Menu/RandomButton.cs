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
        int dif = int.Parse(difficulty.text);
        if (dif >= 0 && dif <= 4)
        {
            GameSettings.Difficulty = dif;
            base.InteractAction();
        }
        else
        {
            invalidDifWarning.SetTrigger("New");
            difficulty.text = "";
        }
    }
}
