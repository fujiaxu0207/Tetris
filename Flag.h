
/**
 * 随机产生俄罗斯方块类型的序号
 */
void Flag(struct Tetris* tetris)
{
	tetris->number++;     				//记住产生方块的个数
	srand(time(NULL));  		//初始化随机数
	if (tetris->number == 1)
	{
		tetris->flag = rand() % 19 + 1;  	//记住第一个方块的序号
	}
	tetris->next = rand() % 19 + 1;   		//记住下一个方块的序号
}
