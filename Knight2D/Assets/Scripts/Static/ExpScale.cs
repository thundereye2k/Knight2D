using System.Collections.Generic;
using UnityEngine;

// https://www.wolframalpha.com/input/?i=x%5E1.5+*+1000

public class ExpScale
{
    public static float findLevel(float exp)
    {
        float level = Mathf.Pow(exp, 2f / 3f) / 100f;
        return Mathf.Floor(level);
    }

    public static float findPercent(float exp)
    {
        var level = findLevel(exp);
        var nextLevel = level + 1f;

        var prevExp = Mathf.Pow(level, 1.5f) * 1000f;
        var nextExp = Mathf.Pow(nextLevel, 1.5f) * 1000f;

        var have = exp - prevExp;
        var need = nextExp - prevExp;
        return have / need;
    }

    public static float getTotal(List<float> list)
    {
        float total = 0f;
        foreach (float f in list)
        {
            total += f;
        }
        return total;
    }

    public static float GetAverage(List<float> list)
    {
        float total = 0f;
        foreach (float f in list)
        {
            total += f;
        }
        return total / list.Count;
    }
}
