using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class TileController : MonoBehaviour
{
    public Tilemap tilemap;
    private int[][] mapGrid;
    private int pixelSize = 32;


    public void CreateMap(int[][] mapArray, int width, int length)
    {
        var wall = Resources.Load("Wall", typeof(Sprite)) as Sprite;
        var floor = Resources.Load("Floor", typeof(Sprite)) as Sprite;
        mapGrid = mapArray;
        for (var row = 0; row < width; row++)
        {
            for (var column = 0; column < length; column++)
            {
                var cell = new Vector3Int(column * pixelSize, row * -pixelSize, 0); ;
                var tile = new Tile();
                if (mapGrid[column][row] == 1)
                {
                    tile.sprite = wall;
                    tilemap.SetTile(cell, tile);
                }
                else
                {
                    tile.sprite = floor;
                    tilemap.SetTile(cell, tile);
                }
            }
        }
    }
}
