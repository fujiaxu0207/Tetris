#include<windows.h>//获取dos界面（获取控制台上坐标的位置、设置字体的颜色）
HANDLE hOut;//控制台句柄，可以用来改变控制台的颜色等
void gotoxy(int x,int y){//控制文字的显示位置 
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
} 