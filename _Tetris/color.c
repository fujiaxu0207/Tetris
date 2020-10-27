#include<windows.h>//获取dos界面（获取控制台上坐标的位置、设置字体的颜色）
HANDLE hOut;//控制台句柄，可以用来改变控制台的颜色等
int color(int c){//改变文字颜色 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),c);//改变文字颜色
	return 0; 
} 