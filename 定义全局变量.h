
/*******定  义  全  局  变  量 *******/
int i, j, Temp, Temp1, Temp2; 	//temp,temp1,temp2用于记住和转换方块变量的值
int a[80][80] = { 0 };   		//标记游戏屏幕的图案：2,1,0分别表示该位置为游戏边框、方块、无图案;初始化为无图案
int b[4];     				//标记4个"口"方块：1表示有方块，0表示无方块
struct Tetris		//声明俄罗斯方块的结构体
{
    int x;     		//中心方块的x轴坐标
    int y;     		//中心方块的y轴坐标
    int flag;    	//标记方块类型的序号
    int next;    	//下一个俄罗斯方块类型的序号
    int speed;    	//俄罗斯方块移动的速度
    int number;    	//产生俄罗斯方块的个数
    int score;    	//游戏的分数
    int level;    	//游戏的等级
};
HANDLE hOut;		//控制台句柄
