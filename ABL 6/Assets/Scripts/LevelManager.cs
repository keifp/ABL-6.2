using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Canvas canvas = GetComponent<Canvas>();
        if (canvas != null)
        {
            canvas.worldCamera = Camera.main;
        }   
        
    }

    public void SwitchScenes(int sceneindex)
    {
        SceneManager.LoadScene(sceneindex);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
