/*****宏定义*****/
#define FrameX 13//游戏窗口左上角的x的坐标为13
#define FrameY 3//游戏窗口左上角的y的坐标位3
#define Frame_height 20//游戏窗口的高度
#define Frame_width 18//游戏窗口的宽度
/*****定义全局变量***/
int i,j,Temp,Temp1,Temp2;//temp,temp1,temp2是用于记住和转换方块变量的值
int a[80][80];//表示游戏屏幕的图案：2,1,0分别表示游戏边框，方块，无图案
int b[4];//代表俄罗斯方块的每个格子，每个俄罗斯方块都只有4个块 