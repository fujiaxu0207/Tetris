
/**
* 重新游戏
*/
void Replay(struct Tetris*)
{
	system("cls");                  	//清屏
	memset(a, 0, 6400 * sizeof(int));       //初始化BOX数组，否则不会正常显示方块，导致游戏直接结束
	DrwaGameframe();       	//制作游戏窗口
	Gameplay(); 			//开始游戏
}

