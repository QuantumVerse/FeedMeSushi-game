using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class SwipeDetection : MonoBehaviour
{
    public Player player;
    private Vector2 startPos, endPos;
    public int pixelDistToDetect = 50 ;
    private bool fingerDown;
    private bool isMouseDown = false;
    bool detectSwipeOnlyAfterRelease = false;

    IDictionary<string, Vector3> playerDirectionsMap = new Dictionary<string, Vector3>()
    {
        {"up", Vector3.up},
        {"down", Vector3.down},
        {"left", Vector3.back},
        {"right", Vector3.forward}
    };

    void Update()
    {
        HandleSwipeGestures();
        // HandleFingerSwipe();

        //testing for pc
        HandleMouseSwipe();
    }

    void HandleFingerSwipe()
    {
        // TODO: Delete this function later
        if(fingerDown == false && Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began)
        {
            startPos = Input.touches[0].position;
            fingerDown = true;
        }
        
        //is our finger touching the screen ?
        if (fingerDown && !isMouseDown)
        {
            //did we swipe up?
            if(Input.touches[0].position.y >= startPos.y + pixelDistToDetect)
            {
                OnSwipe("up");
            }
            else if(Input.touches[0].position.x <= startPos.x - pixelDistToDetect)
            {
                OnSwipe("left");
            }
            else if(Input.touches[0].position.x >= startPos.x + pixelDistToDetect)
            {
                OnSwipe("right");
            }
            else if(Input.touches[0].position.y <= startPos.y - pixelDistToDetect)
            {
                OnSwipe("down");
            }

        }
        if(fingerDown && Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Ended)
        {
            StopSwipe();
        }
    }

    void HandleMouseSwipe()
    {
        if(fingerDown == false && Input.GetMouseButtonDown(0))
        {
            startPos = Input.mousePosition;
            fingerDown = true;
            isMouseDown = true;
        }

        if (fingerDown)
        {
            if(Input.mousePosition.y >= startPos.y + pixelDistToDetect)
            {
                OnSwipe("up");
            }
            else if(Input.mousePosition.x <= startPos.x - pixelDistToDetect)
            {
                OnSwipe("left");
            }
            else if(Input.mousePosition.x >= startPos.x + pixelDistToDetect)
            {
                OnSwipe("right");
            }
            else if(Input.mousePosition.y <= startPos.y - pixelDistToDetect)
            {
                OnSwipe("down");
            }
        }

        if(fingerDown && Input.GetMouseButtonUp(0))
        {
            StopSwipe();
        }
    }

    void HandleSwipeGestures()
    {
        foreach (Touch touch in Input.touches)
        {
            if (touch.phase == TouchPhase.Began)
            {
                startPos = touch.position;
                endPos = touch.position;
            }

            //Detects Swipe while finger is still moving
            if (touch.phase == TouchPhase.Moved)
            {
                if (!detectSwipeOnlyAfterRelease)
                {
                    endPos = touch.position;
                    CheckSwipeDirection();
                }
            }

            //Detects swipe after finger is released
            if (touch.phase == TouchPhase.Ended)
            {
                endPos = touch.position;
                CheckSwipeDirection();
            }
        }
    }

    void CheckSwipeDirection()
    {
        //Check if Vertical swipe
        if (verticalMove() > pixelDistToDetect && verticalMove() > horizontalValMove())
        {
            //Debug.Log("Vertical");
            if (endPos.y - startPos.y > 0)//up swipe
            {
                OnSwipe("up");
            }
            else if (endPos.y - startPos.y < 0)//Down swipe
            {
                OnSwipe("down");
            }
            startPos = endPos;
        }

        //Check if Horizontal swipe
        else if (horizontalValMove() > pixelDistToDetect && horizontalValMove() > verticalMove())
        {
            //Debug.Log("Horizontal");
            if (endPos.x - startPos.x > 0)//Right swipe
            {
                OnSwipe("right");
            }
            else if (endPos.x - startPos.x < 0)//Left swipe
            {
                OnSwipe("left");
            }
            startPos = endPos;
        }

        //No Movement at-all
        else
        {
            //Debug.Log("No Swipe!");
        }
    }

    float verticalMove()
    {
        return Mathf.Abs(endPos.y - startPos.y);
    }

    float horizontalValMove()
    {
        return Mathf.Abs(endPos.x - startPos.x);
    }

    void OnSwipe(string direction)
    {
        player.Move(playerDirectionsMap[direction]);
        StopSwipe();
    }

    void StopSwipe()
    {
        fingerDown = false;
        isMouseDown = false;
    }
    
}
