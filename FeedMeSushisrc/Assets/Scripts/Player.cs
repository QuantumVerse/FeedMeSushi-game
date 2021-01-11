using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
   public float moveSpeed;
   private Vector3 targetPos;

     void Start() 
     {
         targetPos = transform.position;
     }

     public void Move (Vector3 moveDirection)
     {
         targetPos += moveDirection * 25;
     }

     private void Update() 
     {
         targetPos += Vector3.left;
         transform.position = Vector3.MoveTowards(transform.position, targetPos, moveSpeed * Time.deltaTime);


     }

}
