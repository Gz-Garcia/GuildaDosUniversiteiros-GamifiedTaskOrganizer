using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Auth;
using Firebase.Database;
using System.Linq;
using System.Threading.Tasks;

public class GroupsLoader : MonoBehaviour
{
    public static GroupsLoader Instance;

    public string userGroupID;
    public DataSnapshot userGroupData;
    public bool loading = true;

    private void Awake()
    {
        if (Instance == null) {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Debug.Log("Instance already exists, destroying groups manager!");
            Destroy(this);
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Start");
        StartCoroutine(LoadUserGroups());
    }

    private IEnumerator LoadUserGroups()
    {
        Debug.Log("Load User Groups Coroutine Start");
        yield return new WaitForSeconds(2f);

        Debug.Log("DBTask 1 Started");
        Task<DataSnapshot> DBTask = FirebaseManager.Instance.DBreference.Child("users")
        .Child(FirebaseManager.Instance.user.UserId).Child("groups").GetValueAsync();

        yield return new WaitUntil(predicate: () => DBTask.IsCompleted);
        Debug.Log("DBTask 1 Finished");
        if (DBTask.Exception != null) Debug.LogWarning(message: $"Failed to register task with {DBTask.Exception}");

        else {
            userGroupID = DBTask.Result.Value.ToString();

            Debug.Log("DBTask 2 Started");
            DBTask = FirebaseManager.Instance.DBreference.Child("groups").Child(userGroupID).GetValueAsync();
            userGroupData = DBTask.Result;

            yield return new WaitUntil(predicate: () => DBTask.IsCompleted);
            Debug.Log("DBTask 2 Finished");

            if (DBTask.Exception != null) Debug.LogWarning(message: $"Failed to register task with {DBTask.Exception}");

            Debug.Log("Carregou Grupos\n GroupsLoader.Instance.userGroupData.Child(group_name).Value.ToString()");
            Debug.Log(userGroupID);
            
            loading = false;
            // StartCoroutine(UserGroupsUpdater());
        }
    }

    // public IEnumerator UserGroupsUpdater() {
    //     yield return new WaitForSeconds(2f);

    //     Task<DataSnapshot> DBTask = FirebaseManager.Instance.DBreference.Child("users")
    //     .Child(FirebaseManager.Instance.user.UserId).Child("groups").GetValueAsync();

    //     yield return new WaitUntil(predicate: () => DBTask.IsCompleted);
        

    //     if (DBTask.Exception != null) Debug.LogWarning(message: $"Failed to register task with {DBTask.Exception}");

    //     else {
    //         userGroupID = DBTask.Result.Value.ToString();
    //         StartCoroutine(UserGroupsUpdater());
    //     }
    // }
}
