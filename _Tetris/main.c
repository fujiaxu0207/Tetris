#include"CLeanTetris.h"
#include"close.h"
#include"color.h"
#include"Del_Fullline.h"
#include"DrawGameframe.h"
#include"explation.h"
#include"Flag.h"
#include"flower.h"
#include"Gameplay.h"
#include"gotoxy.h"
#include"ifMove.h"
#include"MakeTetris.h"
#include"PrintTetris.h"
#include"regulation.h"
#include"Replay.h"
#include"title.h"
#include"welcome.h"
#include"var.h"
#include"s.h"
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>//获取dos界面（获取控制台上坐标的位置、设置字体的颜色）
#include<conio.h>//接受键盘的输入和输出(kbhit(),getch()) 
#include<time.h>//用于获得随机数 
int main() {
	title();
	flower();
	welcome();
	return 0;
}