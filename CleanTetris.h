
/**
 * 清除俄罗斯方块的痕迹
 */
void CleanTetris(struct Tetris* tetris)
{
	for (i = 0;i < 4;i++)
	{
		b[i] = 0;         //数组b[4]的每个元素的值都为0
	}
	MakeTetris(tetris);      //制作俄罗斯方块
	for (i = tetris->x - 2;i <= tetris->x + 4; i += 2)       //■X ■■  X为中心方块
	{
		for (j = tetris->y - 2;j <= tetris->y + 1;j++)        /* ■
															  ■
															  X
															  ■	*/
		{
			if (a[i][j] == 0 && j > FrameY)
			{
				gotoxy(i, j);
				printf("  ");    //清除方块
			}
		}
	}
}
