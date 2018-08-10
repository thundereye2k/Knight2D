using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraOrbit : MonoBehaviour
{
    public bool enableRotation = true;
    public Transform target;
    public float rotationSpeedMouse;
    //public float zoomSpeedMouse = 10;
    //private float _zoomAmountMouse = 0;
    //private float _maxToClampMouse = 10;
    //public float rotationSpeedTouch = 5;
    //public float zoomSpeedTouch = 0.5f;

    void LateUpdate()
    {

#if UNITY_EDITOR || UNITY_STANDALONE || UNITY_WEBPLAYER
        if (enableRotation && (Input.GetMouseButton(1)))
        {
            var inputMouseX = Input.GetAxis("Mouse X");
            if (inputMouseX != 0f)
            {
                //transform.RotateAround(target.position, Vector3.forward, inputMouseX * rotationSpeedMouse);
                transform.Rotate(Vector3.forward, inputMouseX * rotationSpeedMouse);
            }
        }
        else
        {
            transform.Rotate(Vector3.forward, 0f);
        }

#endif

#if UNITY_ANDROID || UNITY_IOS

                if (enableRotation && (Input.touchCount==1))
                {

                    float touchDelta = Mathf.Clamp(Input.GetTouch(0).deltaPosition.x, -1.0f, 1.0f);
                    Quaternion camAngle = Quaternion.AngleAxis(touchDelta * rotationSpeedTouch, Vector3.up);
                
                    Vector3 newPos = target.position + cameraOffset;
                    cameraOffset = camAngle * cameraOffset;

                    transform.position = Vector3.Slerp(transform.position, newPos, smoothness);
                    transform.LookAt(target);
                }

#endif
        /*
                else
                {
                    // Translating camera on PC with mouse wheel.
        #if UNITY_EDITOR || UNITY_STANDALONE || UNITY_WEBPLAYER

                    _zoomAmountMouse += Input.GetAxis("Mouse ScrollWheel");
                    _zoomAmountMouse = Mathf.Clamp(_zoomAmountMouse, -_maxToClampMouse, _maxToClampMouse);

                    var translate = Mathf.Min(Mathf.Abs(Input.GetAxis("Mouse ScrollWheel")), _maxToClampMouse - Mathf.Abs(_zoomAmountMouse));
                    transform.Translate(0, 0, translate * zoomSpeedMouse * Mathf.Sign(Input.GetAxis("Mouse ScrollWheel")));

                    cameraOffset = transform.position - target.position;

        #endif

                    // Changing FOV on mobiles with multitouch.
        #if UNITY_ANDROID || UNITY_IOS

                    if (Input.touchCount == 2)
                    {

                        Touch touchZero = Input.GetTouch(0);
                        Touch touchOne = Input.GetTouch(1);

                        // Find the position in the previous frame of each touch.
                        Vector2 touchZeroPrevPos = touchZero.position - touchZero.deltaPosition;
                        Vector2 touchOnePrevPos = touchOne.position - touchOne.deltaPosition;

                        // Find the magnitude of the vector (the distance) between the touches in each frame.
                        float prevTouchDeltaMag = (touchZeroPrevPos - touchOnePrevPos).magnitude;
                        float touchDeltaMag = (touchZero.position - touchOne.position).magnitude;

                        // Find the difference in the distances between each frame.
                        float deltaMagnitudeDiff = prevTouchDeltaMag - touchDeltaMag;

                        this.GetComponent<Camera>().fieldOfView += deltaMagnitudeDiff * zoomSpeedTouch;

                        // Clamp the field of view to make sure it's between 0 and 180.
                        this.GetComponent<Camera>().fieldOfView = Mathf.Clamp(this.GetComponent<Camera>().fieldOfView, 0.1f, 179.9f);

                    }

        #endif


                }

        */
    }
}
