using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TaskListLoader : MonoBehaviour
{
    public GameObject taskPrefab, taskContainer, sidetaskprefab, sidetaskcontainer, mcpA, mcpB, mcpC, mapContainer;
    public TMP_Text concluidas, falidas;

    public List<TaskData> tasks = new List<TaskData>();
    public List<SideTaskData> sidetasks = new List<SideTaskData>();
    public int loadType;

    void Start()
    {
        tasks = FileHandler.ReadListFromJSON<TaskData>("tarefas.json");
        sidetasks = FileHandler.ReadListFromJSON<SideTaskData>("tarefas_secundarias.json");
        if(loadType == 1) LoadTasks();
        if(loadType == 2) LoadCompleted();
        if(loadType == 3) LoadSide();
        if(loadType == 4) LoadGTasks();
    }

    void Update()
    {
        
    }

    public void LoadTasks() {
        foreach (TaskData task in tasks) {
            if(task.tstate == 1) {
                GameObject nt = Instantiate(taskPrefab);
                nt.transform.SetParent(taskContainer.transform);

                TMP_Text ntName = nt.GetComponentInChildren<TMP_Text>();
                ntName.text = task.tname;

                GameObject codeHolder = GameObject.Find("CodeHolder");
                codeHolder.name = task.tcode;
            }
        }    
    }

    public void LoadGTasks() {
        foreach (TaskData task in tasks) {
            if(task.tstate == 2) {
                GameObject nt = Instantiate(taskPrefab);
                nt.transform.SetParent(taskContainer.transform);

                TMP_Text ntName = nt.GetComponentInChildren<TMP_Text>();
                ntName.text = task.tname;

                GameObject codeHolder = GameObject.Find("CodeHolder");
                codeHolder.name = task.tcode;
            }
        }    
    }

    public void LoadSide() {
        foreach (SideTaskData task in sidetasks) {
           
            GameObject nt = Instantiate(sidetaskprefab);
            nt.transform.SetParent(sidetaskcontainer.transform);

            TMP_Text ntName = nt.GetComponentInChildren<TMP_Text>();
            ntName.text = task.stname;

            GameObject codeHolder = GameObject.Find("CodeHolder");
            codeHolder.name = task.stcode;

            GameObject iconPlus = GameObject.Find("Plus");
            GameObject iconMinus = GameObject.Find("Minus");

            if(task.sttype > 0) {
                iconPlus.SetActive(true);
                iconMinus.SetActive(false);
            }
            else {
                iconPlus.SetActive(false);
                iconMinus.SetActive(true);
            }
        }    
    }

    public void LoadCompleted() {
        concluidas.text = MainPersistence.Instance.playerData.completedTasks.ToString();
        int count = 0;

        foreach (TaskData task in tasks)
        {
            if (task.tstate == 0)
            {
                count += 1;
                GameObject mapCell;
                if(count % 5 == 1) mapCell = Instantiate(mcpA);
                else if (count % 5 == 0) mapCell = Instantiate(mcpC);
                else mapCell = Instantiate(mcpB);

                mapCell.transform.SetParent(mapContainer.transform);

                TMP_Text taskLevel = mapCell.GetComponentInChildren<TMP_Text>();
                taskLevel.text = task.tdificulty.ToString();
            }
        }
    }
}
