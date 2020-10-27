#include<Windows.h>
#include<stdio.h>
#include"Gameplay.h"
#include"var.h"
#include"DrawGameframe.h"

void Replay(struct Tetris *tetris)
{
    system("cls");//清屏
    memset(a,0,6400*sizeof(int));//初始化a数组，否则不会正常显示方块，导致游戏直接结束
    DrawGameframe();
    Gameplay();
}