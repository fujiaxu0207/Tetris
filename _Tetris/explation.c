#include<Windows.h>
#include"gotoxy.h"
#include<stdio.h>
#include"color.h"
#include<conio.h>//接受键盘的输入和输出(kbhit(),getch()) 
#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>//获取dos界面（获取控制台上坐标的位置、设置字体的颜色）
#include<conio.h>//接受键盘的输入和输出(kbhit(),getch()) 
#include<time.h>//用于获得随机数
void explation()
{
    int i,j = 1;
    system("cls");//清屏
    color(13);    //粉色
    gotoxy(32,3);//设置显示位置
    printf("按键说明");
    color(2);
    for(i = 6;i<=16;i++)//输出上下边框===
    {
        for(j = 15;j<= 60;j++)
        {
            gotoxy(j,i);
            if( i == 6 || i==16)printf("=");
            else if(j ==15 || j== 59)printf("||");

        }
    }
    color(3);
    gotoxy(18,7);
    printf("tip1:玩家可以通过← →方向键来移动方块");
    color(10);
    gotoxy(18,9);
    printf("tip2:通过↑使方块旋转");
    color(14);
    gotoxy(18,11);
    printf("tip3:通过↓使方块加速");
    color(11);
    gotoxy(18,13);
    printf("tip4:按空格键暂停游戏，再按空格键继续");
    color(4);
    gotoxy(18,15);
    printf("tip5: 按ESC退出游戏");
    getch();//按任意键放回欢迎页面
    system("cls");//清屏
    main();//返回主函数
}