
/**
 * �ж��Ƿ���ƶ�
 */
int ifMove(struct Tetris* tetris)
{
    if (a[tetris->x][tetris->y] != 0)//�����ķ���λ������ͼ��ʱ������ֵΪ0���������ƶ�
    {
        return 0;
    }
    else
    {
        if ( //��Ϊ���ַ����ҳ����ķ���λ���⣬����"��"�ַ���λ������ͼ��ʱ��˵�����λ���ܹ��������ַ��飬�����ƶ������λ�ã�����ֵΪ1�������ƶ�
            //�������ַ��飬�������ķ��������½ǵġ�����������ϣ��ң����ϵ�λ��Ϊ�գ������λ�þͿ��Է�һ�����ַ��飻�����һ��λ���ϲ�Ϊ�գ����Ų���һ����
            (tetris->flag == 1 && (a[tetris->x][tetris->y - 1] == 0 &&
                a[tetris->x + 2][tetris->y - 1] == 0 && a[tetris->x + 2][tetris->y] == 0)) ||
            //��Ϊֱ�߷����ҳ����ķ���λ���⣬����"��"�ַ���λ������ͼ��ʱ������ֵΪ1�������ƶ�
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
