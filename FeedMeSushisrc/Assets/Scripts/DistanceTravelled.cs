using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DistanceTravelled : MonoBehaviour
{
    float Distance = 0;
    public static float currentTime = 0;
    Vector3 lastPosition;
     
     [SerializeField]
     private Text DistanceText;

    // Start is called before the first frame update
    void Start()
    {
        lastPosition = transform.position;
        currentTime = 0;
    }

    // Update is called once per frame
    void Update()
    {
        /*Distance += Vector3.Distance(transform.position, lastPosition);
        lastPosition = transform.position;*/

        currentTime += Time.deltaTime;

        DistanceText.text = currentTime.ToString("F0") ;
    }
}
