#include<Windows.h>
#include<stdio.h>
#include"Gameplay.h"
#include"var.h"
#include"DrawGameframe.h"

void Replay(struct Tetris *tetris)
{
    system("cls");//����
    memset(a,0,6400*sizeof(int));//��ʼ��a���飬���򲻻�������ʾ���飬������Ϸֱ�ӽ���
    DrawGameframe();
    Gameplay();
}