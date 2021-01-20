using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameOver : MonoBehaviour
{
public GameObject ReplayButton;
public GameObject MainMenuButton;

    public void OpenMainMenu ()
{
  SceneManager.LoadScene(0);
}
   
   public void ReplayGame ()
   {
       SceneManager.LoadScene(1);
   }
}
