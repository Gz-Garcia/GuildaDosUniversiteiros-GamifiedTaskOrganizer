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
        StartCoroutine(LoadUserGroups());
    }

    private IEnumerator LoadUserGroups()
    {
        yield return new WaitForSeconds(2f);

        Task<DataSnapshot> DBTask = FirebaseManager.Instance.DBreference.Child("users")
        .Child(FirebaseManager.Instance.user.UserId).Child("groups").GetValueAsync();

        yield return new WaitUntil(predicate: () => DBTask.IsCompleted);
        if (DBTask.Exception != null) Debug.LogWarning(message: $"Failed to register task with {DBTask.Exception}");
        
        else {
            userGroupID = DBTask.Result.Value.ToString();

            DBTask = FirebaseManager.Instance.DBreference.Child("groups").Child(userGroupID).GetValueAsync();
            userGroupData = DBTask.Result;

            Debug.Log("Carregou Grupos\n GroupsLoader.Instance.userGroupData.Child(group_name).Value.ToString()");
            Debug.Log(userGroupID);
            
            loading = false;
            StartCoroutine(UserGroupsUpdater());
        }
    }

    public IEnumerator UserGroupsUpdater() {
        yield return new WaitForSeconds(2f);

        Task<DataSnapshot> DBTask = FirebaseManager.Instance.DBreference.Child("users")
        .Child(FirebaseManager.Instance.user.UserId).Child("groups").GetValueAsync();

        yield return new WaitUntil(predicate: () => DBTask.IsCompleted);

        if (DBTask.Exception != null) Debug.LogWarning(message: $"Failed to register task with {DBTask.Exception}");
        
        else {
            userGroupID = DBTask.Result.Value.ToString();
            StartCoroutine(UserGroupsUpdater());
        }
    }
}
