#include"gotoxy.h"
#include"color.h"
#include<stdio.h>
void title(){
	color(15);//����������ɫΪ����ɫ
	gotoxy(24,3);//���������λ��
	printf("Ȥ ζ �� �� ˹ �� ��\n");
	
	color(11);
	gotoxy(18,5);
	printf("��");//����ռ����λ�ã���ֱռһ��λ�� 
	gotoxy(18,6);
	printf("����");
	gotoxy(18,7);
	printf("��"); 
	
	color(14);//��ɫ 
	gotoxy(26,6);
	printf("����");//����ռ����λ�ã���ֱռһ��λ�� 
	gotoxy(28,7);
	printf("����");
	
	color(10);//��ɫ
	gotoxy(36,6);
	printf("����");
	gotoxy(36,7);
	printf("����"); 
	 
	color(13);//��ɫ
	gotoxy(45,5);
	printf("��");
	gotoxy(45,6);
	printf("��");
	gotoxy(45,7);
	printf("��");
	gotoxy(45,8);
	printf("��");
	
	color(12);//����ɫ
	gotoxy(56,6);
	printf("��");
	gotoxy(52,7);
	printf("������") ;
} 