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

public class ProfileUIManager : MonoBehaviour
{
    [Header("Settings")]
    public bool LoadProfile;
    public bool LoadMiniProfile;

    private PlayerData player;

    [Header("MiniProfile")]
    public TMP_Text mpPlayerName;
    public TMP_Text mpPlayerLevel;
    public TMP_Text mpPlayerXp;
    public TMP_Text mpPlayerCoins;
    
    [Header("MainProfile")]
    public TMP_Text usernameField;
    public TMP_Text emailField;
    public TMP_Text levelField;
    public TMP_Text xpField;
    public TMP_Text goldField;
    public TMP_Text completedtasksField;

    void Start() {
        StartCoroutine(UpdateUserData());
    }

    private IEnumerator UpdateUserData()
    {
        DataSnapshot playerData = PlayerProfileLoader.Instance.playerProfile;

        if (playerData != null) {
            LoadProfileUI(playerData);
        }

        yield return new WaitForSeconds(2f);
        StartCoroutine(UpdateUserData());

    }

    private void LoadProfileUI(DataSnapshot snapshot) {
        // Mini profile
        if(LoadMiniProfile) {
            mpPlayerName.text = snapshot.Child("username").Value.ToString();
            mpPlayerLevel.text = "Level " + snapshot.Child("level").Value.ToString();
            mpPlayerXp.text = snapshot.Child("xp").Value.ToString() + " XP";
            mpPlayerCoins.text = "$ " + snapshot.Child("gold").Value.ToString();
        }
        if(LoadProfile) {
            // Main profile
            usernameField.text = FirebaseManager.Instance.user.DisplayName;
            emailField.text = FirebaseManager.Instance.user.Email;
            xpField.text = snapshot.Child("xp").Value.ToString();
            levelField.text = snapshot.Child("level").Value.ToString();
            goldField.text = snapshot.Child("gold").Value.ToString();
            completedtasksField.text = snapshot.Child("tasks").Child("comp_main_quest").Value.ToString();
        }
    }
}