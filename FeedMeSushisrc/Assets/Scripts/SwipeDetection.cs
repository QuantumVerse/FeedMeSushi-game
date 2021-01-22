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

  void Update() 
        {
           if(fingerDown == false && Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began)
           {
               startPos = Input.touches[0].position;

               if ( Mathf.Abs(startPos.x - player.transform.position.z) <3000 && Mathf.Abs(startPos.y - player.transform.position.y) < 3000) 
           {
               fingerDown = true;
           }
           }
           

          //is our finger touching the screen ?
           if (fingerDown)
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
               
           }

            if(fingerDown && Input.GetMouseButtonUp(0))
           {
               fingerDown = false;
           }
       
        }
    
    }

