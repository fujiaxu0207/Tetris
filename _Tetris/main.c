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
#include<windows.h>//��ȡdos���棨��ȡ����̨�������λ�á������������ɫ��
#include<conio.h>//���ܼ��̵���������(kbhit(),getch()) 
#include<time.h>//���ڻ������� 
int main() {
	title();
	flower();
	welcome();
	return 0;
}