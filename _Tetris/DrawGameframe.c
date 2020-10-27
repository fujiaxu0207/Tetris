#include"color.h"
#include"gotoxy.h"
#include"var.h"
#include<stdio.h>
void DrawGameframe(){
	//fflush(stdin);
	color(11);
	gotoxy(FrameX+Frame_width-7,FrameY-2);
	printf("趣味俄罗斯方块");
	
	color(2);
	gotoxy(FrameX+2*Frame_width+3,FrameY+7);
	printf("**********");
	
	
	color(3);
	gotoxy(FrameX+2*Frame_width+13,FrameY+7);//设置上边框显示的位置
	printf("下一个将要出现的方块：");
	
	color(2);
	gotoxy(FrameX+2*Frame_width+3,FrameY+13);//设置下边框显示的位置
	printf("**********");//
	
	color(14);
	gotoxy(FrameX+2*Frame_width+3,FrameY+15);
	printf("Esc:推出游戏");
	gotoxy(FrameX+2*Frame_width+3,FrameY+17);
	printf("↑键：旋转"); 
	gotoxy(FrameX+2*Frame_width+3,FrameY+19);
	printf("空格键：暂停游戏");
	
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
	
	printf("╔");
	gotoxy(FrameX+2*Frame_width-2,FrameY);
	printf("╗");
	gotoxy(FrameX,FrameY+Frame_height);
	printf("╚");
	gotoxy(FrameX+2*Frame_width-2,FrameY+Frame_height);
	printf("╝");
	a[FrameX][FrameY+Frame_height]=2;//将其标记为边框 
	a[FrameX+2*Frame_width-2][FrameY+Frame_height]=2;
	//打印上边框 
	for( i=1;i<2*Frame_width-2;i++){//因为横向占一个个位置，所以每次加1 
		gotoxy(FrameX+i,FrameY);
		printf("═");
	}
	//打印下边框
	for( i=1;i<2*Frame_width-2;i++){
		gotoxy(FrameX+i,FrameY+Frame_height);
		printf("═");
		a[FrameX+i][FrameY+Frame_height]=2;//标记边框 
	} 
	for( i=1;i<Frame_height;i++){//打印左边框 
		gotoxy(FrameX,FrameY+i);
		printf("║");
		a[FrameX][FrameY+i]=2;
	}
	for(i=1;i<Frame_height;i++){
		gotoxy(FrameX+2*Frame_width-2,FrameY+i);
		printf("║");
		a[FrameX+2*Frame_width-2][FrameY+i]=2;
	}
	
}