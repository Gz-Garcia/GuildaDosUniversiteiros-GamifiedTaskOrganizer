using System;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using Firebase;
using Firebase.Auth;
using Firebase.Database;
using TMPro;
using System.Linq;
using System.Threading.Tasks;

public class FirebaseManager : MonoBehaviour
{
    public static FirebaseManager Instance;

    //Firebase variables
    [Header("Firebase")]
    public bool signedIn = false;
    public DependencyStatus dependencyStatus;
    public FirebaseAuth auth;
    public FirebaseUser user;
    public DatabaseReference DBreference;

    private void Awake()
    {
        if (Instance == null) {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else {
            Debug.Log("Instance already exists, destroying firebase manager!");
            Destroy(this);
        }
    }

    void Start() {
        StartCoroutine(CheckAndFixDependenciesAsync());
    }

    private IEnumerator CheckAndFixDependenciesAsync() {
        var dependencyTask = FirebaseApp.CheckAndFixDependenciesAsync();
        yield return new WaitUntil(predicate: () => dependencyTask.IsCompleted);

        dependencyStatus = dependencyTask.Result;
        if (dependencyStatus == DependencyStatus.Available)
        {
            //If they are avalible Initialize Firebase
            InitializeFirebase();
            yield return new WaitForEndOfFrame();
            StartCoroutine(CheckForAutoLogin());
        }
        else
        {
            Debug.LogError("Could not resolve all Firebase dependencies: " + dependencyStatus);
        }
    }

    private void InitializeFirebase()
    {
        Debug.Log("Setting up Firebase Auth");
        //Set the authentication instance object
        try {
            auth = FirebaseAuth.DefaultInstance;
            auth.StateChanged += AuthStateChanged;
            AuthStateChanged(this, null);
            DBreference = FirebaseDatabase.DefaultInstance.RootReference;
        }
        catch(Exception e) {
            Debug.Log(e);
        }
    }

    private IEnumerator CheckForAutoLogin() {
        if(user != null) {
            var reloadUserTask = user.ReloadAsync();
            yield return new WaitUntil(predicate: () => reloadUserTask.IsCompleted);

            AutoLogin();
        }
        else {
            SceneManager.LoadScene(7);
        }
    }


    private void AutoLogin()
    {
        if(user != null) {
            References.userName = user.DisplayName;
            if(LoginUIManager.instance != null) LoginUIManager.instance.UserDataScreen();
        }
        else {
            HomeScreenMovement.instance.SlideProfile();
            LoginUIManager.instance.LoginScreen();
        }
    }


    void AuthStateChanged(object sender, System.EventArgs eventArgs) {
        if(auth.CurrentUser != user) {
            signedIn = user != auth.CurrentUser && auth.CurrentUser != null;

            if(signedIn && user != null) {
                UnityEngine.Debug.Log("Signed Out " + user.UserId);
            }

            user = auth.CurrentUser;

            if(signedIn) {
                UnityEngine.Debug.Log("Signed In " + user.UserId);
            }
        }
    }
}