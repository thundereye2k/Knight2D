using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class TileController : MonoBehaviour
{
    private static float x = 16f, y = 16f, z = 0f, size = 32f;

    public static IEnumerator CreateMap(int[][] grid, int width, int length)
    {
        var map = GameObject.FindGameObjectWithTag("Map");
        var wall = Resources.Load<GameObject>("Wall");
        for (var row = 0; row < width; row++)
        {
            for (var column = 0; column < length; column++)
            {
                if (grid[column][row] == 1)
                {
                    var position = new Vector3((size * row) + x, (size * column) + y, z);
                    var rotation = new Quaternion(0, 0, 0, 0);
                    Instantiate(wall, position, rotation, map.transform);
                }
            }
            yield return null;
        }
    }
}
