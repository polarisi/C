#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void game()
{
	char mine[ROWS][COLS] = { 0 };      //��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };      //����Ų�����׵���Ϣ
	//��ʼ������Ϊָ��������
	//mine��û�в����׵�ʱ�򣬶�Ϊ'0'
	InitBoard(mine, ROWS, COLS, '0');
	//show��û�в����׵�ʱ�򣬶�Ϊ'*'
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	//������
	Setmine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//�Ų���
	Findmine(mine, show, ROW, COL);
	//�����
	//Markmine(show, ROW, COL);

}
int main()
{
	int input = 0;
	//������������������
	srand((unsigned int)time(NULL));
	do
	{
		printf("****************************\n");
		printf("*********1.play*************\n");
		printf("*********0.exit*************\n");
		printf("****************************\n");
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("ɨ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}