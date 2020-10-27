
/**
 * 制作游戏窗口
 */
void DrwaGameframe()
{
    gotoxy(FrameX + Frame_width - 7, FrameY - 2);   	//打印游戏名称
    color(11);
    printf("趣味俄罗斯方块");
    gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 7);  	//打印选择菜单
    color(2);
    printf("**********");
    gotoxy(FrameX + 2 * Frame_width + 13, FrameY + 7);  	//打印选择菜单
    color(3);
    printf("下一出现方块：");
    gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 13);
    color(2);
    printf("**********");
    gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 17);
    color(14);
    printf("↑键：旋转");
    gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 19);
    printf("空格：暂停游戏");
    gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 15);
    printf("Esc ：退出游戏");
    gotoxy(FrameX, FrameY);
    color(12);
    printf("╔");							//打印框角
    gotoxy(FrameX + 2 * Frame_width - 2, FrameY);
    printf("╗");
    gotoxy(FrameX, FrameY + Frame_height);
    printf("╚");
    gotoxy(FrameX + 2 * Frame_width - 2, FrameY + Frame_height);
    printf("╝");
    a[FrameX][FrameY + Frame_height] = 2;       //记住该处已有图案
    a[FrameX + 2 * Frame_width - 2][FrameY + Frame_height] = 2;
    for (i = 2;i < 2 * Frame_width - 2;i += 2)
    {
        gotoxy(FrameX + i, FrameY);
        printf("═");         //打印上横框
    }
    for (i = 2;i < 2 * Frame_width - 2;i += 2)
    {
        gotoxy(FrameX + i, FrameY + Frame_height);
        printf("═");         //打印下横框
        a[FrameX + i][FrameY + Frame_height] = 2;    //记住下横框有图案
    }
    for (i = 1;i < Frame_height;i++)
    {
        gotoxy(FrameX, FrameY + i);
        printf("║");         //打印左竖框
        a[FrameX][FrameY + i] = 2;       //记住左竖框有图案
    }
    for (i = 1;i < Frame_height;i++)
    {
        gotoxy(FrameX + 2 * Frame_width - 2, FrameY + i);
        printf("║");         //打印右竖框
        a[FrameX + 2 * Frame_width - 2][FrameY + i] = 2;   //记住右竖框有图案
    }
}