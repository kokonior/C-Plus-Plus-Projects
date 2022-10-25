using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveCube : MonoBehaviour
{
    public Transform box;
    public GameObject peluru;
    public float speed;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKey(KeyCode.W)){
            float x = box.position.x;
            float y = box.position.y;
            float z = box.position.z + speed;

            box.position = new Vector3(x, y, z);
        }else if(Input.GetKey(KeyCode.A)){
            float x = box.position.x - speed;
            float y = box.position.y;
            float z = box.position.z;

            box.position = new Vector3(x, y, z);
        }else if(Input.GetKey(KeyCode.D)){
            float x = box.position.x + speed;
            float y = box.position.y;
            float z = box.position.z;

            box.position = new Vector3(x, y, z);
        }else if(Input.GetKey(KeyCode.S)){
            float x = box.position.x;
            float y = box.position.y;
            float z = box.position.z - speed;

            box.position = new Vector3(x, y, z);
        }else if(Input.GetMouseButton(0)){
            Instantiate(peluru);
        }
    }
}
