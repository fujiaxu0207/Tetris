#include<Windows.h>
#include"gotoxy.h"
#include<stdio.h>
#include"color.h"
#include<conio.h>//���ܼ��̵���������(kbhit(),getch()) 
#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>//��ȡdos���棨��ȡ����̨�������λ�á������������ɫ��
#include<conio.h>//���ܼ��̵���������(kbhit(),getch()) 
#include<time.h>//���ڻ�������
void explation()
{
    int i,j = 1;
    system("cls");//����
    color(13);    //��ɫ
    gotoxy(32,3);//������ʾλ��
    printf("����˵��");
    color(2);
    for(i = 6;i<=16;i++)//������±߿�===
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
    printf("tip1:��ҿ���ͨ���� ����������ƶ�����");
    color(10);
    gotoxy(18,9);
    printf("tip2:ͨ����ʹ������ת");
    color(14);
    gotoxy(18,11);
    printf("tip3:ͨ����ʹ�������");
    color(11);
    gotoxy(18,13);
    printf("tip4:���ո����ͣ��Ϸ���ٰ��ո������");
    color(4);
    gotoxy(18,15);
    printf("tip5: ��ESC�˳���Ϸ");
    getch();//��������Żػ�ӭҳ��
    system("cls");//����
    main();//����������
}