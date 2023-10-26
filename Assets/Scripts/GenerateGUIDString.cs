using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenerateGUIDString : MonoBehaviour
{
    public string GenerateCode()
    {
        return System.Guid.NewGuid().ToString();
    }
}
