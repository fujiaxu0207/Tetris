
/**
 * ��ӡ����˹����
 */
void PrintTetris(struct Tetris* tetris)
{
    for (i = 0;i < 4;i++)
    {
        b[i] = 1;         				//����b[4]��ÿ��Ԫ�ص�ֵ��Ϊ1
    }
    MakeTetris(tetris);      			//������Ϸ����
    for (i = tetris->x - 2; i <= tetris->x + 4; i += 2)
    {
        for (j = tetris->y - 2;j <= tetris->y + 1;j++)
        {
            if (a[i][j] == 1 && j > FrameY)
            {
                gotoxy(i, j);
                printf("��");     //��ӡ�߿��ڵķ���
            }
        }
    }
    //��ӡ�˵���Ϣ
    gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 1);
    color(4);
    printf("level : ");
    color(12);
    printf(" %d", tetris->level);
    gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 3);
    color(4);
    printf("score : ");
    color(12);
    printf(" %d", tetris->score);
    gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 5);
    color(4);
    printf("speed : ");
    color(12);
    printf(" %dms", tetris->speed);
}