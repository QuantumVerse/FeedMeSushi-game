using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class SwipeDetection : MonoBehaviour
{
    public Player player;
    private Vector2 startPos;
    public int pixelDistToDetect = 50 ;
    private bool fingerDown;
    private bool isMouseDown = false;

  void Update() 
        {
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
                   fingerDown = false;
                   player.Move(Vector3.up);
               }
               else if(Input.touches[0].position.x <= startPos.x - pixelDistToDetect)
               {
                   fingerDown = false;
                   player.Move(Vector3.back);
               }
               else if(Input.touches[0].position.x >= startPos.x + pixelDistToDetect)
               {
                   fingerDown = false;
                   player.Move(Vector3.forward);
               }
               else if(Input.touches[0].position.y <= startPos.y - pixelDistToDetect)
               {
                   fingerDown = false; 
                   player.Move(Vector3.down);
               }

           }
          if(fingerDown && Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Ended)
          {
            fingerDown = false;
          }


           //testing for pc 

    if(fingerDown == false && Input.GetMouseButtonDown(0))
           {
               startPos = Input.mousePosition;
               fingerDown = true;
               isMouseDown = true;
               Debug.Log("fingerDown");
           }

           if (fingerDown)
           {
               if(Input.mousePosition.y >= startPos.y + pixelDistToDetect)
               {
                   fingerDown = false;
                   player.Move(Vector3.up);
                   Debug.Log("swipeup");
               }
               else if(Input.mousePosition.x <= startPos.x - pixelDistToDetect)
                {
                   fingerDown = false;
                   player.Move(Vector3.back);
               }
               else if(Input.mousePosition.x >= startPos.x + pixelDistToDetect)

               {
                   fingerDown = false;
                   player.Move(Vector3.forward);
               
               }
               else if(Input.mousePosition.y <= startPos.y - pixelDistToDetect)
               {
                   fingerDown = false; 
                   player.Move(Vector3.down);
               }
               isMouseDown = fingerDown;
           }

            if(fingerDown && Input.GetMouseButtonUp(0))
           {
               fingerDown = false;
               isMouseDown = false;
           }
       
        }
    
    }

