
/**
* 按键说明
*/
void explation()
{
	int i, j = 1;
	system("cls");
	color(13);
	gotoxy(32, 3);
	printf("按键说明");
	color(2);
	for (i = 6; i <= 16; i++)   //输出上下边框===
	{
		for (j = 15; j <= 60; j++)  //输出左右边框||
		{
			gotoxy(j, i);
			if (i == 6 || i == 16) printf("=");
			else if (j == 15 || j == 59) printf("||");
		}
	}
	color(3);
	gotoxy(18, 7);
	printf("tip1: 玩家可以通过 ← →方向键来移动方块");
	color(10);
	gotoxy(18, 9);
	printf("tip2: 通过 ↑使方块旋转");
	color(14);
	gotoxy(18, 11);
	printf("tip3: 通过 ↓加速方块下落");
	color(11);
	gotoxy(18, 13);
	printf("tip4: 按空格键暂停游戏，再按空格键继续");
	color(4);
	gotoxy(18, 15);
	printf("tip5: 按ESC退出游戏");
	_getch();                //按任意键返回主界面
	system("cls");
	main();
}
