#include"s.h"
#include"var.h"
#include"Flag.h"
#include"CLeanTetris.h"
#include"PrintTetris.h"
#include"ifMove.h"
#include"color.h"
#include"main.h"
#include"Del_Fullline.h"
#include"Replay.h"
#include"gotoxy.h"
#include <stdio.h>
#include<conio.h>//���ܼ��̵���������(kbhit(),getch()) 
#include<Windows.h>

void Gameplay()
{
		int n;
		struct Tetris t, * tetris = &t;       					//����ṹ���ָ�벢ָ��ṹ�����
		char ch;         									//������ռ�������ı���
		tetris->number = 0;      								//��ʼ������˹������Ϊ0��
		tetris->speed = 300;      							//��ʼ�ƶ��ٶ�Ϊ300ms
		tetris->score = 0;      								//��ʼ��Ϸ�ķ���Ϊ0��
		tetris->level = 1;      								//��ʼ��ϷΪ��1��
		while (1)											//ѭ���������飬ֱ����Ϸ����
		{
			Flag(tetris);     								//�õ���������˹�������͵����
			Temp = tetris->flag;     							//��ס��ǰ����˹�������
			tetris->x = FrameX + 2 * Frame_width + 6;				//���Ԥ�����淽���x����
			tetris->y = FrameY + 10;                            //���Ԥ�����淽���y����
			tetris->flag = tetris->next;                    //�����һ������˹��������
			PrintTetris(tetris);                           //���ô�ӡ����˹���鷽��
			tetris->x = FrameX + Frame_width;  					//�����Ϸ�������ķ���x����
			tetris->y = FrameY - 1;     						//�����Ϸ�������ķ���y����
			tetris->flag = Temp;     							//ȡ����ǰ�Ķ���˹�������
			while (1)  										//���Ʒ��鷽��ֱ�����鲻������
			{
			label:PrintTetris(tetris);					//��ӡ����˹����
				Sleep(tetris->speed);   					//�ӻ�ʱ��
				CleanTetris(tetris);  						//����ۼ�
				Temp1 = tetris->x;    						//��ס���ķ���������ֵ
				Temp2 = tetris->flag;    						//��ס��ǰ����˹�������
				if (_kbhit())       				  	 		//�ж��Ƿ��м������룬������ch������
				{
					ch = _getch();
					if (ch == 75)     							//�� ���������󶯣����ĺ������2
					{
						tetris->x -= 2;
					}
					if (ch == 77)     							//�� ���������Ҷ������ĺ������2
					{
						tetris->x += 2;
					}
					if (ch == 80)     							//�� �������������
					{
						if (ifMove(tetris) != 0)
						{
							tetris->y += 2;
						}
						if (ifMove(tetris) == 0)
						{
							tetris->y = FrameY + Frame_height - 2;
						}
					}
					if (ch == 72)     						//�� ���������,����ǰ����˳ʱ��ת90��
					{
						if (tetris->flag >= 2 && tetris->flag <= 3)
						{
							tetris->flag++;
							tetris->flag %= 2;
							tetris->flag += 2;
						}
						if (tetris->flag >= 4 && tetris->flag <= 7)
						{
							tetris->flag++;
							tetris->flag %= 4;
							tetris->flag += 4;
						}
						if (tetris->flag >= 8 && tetris->flag <= 11)
						{
							tetris->flag++;
							tetris->flag %= 4;
							tetris->flag += 8;
						}
						if (tetris->flag >= 12 && tetris->flag <= 15)
						{
							tetris->flag++;
							tetris->flag %= 4;
							tetris->flag += 12;
						}
						if (tetris->flag >= 16 && tetris->flag <= 19)
						{
							tetris->flag++;
							tetris->flag %= 4;
							tetris->flag += 16;
						}
					}
					if (ch == 32)     					//���ո������ͣ
					{
						PrintTetris(tetris);
						while (1)
						{
							if (_kbhit())   			//�ٰ��ո����������Ϸ
							{
								ch = _getch();
								if (ch == 32)
								{
									goto label;
								}
							}
						}
					}
					if (ch == 27)
					{
						system("cls");
						memset(a, 0, 6400 * sizeof(int));       //��ʼ��a����
						//welcome();
						main();
					}
					if (ifMove(tetris) == 0) 			//������ɶ������������Ч
					{
						tetris->x = Temp1;
						tetris->flag = Temp2;
					}
					else      						//����ɶ���ִ�в���
					{
						goto label;
					}
				}
				tetris->y++;     					//���û�в���ָ����������ƶ�
				if (ifMove(tetris) == 0)  				//��������ƶ��Ҳ��ɶ���������ڴ˴�
				{
					tetris->y--;
					PrintTetris(tetris);
					Del_Fullline(tetris);
					break;
				}
			}
			for (i = tetris->y - 2;i < tetris->y + 2;i++)	//��Ϸ�������������鴥����λ��
			{
				if (i == FrameY)
				{
					system("cls");
					color(12);
					gotoxy(29, 7);
					printf("   \n");
				
					printf("\t\t\t��������   ��     ��   ����     \n");
					printf("\t\t\t��         ����   ��   ��  ��   \n");
					printf("\t\t\t������     ��  �� ��   ��   ��  \n");
					printf("\t\t\t��         ��   ����   ��  ��   \n");
					printf("\t\t\t��������   ��     ��   ����     \n");
					color(14);
					gotoxy(17, 18);
					
					printf("��Ҫ������һ��-------1");
					gotoxy(44, 18);
					printf("�����ˣ��˳���-------2\n");
					
					color(11);
					gotoxy(32, 20);
					printf("ѡ��1/2����");

					scanf("%d", &n);
					switch (n)
					{
					case 1:
						system("cls");
						Replay(tetris);       	//���¿�ʼ��Ϸ
						break;
					case 2:
						exit(0);
						break;
					}
				}
			}
			tetris->flag = tetris->next;  			//�����һ������˹�����ͼ��(�ұߴ���)
			tetris->x = FrameX + 2 * Frame_width + 6;
			tetris->y = FrameY + 10;
			CleanTetris(tetris);
		}
}
