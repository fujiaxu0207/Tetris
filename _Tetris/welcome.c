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
	i=9;//yΪ9
	for(j=15;j<=60;j++){
		gotoxy(j,i);
		printf("=");
	}
		i=20;//yΪ20
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
	color(12);//��ɫ 
	gotoxy(25,12);
	
	printf("1.��ʼ��Ϸ");
	gotoxy(40,12);
	printf("2.����˵��");
	gotoxy(25,17);
	printf("3.��Ϸ����");
	gotoxy(40,17);
	printf("4.�˳�");
	color(3);
	gotoxy(21,22);
	printf("��ѡ��[1 2 3 4]:[ ]\b\b");//\b�����ǰ��һλ 
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
			printf("�����������������!");
			getchar();
			getchar();
			system("\t\t\t\t\t\tcls");
			welcome();
	} 

}