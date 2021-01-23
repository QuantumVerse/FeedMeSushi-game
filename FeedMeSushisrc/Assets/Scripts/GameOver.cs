using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class GameOver : MonoBehaviour
{
public GameObject ReplayButton;
public GameObject MainMenuButton;
public TextMeshProUGUI ScoreTextValue;
public TextMeshProUGUI HighScoreTextValue;

void Start()
{
  SetScores();
}

void SetScores()
{
  int lastScore = PlayerPrefs.GetInt("last_score");
  ScoreTextValue.text = lastScore.ToString();

  // Set High Score
  if (PlayerPrefs.HasKey("best_score"))
  {
    if (PlayerPrefs.GetInt("best_score") < lastScore)
    {
      PlayerPrefs.SetInt("best_score", lastScore);
    }
  }
  else
  {
    PlayerPrefs.SetInt("best_score", lastScore);
  }

  HighScoreTextValue.text = PlayerPrefs.GetInt("best_score").ToString();
}

public void OpenMainMenu ()
{
  SceneManager.LoadScene(0);
}
   
public void ReplayGame ()
{
    SceneManager.LoadScene(1);
}
}
