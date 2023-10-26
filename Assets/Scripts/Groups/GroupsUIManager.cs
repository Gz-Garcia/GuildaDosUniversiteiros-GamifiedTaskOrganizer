using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Firebase;
using Firebase.Auth;
using Firebase.Database;
using System.Linq;
using System.Threading.Tasks;
using TMPro;

public class GroupsUIManager : MonoBehaviour
{
    [Header("Panels")]
    public GameObject emptyGroupsPanel;
    public GameObject groupsSliderPanel;
    public GameObject groupTasksPanel;
    public GameObject groupMembersPanel;
    public GameObject groupLeaderboardPanel;

    [Header("Group Creation")]
    public GameObject newGroupPanel;
    public GameObject joinGroupPanel;
    public TMP_InputField newGroupName;
    public TMP_InputField joinGroupName;

    public Button newGroupSaveButton;
    public Button joinGroupSaveButton;

    [Header("Panel Fields")]
    public List<TMP_Text> groupNameTexts;

    void Start() {
        StartCoroutine(UpdateGroupsUI());
    }
    
    private IEnumerator UpdateGroupsUI() {
        if(!GroupsLoader.Instance.loading) {
            if (GroupsLoader.Instance.userGroupID == null)
            {
                emptyGroupsPanel.SetActive(true);
                groupsSliderPanel.SetActive(false);
            }
            else
            {
                emptyGroupsPanel.SetActive(false);
                groupsSliderPanel.SetActive(true);

                Debug.Log("");

                //foreach(TMP_Text txGP in groupNameTexts) 
                //txGP.text = GroupsLoader.Instance.userGroups.Child("group_name").Value.ToString();
            }
        }

        yield return new WaitForSeconds(1f);
    }


    private IEnumerator CreateNewGroup()
    {
        if(newGroupName.text != null) {

            newGroupSaveButton.interactable = false;

            TMP_Text buttonText = newGroupSaveButton.GetComponentInChildren<TMP_Text>();
            buttonText.text = "Criando";

            string guid = GenerateCode();

            // Criação da turma no bd
            Task DBTask = FirebaseManager.Instance.DBreference.Child("groups").SetValueAsync(guid);
            yield return new WaitUntil(predicate: () => DBTask.IsCompleted);
            if (DBTask.Exception != null) Debug.LogWarning(message: $"Failed to register task with {DBTask.Exception}");
            else {
                DBTask = FirebaseManager.Instance.DBreference.Child("groups").Child(guid).Child("group_name").SetValueAsync(newGroupName.text);
                yield return new WaitUntil(predicate: () => DBTask.IsCompleted);
                if (DBTask.Exception != null) Debug.LogWarning(message: $"Failed to register task with {DBTask.Exception}");

                DBTask = FirebaseManager.Instance.DBreference.Child("groups").Child(guid).Child("creator_id").SetValueAsync(FirebaseManager.Instance.user.UserId);
                yield return new WaitUntil(predicate: () => DBTask.IsCompleted);
                if (DBTask.Exception != null) Debug.LogWarning(message: $"Failed to register task with {DBTask.Exception}");

                DBTask = FirebaseManager.Instance.DBreference.Child("users")
                .Child(FirebaseManager.Instance.user.UserId).Child("groups").SetValueAsync(guid);

                yield return new WaitUntil(predicate: () => DBTask.IsCompleted);
                if (DBTask.Exception != null) Debug.LogWarning(message: $"Failed to register task with {DBTask.Exception}");

                buttonText.text = "Criado!";
                yield return new WaitForSeconds(1f);

                newGroupSaveButton.interactable = true;
                OpenGroupPanel();
            }
            
        }
        else
        {
            Debug.Log("Sem Nome");
        }
    }

    public void OpenNewGroupPanel() {
        newGroupPanel.SetActive(true);
        joinGroupPanel.SetActive(false);
    }

    public void OpenJoinGroupPanel() {
        newGroupPanel.SetActive(false);
        joinGroupPanel.SetActive(true);
    }

    public void CreateNewGroupButton()
    {
        if(newGroupName.text != null) {
            StartCoroutine(CreateNewGroup());
        }
    }

    public void OpenGroupPanel()
    {
        newGroupPanel.SetActive(false);
        joinGroupPanel.SetActive(false);
    }

    public string GenerateCode()
    {
        return System.Guid.NewGuid().ToString();
    }
}