using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeMove : MonoBehaviour
{
    public float speed = 2;
    private Vector3 target = new Vector3(0.0f, 0.0f, 0.0f);
    private Vector3 startPos = new Vector3(0.0f, 0.0f, 0.0f);
    private Vector3 startTarget = new Vector3(0.0f, 0.0f, 0.0f);
    private bool reachedTarget = false;
    // Start is called before the first frame update
    void Start()
    {
        target = GameObject.Find("CubeTarget").transform.position;
        startTarget = GameObject.Find("CubeTarget").transform.position;
        startPos = this.transform.position;
}

// Update is called once per frame
void Update()
    {
        float step = speed * Time.deltaTime;
        this.transform.position = Vector3.MoveTowards(this.transform.position, target , step);
        if (Vector3.Distance(this.transform.position, target) < 0.001f && reachedTarget == false)
        {
            target = startPos;
            reachedTarget = true;
        }else if (Vector3.Distance(this.transform.position, target) < 0.001f && reachedTarget == true)
        {
            target = startTarget;
            reachedTarget = false;
        }
    }
}
