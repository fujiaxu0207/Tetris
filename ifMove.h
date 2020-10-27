
/**
 * 判断是否可移动
 */
int ifMove(struct Tetris* tetris)
{
    if (a[tetris->x][tetris->y] != 0)//当中心方块位置上有图案时，返回值为0，即不可移动
    {
        return 0;
    }
    else
    {
        if ( //当为田字方块且除中心方块位置外，其他"■"字方块位置上无图案时，说明这个位置能够放下田字方块，可以移动到这个位置，返回值为1，即可移动
            //比如田字方块，它的中心方块是左下角的■，如果它的上，右，右上的位置为空，则这个位置就可以放一个田字方块；如果有一个位置上不为空，都放不下一个田
            (tetris->flag == 1 && (a[tetris->x][tetris->y - 1] == 0 &&
                a[tetris->x + 2][tetris->y - 1] == 0 && a[tetris->x + 2][tetris->y] == 0)) ||
            //或为直线方块且除中心方块位置外，其他"■"字方块位置上无图案时，返回值为1，即可移动
            (tetris->flag == 2 && (a[tetris->x - 2][tetris->y] == 0 &&
                a[tetris->x + 2][tetris->y] == 0 && a[tetris->x + 4][tetris->y] == 0)) ||
            (tetris->flag == 3 && (a[tetris->x][tetris->y - 1] == 0 &&
                a[tetris->x][tetris->y - 2] == 0 && a[tetris->x][tetris->y + 1] == 0)) ||
            (tetris->flag == 4 && (a[tetris->x - 2][tetris->y] == 0 &&
                a[tetris->x + 2][tetris->y] == 0 && a[tetris->x][tetris->y + 1] == 0)) ||
            (tetris->flag == 5 && (a[tetris->x][tetris->y - 1] == 0 &&
                a[tetris->x][tetris->y + 1] == 0 && a[tetris->x - 2][tetris->y] == 0)) ||
            (tetris->flag == 6 && (a[tetris->x][tetris->y - 1] == 0 &&
                a[tetris->x - 2][tetris->y] == 0 && a[tetris->x + 2][tetris->y] == 0)) ||
            (tetris->flag == 7 && (a[tetris->x][tetris->y - 1] == 0 &&
                a[tetris->x][tetris->y + 1] == 0 && a[tetris->x + 2][tetris->y] == 0)) ||
            (tetris->flag == 8 && (a[tetris->x][tetris->y + 1] == 0 &&
                a[tetris->x - 2][tetris->y] == 0 && a[tetris->x + 2][tetris->y + 1] == 0)) ||
            (tetris->flag == 9 && (a[tetris->x][tetris->y - 1] == 0 &&
                a[tetris->x - 2][tetris->y] == 0 && a[tetris->x - 2][tetris->y + 1] == 0)) ||
            (tetris->flag == 10 && (a[tetris->x][tetris->y - 1] == 0 &&
                a[tetris->x - 2][tetris->y - 1] == 0 && a[tetris->x + 2][tetris->y] == 0)) ||
            (tetris->flag == 11 && (a[tetris->x][tetris->y + 1] == 0 &&
                a[tetris->x - 2][tetris->y - 1] == 0 && a[tetris->x - 2][tetris->y] == 0)) ||
            (tetris->flag == 12 && (a[tetris->x][tetris->y - 1] == 0 &&
                a[tetris->x][tetris->y + 1] == 0 && a[tetris->x - 2][tetris->y - 1] == 0)) ||
            (tetris->flag == 15 && (a[tetris->x - 2][tetris->y] == 0 &&
                a[tetris->x - 2][tetris->y + 1] == 0 && a[tetris->x + 2][tetris->y] == 0)) ||
            (tetris->flag == 14 && (a[tetris->x][tetris->y - 1] == 0 &&
                a[tetris->x][tetris->y + 1] == 0 && a[tetris->x + 2][tetris->y + 1] == 0)) ||
            (tetris->flag == 13 && (a[tetris->x - 2][tetris->y] == 0 &&
                a[tetris->x + 2][tetris->y - 1] == 0 && a[tetris->x + 2][tetris->y] == 0)) ||
            (tetris->flag == 16 && (a[tetris->x][tetris->y + 1] == 0 &&
                a[tetris->x][tetris->y - 1] == 0 && a[tetris->x + 2][tetris->y - 1] == 0)) ||
            (tetris->flag == 19 && (a[tetris->x - 2][tetris->y] == 0 &&
                a[tetris->x - 2][tetris->y - 1] == 0 && a[tetris->x + 2][tetris->y] == 0)) ||
            (tetris->flag == 18 && (a[tetris->x][tetris->y - 1] == 0 &&
                a[tetris->x][tetris->y + 1] == 0 && a[tetris->x - 2][tetris->y + 1] == 0)) ||
            (tetris->flag == 17 && (a[tetris->x - 2][tetris->y] == 0 &&
                a[tetris->x + 2][tetris->y + 1] == 0 && a[tetris->x + 2][tetris->y] == 0)))
        {
            return 1;
        }
    }
    return 0;
}
