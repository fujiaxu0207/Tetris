
/**
* ��Ϸ����
*/
void regulation()
{
	int i, j = 1;
	system("cls");
	color(13);
	gotoxy(34, 3);
	printf("��Ϸ����");
	color(2);
	for (i = 6; i <= 18; i++)   //������±߿�===
	{
		for (j = 12; j <= 70; j++)  //������ұ߿�||
		{
			gotoxy(j, i);
			if (i == 6 || i == 18) printf("=");
			else if (j == 12 || j == 69) printf("||");
		}
	}
	color(12);
	gotoxy(16, 7);
	printf("tip1: ��ͬ��״��С�������Ļ�Ϸ����£����ͨ������");
	gotoxy(22, 9);
	printf("�����λ�úͷ���ʹ��������Ļ�ײ�ƴ��������");
	gotoxy(22, 11);
	printf("һ������");
	color(14);
	gotoxy(16, 13);
	printf("tip2: ÿ����һ�У���������100");
	color(11);
	gotoxy(16, 15);
	printf("tip3: ÿ�ۼ�1000�֣�������һ���ȼ�");
	color(10);
	gotoxy(16, 17);
	printf("tip4: �����ȼ���ʹ���������ٶȼӿ죬��Ϸ�ѶȼӴ�");
	_getch();                //�����������������
	system("cls");
	welcom();
}
