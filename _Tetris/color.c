#include<windows.h>//��ȡdos���棨��ȡ����̨�������λ�á������������ɫ��
HANDLE hOut;//����̨��������������ı����̨����ɫ��
int color(int c){//�ı�������ɫ 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),c);//�ı�������ɫ
	return 0; 
} 