using UnityEngine;
using UnityEngine.UI;

public class RandomButton : LevelButton
{
    [SerializeField] private InputField difficulty;

    new void Start()
    {
        base.Start();
    }

    public override void InteractAction()
    {
        GameSettings.difficulty = int.Parse(difficulty.text);
        base.InteractAction();
    }
}
