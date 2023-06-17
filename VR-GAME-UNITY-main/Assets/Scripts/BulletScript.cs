using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletScript : MonoBehaviour
{
    [SerializeField] private GameObject particles; //the particles object
    [SerializeField] private GameObject destroyPositive;
    [SerializeField] private GameObject destroyNegative;


    void OnCollisionEnter(Collision collision)
    {
        GameObject impactedObject = collision.gameObject;
        if (impactedObject.tag == "Alterations" || impactedObject.tag == "Objects")
        {
            Destroy(impactedObject); //destroy the impacted object
            //create the particles in the objects position
            Instantiate(particles, impactedObject.transform.position, impactedObject.transform.rotation);
            if (impactedObject.tag == "Alterations")
            {
                GameObject destroySound = Instantiate(destroyPositive);
                Destroy(destroySound, 1);


            }
            else
            {
                GameObject destroySound = Instantiate(destroyNegative);
                Destroy(destroySound, 1);
            }
        }
        //don't be destroyed when colliding with own gun, it collides with it when fired
        if (impactedObject.gameObject.name != "ScifiHandGun")
        {
            Destroy(gameObject); //destroy the own bullet
        }
    }
}
