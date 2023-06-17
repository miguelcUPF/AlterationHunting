using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GunScript1 : MonoBehaviour
{
    [SerializeField] private TutorialManager tutorialManager; //to get the tutorial manager

    [SerializeField] private float speed = 20; //to set the bullet's speed
    [SerializeField] private int bulletNumber; //number of bullets
    [SerializeField] private GameObject bullet; //the bullet object
    [SerializeField] private Transform barrel; //the barrel of the gun

    [SerializeField] private AudioSource audioSource;
    [SerializeField] private AudioClip audioClip;

    [SerializeField] private TMP_Text counter;


    void Update()
    {
        bulletNumber = tutorialManager.getNumAlterations();//set the amount of bullets
        counter.text = bulletNumber.ToString();
    }

    public void Fire()
    {
        if (bulletNumber > 0) //only able to fire if there are alterations
        {
            GameObject spawnedBullet = Instantiate(bullet, barrel.position, barrel.rotation); //new instance of a bullet, to be created in the barrel position
            spawnedBullet.GetComponent<Rigidbody>().velocity = speed * barrel.forward; //in the direction of the barrel
            if (audioClip != null && audioSource != null)
            {
                audioSource.PlayOneShot(audioClip);
            }
            Destroy(spawnedBullet, 2); //destroy the bullet after 2 sec
        }
    }
}
