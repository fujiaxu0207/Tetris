#include<windows.h>//��ȡdos���棨��ȡ����̨�������λ�á������������ɫ��
HANDLE hOut;//����̨��������������ı����̨����ɫ��
void gotoxy(int x,int y){//�������ֵ���ʾλ�� 
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
} 