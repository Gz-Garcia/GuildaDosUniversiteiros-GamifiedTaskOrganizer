using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEditor;
using System.IO;
using System;
using TMPro;

public class HabitHandler : MonoBehaviour
{   
    public List<HabitData> habits = new List<HabitData>();
    private string filename = "habitos.json";

    public TMP_Text habitName;
    public GameObject habitObject, codeHolder, buttonBG, buttonIcon;
    public Image[] imagens;

    private bool completed;
    public Button button;
    public Sprite notDoneBG, doneBG, notDoneIcon, doneIcon;

    void Start() {
        completed = false;
    }

    private void carregaLista() {
        habits = FileHandler.ReadListFromJSON<HabitData>(filename);
    }

    public void completeHabit() {
        carregaLista();

        int codigo = Convert.ToInt32(codeHolder.name);
        foreach (HabitData habit in habits) {
            
            if(codigo == habit.hcode) {
                habit.hstate = 0;
            }
        }

        habitObject.SetActive(false);
        FileHandler.SaveToJSON<HabitData>(habits, filename);
        
    }

    public void CheckHabit() {
        completed = !completed;

        if (completed) {
            buttonBG.GetComponent<Image>().sprite = doneBG;
            buttonIcon.GetComponent<Image>().sprite = doneIcon;

            MainPersistence.Instance.CompleteDaily();
        }
        else
        {
            buttonBG.GetComponent<Image>().sprite = notDoneBG;
            buttonIcon.GetComponent<Image>().sprite = notDoneIcon;
        }
    }

}
