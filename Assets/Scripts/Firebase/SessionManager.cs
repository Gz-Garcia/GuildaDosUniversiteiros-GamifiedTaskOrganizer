
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System.Threading.Tasks;
using Firebase;
using Firebase.Auth;
using Firebase.Database;
using TMPro;

public class SessionManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine("LoginForTests");
    }

    // Update is called once per frame
    void Update()
    {
    }

    IEnumerator LoadSession() {
        yield return new WaitForSeconds(5f);
        try {
            Debug.Log(FirebaseManager.Instance.user.UserId);
        }
        catch(Exception ex) {
            Debug.Log(ex);           
            StartCoroutine("LoadSession");
        }
    }

    private IEnumerator LoginForTests()
    {
        yield return new WaitForSeconds(5f);

        //Call the Firebase auth signin function passing the email and password
        Task<AuthResult> LoginTask = FirebaseManager.Instance.auth.SignInWithEmailAndPasswordAsync("test@test.com", "123456");
        //Wait until the task completes
        yield return new WaitUntil(predicate: () => LoginTask.IsCompleted);

        if (LoginTask.Exception != null)
        {
            //If there are errors handle them
            Debug.LogWarning(message: $"Failed to register task with {LoginTask.Exception}");
            FirebaseException firebaseEx = LoginTask.Exception.GetBaseException() as FirebaseException;
            AuthError errorCode = (AuthError)firebaseEx.ErrorCode;

            string message = "Login Failed!";
            switch (errorCode)
            {
                case AuthError.MissingEmail:
                    message = "Missing Email";
                    break;
                case AuthError.MissingPassword:
                    message = "Missing Password";
                    break;
                case AuthError.WrongPassword:
                    message = "Wrong Password";
                    break;
                case AuthError.InvalidEmail:
                    message = "Invalid Email";
                    break;
                case AuthError.UserNotFound:
                    message = "Account does not exist";
                    break;
            }
            Debug.Log(message);
        }
        else
        {
            //User is now logged in
            //Now get the result
            FirebaseManager.Instance.user = LoginTask.Result.User;
            Debug.LogFormat("User signed in successfully: {0} ({1})", FirebaseManager.Instance.user.DisplayName, FirebaseManager.Instance.user.Email);
        }
    }
}
