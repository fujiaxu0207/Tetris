
/**
 * ������Ϸ����
 */
void DrwaGameframe()
{
    gotoxy(FrameX + Frame_width - 7, FrameY - 2);   	//��ӡ��Ϸ����
    color(11);
    printf("Ȥζ����˹����");
    gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 7);  	//��ӡѡ��˵�
    color(2);
    printf("**********");
    gotoxy(FrameX + 2 * Frame_width + 13, FrameY + 7);  	//��ӡѡ��˵�
    color(3);
    printf("��һ���ַ��飺");
    gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 13);
    color(2);
    printf("**********");
    gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 17);
    color(14);
    printf("��������ת");
    gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 19);
    printf("�ո���ͣ��Ϸ");
    gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 15);
    printf("Esc ���˳���Ϸ");
    gotoxy(FrameX, FrameY);
    color(12);
    printf("�X");							//��ӡ���
    gotoxy(FrameX + 2 * Frame_width - 2, FrameY);
    printf("�[");
    gotoxy(FrameX, FrameY + Frame_height);
    printf("�^");
    gotoxy(FrameX + 2 * Frame_width - 2, FrameY + Frame_height);
    printf("�a");
    a[FrameX][FrameY + Frame_height] = 2;       //��ס�ô�����ͼ��
    a[FrameX + 2 * Frame_width - 2][FrameY + Frame_height] = 2;
    for (i = 2;i < 2 * Frame_width - 2;i += 2)
    {
        gotoxy(FrameX + i, FrameY);
        printf("�T");         //��ӡ�Ϻ��
    }
    for (i = 2;i < 2 * Frame_width - 2;i += 2)
    {
        gotoxy(FrameX + i, FrameY + Frame_height);
        printf("�T");         //��ӡ�º��
        a[FrameX + i][FrameY + Frame_height] = 2;    //��ס�º����ͼ��
    }
    for (i = 1;i < Frame_height;i++)
    {
        gotoxy(FrameX, FrameY + i);
        printf("�U");         //��ӡ������
        a[FrameX][FrameY + i] = 2;       //��ס��������ͼ��
    }
    for (i = 1;i < Frame_height;i++)
    {
        gotoxy(FrameX + 2 * Frame_width - 2, FrameY + i);
        printf("�U");         //��ӡ������
        a[FrameX + 2 * Frame_width - 2][FrameY + i] = 2;   //��ס��������ͼ��
    }
}