using System.Collections;
using UnityEngine;

public class MoveButton : BaseButton
{
    [SerializeField] private Animator anim;
    [SerializeField] private int direction;

    public override void InteractAction()
    {
        if (direction == 1)
            anim.SetTrigger("Right");
        else
            anim.SetTrigger("Left");
    }
}
