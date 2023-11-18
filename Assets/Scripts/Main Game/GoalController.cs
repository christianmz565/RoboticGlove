using UnityEngine;

public class GoalController : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag.Equals("Object"))
            other.GetComponent<ObjectController>().isInGoal = true;
    }

    void OnTriggerExit2D(Collider2D other)
    {
        if (other.tag.Equals("Object"))
            other.GetComponent<ObjectController>().isInGoal = false;
    }
}
