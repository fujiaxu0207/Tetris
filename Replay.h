
/**
* ������Ϸ
*/
void Replay(struct Tetris*)
{
	system("cls");                  	//����
	memset(a, 0, 6400 * sizeof(int));       //��ʼ��BOX���飬���򲻻�������ʾ���飬������Ϸֱ�ӽ���
	DrwaGameframe();       	//������Ϸ����
	Gameplay(); 			//��ʼ��Ϸ
}

