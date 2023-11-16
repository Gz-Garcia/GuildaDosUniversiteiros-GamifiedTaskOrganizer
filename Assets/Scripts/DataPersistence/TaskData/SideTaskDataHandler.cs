using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class SideTaskDataHandler : MonoBehaviour {
    [SerializeField] TMP_InputField nameInput;
    [SerializeField] TMP_InputField descriptionInput;
    [SerializeField] GameObject screenBlur;

    private int taskType = 1;

    private string filename = "tarefas_secundarias.json", codigo;

    List<SideTaskData> sideTasks = new List<SideTaskData>();

    private void Start() {
        sideTasks = FileHandler.ReadListFromJSON<SideTaskData>(filename);
    }

    public void AddTask() {
        string taskCode = GenerateCode();
        string taskName = nameInput.text;
        string taskDescription = descriptionInput.text;

        string modalTitle = "Missão adicionada";
        bool isEditing = false;

        if (MainPersistence.Instance.code != "0") {
            this.codigo = MainPersistence.Instance.code;
            isEditing = true;

            foreach (SideTaskData task in sideTasks) {
                if (codigo == task.stcode) {
                    task.stname = taskName;
                    task.stdescription = taskDescription;

                }
            }
        }
        else {
            sideTasks.Add(new SideTaskData(taskCode, taskName, taskDescription, taskType));
        }

        MainPersistence.Instance.code = "0";
        FileHandler.SaveToJSON<SideTaskData>(sideTasks, filename);

        screenBlur.SetActive(true);

        if (isEditing) modalTitle = "Missão alterada";
        ModalManager.Show(modalTitle, "Agora corra atraz de fazê-la!",
        new[] { new ModalButton() { Text = "Home", Callback = ReturnHome }, 
        new ModalButton() { Text = "Adicionar outra", Callback = AddOther}});
    }

    public void DeleteTask() {
        if (MainPersistence.Instance.code == "0") {
            Debug.Log("ERRO: Nenhum código selecionado");
        }
        else {
            this.codigo = MainPersistence.Instance.code;
            foreach (SideTaskData task in sideTasks) {
                if (codigo == task.stcode) {
                    sideTasks.Remove(task);
                    MainPersistence.Instance.code = "0";
                    FileHandler.SaveToJSON<SideTaskData>(sideTasks, filename);
                    SceneManager.LoadScene(0);
                    return;
                }
            }
        }
    }

    public string GenerateCode() {
        return System.Guid.NewGuid().ToString();
    }

    public void SetType(int d) {
        this.taskType = d;
    }

    public void ReturnHome() {
        screenBlur.SetActive(false);
        SceneManager.LoadScene(0);
    }

    public void AddOther() {
        screenBlur.SetActive(false);
        SceneManager.LoadScene(1);
    }

    public void ConfirmDeletion() {
        screenBlur.SetActive(true);
        ModalManager.Show("Confirmação", "Deseja realmente excluir esta missão?",
        new[] { new ModalButton() { Text = "Cancelar", Callback = CancelDeletion}, 
        new ModalButton() { Text = "Excluir", Callback = DeleteConfirmation}});
    }

    public void DeleteConfirmation() {
        ModalManager.Show("Missão Excluída", "Lembre-se de nunca desistir.",
        new[] { new ModalButton() { Text = "Ok", Callback = DeleteTask}});
    }

    public void CancelDeletion() {
        screenBlur.SetActive(false);
    }

}
