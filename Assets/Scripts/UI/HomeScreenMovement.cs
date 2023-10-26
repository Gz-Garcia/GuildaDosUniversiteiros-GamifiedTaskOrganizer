using System.Threading;
using System.Numerics;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomeScreenMovement : MonoBehaviour
{
    
    public GameObject mainTasksPos, sideTasksPos, mapPos, profilePos;
    public GameObject homePanel;
    private UnityEngine.Vector3 movementTarget;
    private bool movingMenu;
    public float slideSpeed;
    private float tempMenuPos;

    public static HomeScreenMovement instance;
    private void Awake() {
        if (instance == null)
        {
            instance = this;
        }
        else if (instance != null)
        {
            Debug.Log("Instance already exists, destroying object!");
            Destroy(this);
        }
    }

    void Start()
    {
        homePanel.transform.position = mainTasksPos.transform.position;
    }

    // Update is called once per frame
    void Update() {
        if (movingMenu)
        {
            homePanel.transform.position = UnityEngine.Vector3.Lerp(homePanel.transform.position,
            movementTarget, slideSpeed * Time.deltaTime);

            if (homePanel.transform.localPosition.x == tempMenuPos)
            {
                movingMenu = false;
                homePanel.transform.position = movementTarget;
                tempMenuPos = -999999999.99f;
            }
            if (movingMenu) tempMenuPos = homePanel.transform.position.x;
        }
    }

    public void SlideMainTasks() {
        movementTarget = mainTasksPos.transform.position;
        movingMenu = true;
    }

    public void SlideMap() {
        movementTarget = mapPos.transform.position;
        movingMenu = true;
    }

    public void SlideProfile() {
        movementTarget = profilePos.transform.position;
        movingMenu = true;
    }
}
