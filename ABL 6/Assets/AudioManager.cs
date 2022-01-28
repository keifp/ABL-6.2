using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    private AudioSource source;

    public AudioClip transitionClip;
    // Start is called before the first frame update
    void Start()
    {
        source = GetComponent<AudioSource>();
    }

    public void PlayTransition()
    {
        source.PlayOneShot(transitionClip);
    }
}
