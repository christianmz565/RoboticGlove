using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class ManualSongGenerator : MonoBehaviour
{
    public AudioSource music;
    public Queue<int> rows = new Queue<int>();
    public Queue<float> times = new Queue<float>();
    public Queue<float> durations = new Queue<float>();
    private float startTime;
    private float[] downTimes = new float[4];
    private enum Mode
    {
        pass,
        obstacle,
        extra
    }
    private Mode actualMode = Mode.pass;
    private bool createMode = true;
    // Start is called before the first frame update
    void Start()
    {
        startTime = Time.time;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.F7))
            createMode = true;
        if (createMode)
        {
            if (Input.GetKeyDown(KeyCode.P))
                actualMode = Mode.pass;
            if (Input.GetKeyDown(KeyCode.O))
                actualMode = Mode.obstacle;
            if (Input.GetKeyDown(KeyCode.E))
                actualMode = Mode.extra;
            Inputcheck(KeyCode.D, 0);
            Inputcheck(KeyCode.F, 1);
            Inputcheck(KeyCode.J, 2);
            Inputcheck(KeyCode.K, 3);
            if (Input.GetKeyDown(KeyCode.Space))
                Save();
        }
    }

    void Inputcheck(KeyCode key, int row)
    {
        if (Input.GetKeyDown(key))
        {
            rows.Enqueue(row);
            times.Enqueue(Time.time - startTime);
            if (actualMode == Mode.pass)
                downTimes[row] = Time.time;
        }
        if (Input.GetKeyUp(key))
        {
            if (actualMode == Mode.pass)
                durations.Enqueue(Time.time - downTimes[row]);
        }
    }

    void Save()
    {
        if (!File.Exists("Assets/Resources/Game 2/Levels/output.txt"))
        {
            string output = "ignored\n";
            while (rows.Count > 0)
            {
                output += actualMode + " ";
                output += rows.Dequeue() + " ";
                output += Math.Round((double)times.Dequeue(), 1) + " ";
                if (actualMode == Mode.pass)
                    output += Math.Round((double)durations.Dequeue(), 1);
                output += "\n";
            }
            File.WriteAllText("Assets/Resources/Game 2/Levels/output.txt", output);
        }
        else
        {
            StreamReader streamReader = new StreamReader("Assets/Resources/Game 2/Levels/output.txt");
            string output = "ignored\n";
            streamReader.ReadLine();
            string line = streamReader.ReadLine();
            while (line != null || times.Count != 0)
            {
                if (line != null && times.Count > 0)
                {
                    string[] args = line.Split(" ");
                    if (float.Parse(args[2]) < times.Peek())
                    {
                        output += line + "\n";
                        line = streamReader.ReadLine();
                    }
                    if (float.Parse(args[2]) > times.Peek())
                    {
                        output += actualMode + " ";
                        output += rows.Dequeue() + " ";
                        output += Math.Round((double)times.Dequeue()) + " ";
                        if (actualMode == Mode.pass)
                            output += Math.Round((double)durations.Dequeue());
                        output += "\n";
                    }
                }
                else if (line != null)
                {
                    output += line + "\n";
                    line = streamReader.ReadLine();
                }
                else if (times.Count > 0)
                {
                    output += actualMode + " ";
                    output += rows.Dequeue() + " ";
                    output += Math.Round((double)times.Dequeue()) + " ";
                    if (actualMode == Mode.pass)
                        output += Math.Round((double)durations.Dequeue());
                    output += "\n";
                }
            }
            streamReader.Close();
            File.WriteAllText("Assets/Resources/Game 2/Levels/output.txt", output);
        }
    }
}
