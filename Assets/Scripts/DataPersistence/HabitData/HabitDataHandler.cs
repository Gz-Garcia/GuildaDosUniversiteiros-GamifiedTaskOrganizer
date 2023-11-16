using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class HabitDataHandler : MonoBehaviour
{
    [SerializeField] TMP_InputField nameInput;
    [SerializeField] TMP_InputField descriptionInput;
    [SerializeField] GameObject screenBlur;

    private string filename = "habitos.json";

    List<HabitData> habits = new List<HabitData>();

    private void Start() {
        habits = FileHandler.ReadListFromJSON<HabitData>(filename);
    }

    public void AddHabit() {
        string modalTitle = "Missão adicionada";

        habits.Add(new HabitData(habits.Count ,nameInput.text, descriptionInput.text, 1));
        nameInput.text = "";
        descriptionInput.text = "";

        FileHandler.SaveToJSON<HabitData>(habits, filename);

        screenBlur.SetActive(true);
        ModalManager.Show(modalTitle, "Agora corra atraz de fazê-la!",
        new[] { new ModalButton() { Text = "Home", Callback = ReturnHome }, 
        new ModalButton() { Text = "Adicionar outra", Callback = AddOther}});


    }

    public void ReturnHome() {
        screenBlur.SetActive(false);
        SceneManager.LoadScene(0);
    }

    public void AddOther() {
        screenBlur.SetActive(false);
        SceneManager.LoadScene(1);
    }
}
