#include"color.h"
#include"gotoxy.h"
#include"var.h"
#include<stdio.h>
void DrawGameframe(){
	//fflush(stdin);
	color(11);
	gotoxy(FrameX+Frame_width-7,FrameY-2);
	printf("Ȥζ����˹����");
	
	color(2);
	gotoxy(FrameX+2*Frame_width+3,FrameY+7);
	printf("**********");
	
	
	color(3);
	gotoxy(FrameX+2*Frame_width+13,FrameY+7);//�����ϱ߿���ʾ��λ��
	printf("��һ����Ҫ���ֵķ��飺");
	
	color(2);
	gotoxy(FrameX+2*Frame_width+3,FrameY+13);//�����±߿���ʾ��λ��
	printf("**********");//
	
	color(14);
	gotoxy(FrameX+2*Frame_width+3,FrameY+15);
	printf("Esc:�Ƴ���Ϸ");
	gotoxy(FrameX+2*Frame_width+3,FrameY+17);
	printf("��������ת"); 
	gotoxy(FrameX+2*Frame_width+3,FrameY+19);
	printf("�ո������ͣ��Ϸ");
	
	color(12);
	gotoxy(FrameX,FrameY);
	/*int i=FrameX;
	for(i;i<=FrameX+Frame_width*2;i++){
		printf("-");
		a[i][FrameY]=2;
	} 
	gotoxy(FrameX,FrameY+Frame_height);
	i=FrameX;
	for(i;i<=FrameX+Frame_width*2-1;i++) {
		printf("-");
		a[i][FrameY+Frame_height]=2;
	}
	gotoxy(FrameX,FrameY);
	i=FrameY;
	for(i;i<=FrameY+Frame_height;i++){
		
		printf("|");
		gotoxy(FrameX,FrameY+i);
	}*/ 
	
	printf("�X");
	gotoxy(FrameX+2*Frame_width-2,FrameY);
	printf("�[");
	gotoxy(FrameX,FrameY+Frame_height);
	printf("�^");
	gotoxy(FrameX+2*Frame_width-2,FrameY+Frame_height);
	printf("�a");
	a[FrameX][FrameY+Frame_height]=2;//������Ϊ�߿� 
	a[FrameX+2*Frame_width-2][FrameY+Frame_height]=2;
	//��ӡ�ϱ߿� 
	for( i=1;i<2*Frame_width-2;i++){//��Ϊ����ռһ����λ�ã�����ÿ�μ�1 
		gotoxy(FrameX+i,FrameY);
		printf("�T");
	}
	//��ӡ�±߿�
	for( i=1;i<2*Frame_width-2;i++){
		gotoxy(FrameX+i,FrameY+Frame_height);
		printf("�T");
		a[FrameX+i][FrameY+Frame_height]=2;//��Ǳ߿� 
	} 
	for( i=1;i<Frame_height;i++){//��ӡ��߿� 
		gotoxy(FrameX,FrameY+i);
		printf("�U");
		a[FrameX][FrameY+i]=2;
	}
	for(i=1;i<Frame_height;i++){
		gotoxy(FrameX+2*Frame_width-2,FrameY+i);
		printf("�U");
		a[FrameX+2*Frame_width-2][FrameY+i]=2;
	}
	
}