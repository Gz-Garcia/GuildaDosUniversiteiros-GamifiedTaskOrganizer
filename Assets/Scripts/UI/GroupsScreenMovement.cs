using System.Threading;
using System.Numerics;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroupsScreenMovement : MonoBehaviour
{
    
    public GameObject groupTasksPos, groupMembersPos, leaderboardPos, profilePos;
    public GameObject groupsPanel;
    private UnityEngine.Vector3 movementTarget;
    private bool movingMenu;
    public float slideSpeed;
    private float tempMenuPos;

    public static GroupsScreenMovement Instance;
    private void Awake() {
        if (Instance == null)
        {
            Instance = this;
        }
        else if (Instance != null)
        {
            Debug.Log("Instance already exists, destroying object!");
            Destroy(this);
        }
    }

    void Start()
    {
        groupsPanel.transform.position = groupTasksPos.transform.position;
    }

    // Update is called once per frame
    void Update() {
        if (movingMenu)
        {
            groupsPanel.transform.position = UnityEngine.Vector3.Lerp(groupsPanel.transform.position,
            movementTarget, slideSpeed * Time.deltaTime);

            if (groupsPanel.transform.localPosition.x == tempMenuPos)
            {
                movingMenu = false;
                groupsPanel.transform.position = movementTarget;
                tempMenuPos = -999999999.99f;
            }
            if (movingMenu) tempMenuPos = groupsPanel.transform.position.x;
        }
    }

    public void SlideGroupTasks() {
        movementTarget = groupTasksPos.transform.position;
        movingMenu = true;
    }

    public void SlideLeaderboard() {
        movementTarget = leaderboardPos.transform.position;
        movingMenu = true;
    }

    public void SlideGroupMembers()
    {
        movementTarget = groupMembersPos.transform.position;
        movingMenu = true;
    }

    public void SlideProfile() {
        movementTarget = profilePos.transform.position;
        movingMenu = true;
    }
}
