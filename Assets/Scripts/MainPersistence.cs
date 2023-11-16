using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System.Threading.Tasks;

public class MainPersistence : MonoBehaviour
{
    public static MainPersistence Instance;
    public string code = "-1";
    public PlayerData playerData;
    private string playerFilename = "player.json";

    private void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        
        LoadPlayerInfo();
        
        DontDestroyOnLoad(gameObject);
    }

    public void CompleteTask(int xpGained) {
        playerData.xp += xpGained;
        playerData.gold += xpGained*2;
        playerData.completedTasks += 1;
        SavePlayerInfo();
    }

    public void UncompleteTask(int xpGained) {
        playerData.xp -= xpGained;
        playerData.completedTasks -= 1;
        SavePlayerInfo();
    }

    void SavePlayerInfo()
    {
        FileHandler.SaveToJSON<PlayerData>(playerData, playerFilename);
        StartCoroutine(SaveOnCloud());        
    }

    public IEnumerator SaveOnCloud() {
        string playerID = FirebaseManager.Instance.user.UserId;

        Task DBTask = FirebaseManager.Instance.DBreference.Child("users")
        .Child(playerID).Child("gold").SetValueAsync(playerData.gold);
        yield return new WaitUntil(predicate: () => DBTask.IsCompleted);

        DBTask = FirebaseManager.Instance.DBreference.Child("users")
        .Child(playerID).Child("level").SetValueAsync(playerData.level);
        yield return new WaitUntil(predicate: () => DBTask.IsCompleted);

        DBTask = FirebaseManager.Instance.DBreference.Child("users")
        .Child(playerID).Child("xp").SetValueAsync(playerData.xp);
        yield return new WaitUntil(predicate: () => DBTask.IsCompleted);

        DBTask = FirebaseManager.Instance.DBreference.Child("users")
        .Child(playerID).Child("tasks").Child("comp_main_quest").SetValueAsync(playerData.completedTasks);
        yield return new WaitUntil(predicate: () => DBTask.IsCompleted);
    }

    public void LoadPlayerInfo()
    {
        playerData = FileHandler.ReadFromJSON<PlayerData>(playerFilename);
        if (playerData == null)
        {
            Debug.Log("No player, initializing");
            playerData = new PlayerData("Player", 0, 0, 0, 0);
            SavePlayerInfo();
        }
    }

    public void SpendGold(int gold) {
        playerData.gold -= gold;
        SavePlayerInfo();
    }

    public void SubmitSide(int goldGained) {
        playerData.gold += goldGained;
        playerData.xp += 20;
        if(playerData.xp >= 100) {
            playerData.xp -= 100;
            playerData.level += 1;
        }
        SavePlayerInfo();
    }

    public void CompleteDaily() {
        playerData.gold += 20;
        playerData.xp += 20;
        if(playerData.xp >= 100) {
            playerData.xp -= 100;
            playerData.level += 1;
        }
        SavePlayerInfo();
    }

}
