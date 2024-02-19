using System.IO;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class PatientPicker : MonoBehaviour
{
    [SerializeField] private PatientController patientController;
    [SerializeField] private Animator newPatientWarning;
    private InputField inputField;
    private string path;

    // Start is called before the first frame update
    void Start()
    {
        path = Application.persistentDataPath + "/Patients";
        inputField = GetComponent<InputField>();
        if (!Directory.Exists(path))
            Directory.CreateDirectory(path);
        patientController.ShowPatient();
    }

    public void PickPatient()
    {
        string[] files = Directory.GetFiles(path);
        string name = inputField.text;
        string patientPath = path + "\\" + name + ".json";
        if (files.Contains(patientPath))
        {
            Patient patient = JsonUtility.FromJson<Patient>(File.ReadAllText(patientPath));
            GameSettings.patient = patient;
        }
        else
        {
            newPatientWarning.SetTrigger("New");
            GameSettings.patient = new Patient(name);
            GameSettings.patient.SavePatient();
        }
        GameSettings.patient.AddScore(0);
        patientController.ShowPatient();
        Debug.Log("full data path: " + path + "/" + name + ".json");
    }
}
