
/**
* 游戏规则
*/
void regulation()
{
	int i, j = 1;
	system("cls");
	color(13);
	gotoxy(34, 3);
	printf("游戏规则");
	color(2);
	for (i = 6; i <= 18; i++)   //输出上下边框===
	{
		for (j = 12; j <= 70; j++)  //输出左右边框||
		{
			gotoxy(j, i);
			if (i == 6 || i == 18) printf("=");
			else if (j == 12 || j == 69) printf("||");
		}
	}
	color(12);
	gotoxy(16, 7);
	printf("tip1: 不同形状的小方块从屏幕上方落下，玩家通过调整");
	gotoxy(22, 9);
	printf("方块的位置和方向，使他们在屏幕底部拼出完整的");
	gotoxy(22, 11);
	printf("一条或几条");
	color(14);
	gotoxy(16, 13);
	printf("tip2: 每消除一行，积分增加100");
	color(11);
	gotoxy(16, 15);
	printf("tip3: 每累计1000分，会提升一个等级");
	color(10);
	gotoxy(16, 17);
	printf("tip4: 提升等级会使方块下落速度加快，游戏难度加大");
	_getch();                //按任意键返回主界面
	system("cls");
	welcom();
}
