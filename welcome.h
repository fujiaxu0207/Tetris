

/**
 * ��ӭ����
 */
void welcom()
{
    int n;
    int i, j = 1;
    color(14);          			//��ɫ�߿�
    for (i = 9; i <= 20; i++)   	//������±߿�===
    {
        for (j = 15; j <= 60; j++)  //������ұ߿�||
        {
            gotoxy(j, i);
            if (i == 9 || i == 20) printf("=");
            else if (j == 15 || j == 59) printf("||");
        }
    }
    color(12);
    gotoxy(25, 12);
    printf("1.��ʼ��Ϸ");
    gotoxy(40, 12);
    printf("2.����˵��");
    gotoxy(25, 17);
    printf("3.��Ϸ����");
    gotoxy(40, 17);
    printf("4.�˳�");
    gotoxy(21, 22);
    color(3);
    printf("��ѡ��[1 2 3 4]:[ ]\b\b");
    color(14);
    scanf_s("%d", &n);    //����ѡ��
    switch (n)
    {
    case 1:
        system("cls");
        DrwaGameframe();       	//������Ϸ����
        Gameplay(); 			//��ʼ��Ϸ
        break;
    case 2:
        explation();      	//����˵������
        break;
    case 3:
        regulation();     	//��Ϸ������
        break;
    case 4:
        close();    		//�ر���Ϸ����
        break;
    }
}
