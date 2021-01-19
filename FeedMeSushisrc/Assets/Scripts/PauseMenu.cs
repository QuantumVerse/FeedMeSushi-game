using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu: MonoBehaviour
{
  public GameObject PausePanel;
  public GameObject PauseButton;

  
 public static bool GameIsPaused = false;

 void Start() {
  GameIsPaused = false;
  
}

 void Update() {
  if (GameIsPaused)
  {
    Pause();
  }
  else
  {
      Resume();
  }
}


public void Resume ()
{
 PausePanel.SetActive(false);
 Time.timeScale = 1f;
 GameIsPaused = false;
}

public void Pause ()
{
  PausePanel.SetActive(true);
  Time.timeScale = 0f;
  GameIsPaused = true;
}

public void OpenMainMenu ()
{
  SceneManager.LoadScene(0);
}




}


