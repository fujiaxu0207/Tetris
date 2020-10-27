

/**
 * 欢迎界面
 */
void welcom()
{
    int n;
    int i, j = 1;
    color(14);          			//黄色边框
    for (i = 9; i <= 20; i++)   	//输出上下边框===
    {
        for (j = 15; j <= 60; j++)  //输出左右边框||
        {
            gotoxy(j, i);
            if (i == 9 || i == 20) printf("=");
            else if (j == 15 || j == 59) printf("||");
        }
    }
    color(12);
    gotoxy(25, 12);
    printf("1.开始游戏");
    gotoxy(40, 12);
    printf("2.按键说明");
    gotoxy(25, 17);
    printf("3.游戏规则");
    gotoxy(40, 17);
    printf("4.退出");
    gotoxy(21, 22);
    color(3);
    printf("请选择[1 2 3 4]:[ ]\b\b");
    color(14);
    scanf_s("%d", &n);    //输入选项
    switch (n)
    {
    case 1:
        system("cls");
        DrwaGameframe();       	//制作游戏窗口
        Gameplay(); 			//开始游戏
        break;
    case 2:
        explation();      	//按键说明函数
        break;
    case 3:
        regulation();     	//游戏规则函数
        break;
    case 4:
        close();    		//关闭游戏函数
        break;
    }
}
