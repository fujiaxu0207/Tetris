#include"gotoxy.h"
#include"color.h"
#include<stdio.h>
#include<Windows.h>
#include"explation.h"
#include"regulation.h"
#include"Gameplay.h"
#include"DrawGameframe.h"
#include"close.h"

void  welcome(){
	
	int n;
	int i,j;
	color(14);
	i=9;//y为9
	for(j=15;j<=60;j++){
		gotoxy(j,i);
		printf("=");
	}
		i=20;//y为20
	for(j=15;j<=60;j++){
		gotoxy(j,i);
		printf("=");
	}
	j=15;
	for(i=10;i<=19;i++){
		gotoxy(j,i);
		printf("||");
	}
		j=59;
	for(i=10;i<=19;i++){
		gotoxy(j,i);
		printf("||");
	}
	printf("\n");
	color(12);//红色 
	gotoxy(25,12);
	
	printf("1.开始游戏");
	gotoxy(40,12);
	printf("2.按键说明");
	gotoxy(25,17);
	printf("3.游戏规则");
	gotoxy(40,17);
	printf("4.退出");
	color(3);
	gotoxy(21,22);
	printf("请选择[1 2 3 4]:[ ]\b\b");//\b光标向前移一位 
	scanf("%d",&n);
	switch(n){
		case 1:
			system("cls");
			DrawGameframe();
			Gameplay();
			break;
		case 2:
			explation(); 
			break;
		case 3:
			regulation();
			break;
		case 4:
			close();
			break;
		default:
			printf("输入错误，请重新输入!");
			getchar();
			getchar();
			system("\t\t\t\t\t\tcls");
			welcome();
	} 

}