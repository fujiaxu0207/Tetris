#include"gotoxy.h"
#include"color.h"
#include<stdio.h>
void title(){
	color(15);//设置字体颜色为亮白色
	gotoxy(24,3);//设置字体的位置
	printf("趣 味 俄 罗 斯 方 块\n");
	
	color(11);
	gotoxy(18,5);
	printf("■");//横向占两个位置，竖直占一个位置 
	gotoxy(18,6);
	printf("■■");
	gotoxy(18,7);
	printf("■"); 
	
	color(14);//黄色 
	gotoxy(26,6);
	printf("■■");//横向占两个位置，竖直占一个位置 
	gotoxy(28,7);
	printf("■■");
	
	color(10);//绿色
	gotoxy(36,6);
	printf("■■");
	gotoxy(36,7);
	printf("■■"); 
	 
	color(13);//粉色
	gotoxy(45,5);
	printf("■");
	gotoxy(45,6);
	printf("■");
	gotoxy(45,7);
	printf("■");
	gotoxy(45,8);
	printf("■");
	
	color(12);//亮红色
	gotoxy(56,6);
	printf("■");
	gotoxy(52,7);
	printf("■■■") ;
} 