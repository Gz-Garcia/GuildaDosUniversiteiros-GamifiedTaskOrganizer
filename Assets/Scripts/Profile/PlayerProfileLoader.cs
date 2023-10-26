using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using Firebase;
using Firebase.Auth;
using Firebase.Database;
using System.Linq;
using System.Threading.Tasks;

public class PlayerProfileLoader : MonoBehaviour
{
    public static PlayerProfileLoader Instance;
    public DataSnapshot playerProfile;
    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Debug.Log("Instance already exists, destroying profile loader");
            Destroy(this);
        }
    }

    void Start() {
        StartCoroutine(LoadUserData());
    }

    private IEnumerator LoadUserData()
    {
        yield return new WaitForSeconds(1f);
        //Debug.Log(FirebaseManager.Instance.DBreference);

        //Get the currently logged in user data
        Task<DataSnapshot> DBTask = FirebaseManager.Instance.DBreference.Child("users")
        .Child(FirebaseManager.Instance.user.UserId).GetValueAsync();

        yield return new WaitUntil(predicate: () => DBTask.IsCompleted);

        if (DBTask.Exception != null)
        {
            Debug.LogWarning(message: $"Failed to register task with {DBTask.Exception}");
        }
        else if (DBTask.Result.Value == null)
        {
            Debug.Log("Não foram encontrados dados, criando novo Save");
            StartCoroutine(CreateNewSave());
        }
        else
        {
            Debug.Log("Perfil do usuário Carregado");
            playerProfile = DBTask.Result;
        }
    }

    private IEnumerator CreateNewSave()
    {
        //Set the currently logged in user username in the database
        Task DBTask = FirebaseManager.Instance.DBreference.Child("users")
        .Child(FirebaseManager.Instance.user.UserId).Child("username").SetValueAsync(FirebaseManager.Instance.user.DisplayName);
        yield return new WaitUntil(predicate: () => DBTask.IsCompleted);
        if (DBTask.Exception != null) Debug.LogWarning(message: $"Failed to register task with {DBTask.Exception}");

        DBTask = FirebaseManager.Instance.DBreference.Child("users")
        .Child(FirebaseManager.Instance.user.UserId).Child("gold").SetValueAsync(0);
        yield return new WaitUntil(predicate: () => DBTask.IsCompleted);
        if (DBTask.Exception != null) Debug.LogWarning(message: $"Failed to register task with {DBTask.Exception}");

        DBTask = FirebaseManager.Instance.DBreference.Child("users")
        .Child(FirebaseManager.Instance.user.UserId).Child("level").SetValueAsync(0);
        yield return new WaitUntil(predicate: () => DBTask.IsCompleted);
        if (DBTask.Exception != null) Debug.LogWarning(message: $"Failed to register task with {DBTask.Exception}");

        DBTask = FirebaseManager.Instance.DBreference.Child("users")
        .Child(FirebaseManager.Instance.user.UserId).Child("xp").SetValueAsync(0);
        yield return new WaitUntil(predicate: () => DBTask.IsCompleted);
        if (DBTask.Exception != null) Debug.LogWarning(message: $"Failed to register task with {DBTask.Exception}");

        DBTask = FirebaseManager.Instance.DBreference.Child("users")
        .Child(FirebaseManager.Instance.user.UserId).Child("tasks").Child("comp_main_quest").SetValueAsync(0);
        yield return new WaitUntil(predicate: () => DBTask.IsCompleted);
        if (DBTask.Exception != null) Debug.LogWarning(message: $"Failed to register task with {DBTask.Exception}"); 

        StartCoroutine(LoadUserData());      
    }

    public void SignOutButton() {
        FirebaseManager.Instance.auth.SignOut();
        SceneManager.LoadScene(7);
    }


}
