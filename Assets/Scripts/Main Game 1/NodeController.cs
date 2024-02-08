using System.Collections.Generic;
using UnityEngine;

public class NodeController : MonoBehaviour
{
    public List<EdgeController> edges;
    private bool isHeld;
    private GameObject handPlayer;
    private AudioSource pickAudio;

    // Start is called before the first frame update
    void Start()
    {
        handPlayer = GameObject.Find("Hand");
        pickAudio = GetComponent<AudioSource>(); 
        pickAudio.volume = PlayerPrefs.GetInt("volume") / 100.0f;
    }

    // Update is called once per frame
    void Update()
    {
        if (isHeld)
        {
            Vector3 pos = handPlayer.transform.position;
            pos.z = transform.position.z;
            transform.position = pos;
        }
    }

    public void StartHold()
    {
        isHeld = true;
        transform.localScale = new Vector3(1.5f, 1.5f, 1);
        SetEdgesStatus(true);
        pickAudio.Play();
    }

    public void EndHold()
    {
        isHeld = false;
        transform.localScale = new Vector3(1, 1, 1);
        SetEdgesStatus(false);
        UpdateEdges();
        pickAudio.Play();
    }

    public void UpdateEdges()
    {
        foreach (EdgeController edge in edges)
            edge.UpdateEdge();
    }

    private void SetEdgesStatus(bool held)
    {
        foreach (EdgeController edge in edges)
            edge.areNodesHeld = held;
    }
}
