using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class GameResult
{
    public static int started { get; set; } // 0 if game not started, 1 if started
    public static int camera { get; set; } // 0 if camera is full screen, 1 if camera is splitted

    public static int result  { get; set; } // 0 if looses, 1 if wins
    public static int NumAlterations { get; set; } // number of alterations remaining

}
