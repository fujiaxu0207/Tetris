#include"var.h"
#include"color.h"
#include"gotoxy.h"
#include"MakeTetris.h"
#include"s.h"
#include<stdio.h>
void PrintTetris(struct Tetris *tetris){//打印俄罗斯方块 
	//b[0]=b[1]=b[2]=b[3]=1;//1代表此处有方块
	for(i=0;i<4;i++)
	{
		b[i] = 1;
	}
	MakeTetris(tetris);
	for(i=tetris->x-2;i<=tetris->x+4;i+=2){
		for(j=tetris->y-2;j<=tetris->y+1;j++){
			if(a[i][j]==1&&j>FrameY){
				gotoxy(i,j);
				printf("■");
			}
		}
	} 
	//打印菜单信息
	color(4);
	gotoxy(FrameX+2*Frame_width+3,FrameY+1); 
	printf("level : ");
	color(12);
	printf("%d",tetris->level);
	color(4);
	gotoxy(FrameX+2*Frame_width+3,FrameY+3);
	printf("score : ");
	color(12);
	printf("%d",tetris->score);
	color(4);
	gotoxy(FrameX+2*Frame_width+3,FrameY+5);
	printf("speed : ");
	color(12);
	printf("%d",tetris->speed);
	
}