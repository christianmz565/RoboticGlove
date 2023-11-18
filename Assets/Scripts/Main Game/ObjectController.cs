using UnityEngine;

public class ObjectController : MonoBehaviour
{
    public bool isHeld;
    public bool isInGoal;
    private GameObject handPlayer;

    // Start is called before the first frame update
    void Start()
    {
        handPlayer = GameObject.Find("Hand");
    }

    // Update is called once per frame
    void Update()
    {
        if (isHeld)
        {
            Vector2 newPos = handPlayer.transform.position;
            transform.position = newPos;
        }
    }
}
