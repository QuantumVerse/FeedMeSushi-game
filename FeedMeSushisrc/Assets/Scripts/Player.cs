using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Player : MonoBehaviour
{
   public GameObject player;
   public float moveSpeed;
   private Vector3 targetPos;
   private int FramesForGameOver = (int) (0.5 * 30); // Assuming 0.5 sec and 30 FPS
   private Vector3 LastPosition;

   public ParticleSystem BlastParticleSystem;
  

     void Start() 
     {
        targetPos = transform.position;
        LastPosition = targetPos;
        Hide(false);
     }

     public void Move (Vector3 moveDirection)
     {
         targetPos += 10*moveDirection;
     }

     private void Update() 
     {
        targetPos += Vector3.left;
        transform.position = Vector3.MoveTowards(transform.position, targetPos, moveSpeed * Time.deltaTime);
        
        if (!PauseMenu.GameIsPaused) 
        {
            CheckIfGameOver();
        }

     }

    private void CheckIfGameOver()
    {
         if(Time.frameCount%FramesForGameOver == 0)
         {
             if(Mathf.Abs(transform.position.x - LastPosition.x) < 1)
             {
                // Player is stuck
                StartCoroutine(GameOverByCollision());
             }

             LastPosition = transform.position;
            
         }
    }

    void Hide(bool hide)
    {
        foreach (Renderer r in player.GetComponentsInChildren<Renderer>())
        {
            r.enabled = !hide;
        }
    }

    IEnumerator GameOverByCollision()
    {
        Hide(true);
        BlastParticleSystem.transform.position = transform.position;
        // BlastParticleSystem.Emit(1);
        BlastParticleSystem.Play();
        yield return new WaitForSeconds(1);
        StopGame();
    }

    public void StopGame()
    {
        // Call this function when collision or player is stuck
        PlayerPrefs.SetInt("last_score", (int) DistanceTravelled.currentTime);
        SceneManager.LoadScene(2); // Open GameOver Screen
        BlastParticleSystem.Stop();
    }
    
}
