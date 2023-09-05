#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void  InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void  DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("----------ɨ����Ϸ-----------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------ɨ����Ϸ-----------\n\n");

}

void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		//1~9
		//1~9
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y - 1]
		+ board[x - 1][y]
		+ board[x - 1][y + 1]
		+ board[x][y - 1]
		+ board[x][y + 1]
		+ board[x + 1][y - 1]
		+ board[x + 1][y]
		+ board[x + 1][y + 1] - 8 * '0';
}

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int a = 0;
	int b = 0;
	int win = 0;   //�ҵ����׵ĸ���
	while (win < row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų�����꣺\n");
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("�Ų���ˣ������ظ��Ų�\n");
			}
			else
			{
				if(mine[x][y] == '1')   //�������
				{
					printf("���ź����㱻ը����\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else            //���������
				{
					//win++;
					////ͳ��mine������x,y ��Χ�м�����
					//int count = get_mine_count(mine, x, y);                  //������汾������һ����ʾһƬ
					//show[x][y] = count + '0';    //ת��Ϊ�����ַ�
					Spreadmine(mine, show, row, col, x, y/*, &win*/);
				
					DisplayBoard(show, ROW, COL);
					Markmine(show, ROW, COL);
				}
			}

		}
		else             
		{
			printf("���������Ƿ�������������\n");
		}
		win = 0;
		Stat_judge(show, &win, row, col);
		//for (a = 1; a <= row; a++)
		//{
		//	for (b = 1; b <= col; b++)
		//	{
		//		if (show[a][b] != '*'&& show[a][b] != 'x')
		//		{
		//			win++;
		//		}
		//	}
		//}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("���׳ɹ�\n\n\n\n\n");
		DisplayBoard(mine, ROW, COL);
	}
}
//��������
//1����ǹ���
//2��չ��һƬ�Ĺ���
//���Ų�xy����ʱ  1�������겻���ף�2����������Χû���ף�3��������û�б��Ų��


void Markmine(char show[ROWS][COLS], int row, int col)     //��ǹ���
{
	char i = 0;
	int x = 0;
	int y = 0;
	//printf("�Ƿ���Ҫ��ǣ�(y/n)\n");
	//scanf("%c", &i);
		while (1)
		{
			printf("�Ƿ���Ҫ��ǣ�(y��/n��/x��Ҫȡ�����)\n");
		//scanf����������
		// �س����ո�ȶ��ж�Ӧ��ASCII�룬������scanf�����ַ�ʱҪС����Щ�����������ַ����ȥ
		// �������ַ��������͡�ʵ�͵�����ʱ��Щ�������ɷָ��������ᱻ���뵽�ַ�����������
		getchar();             //�������������������������м����һ�� getchar();
			                     //�������ַ����������% cǰ�����һ���ո� ���ĳ�scanf(�� % c��, &src);
			scanf("%c", &i);
			if (i == 'y')
			{
				scanf("%d %d", &x, &y);
				show[x][y] = 'x';
				DisplayBoard(show, ROW, COL);

			}
			else if (i == 'n')
			{
				break;
			}
			else if (i == 'x')            //ȡ�����
			{
				scanf("%d %d", &x, &y);
				show[x][y] = '*';
				DisplayBoard(show, ROW, COL);
			}
			else
			{
				printf("�����������������\n");
			}
		}
}

void Spreadmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y/*, int* win*/)
{
	//ͳ��mine������x,y ��Χ�м�����
	char count = get_mine_count(mine, x, y) + '0';
	//(*win)++;
	if (count != '0')
	{
		show[x][y] = count;
	}
	else
	{
		show[x][y] = ' ';
		if (x - 1 > 0 && show[x - 1][y] == '*')
			Spreadmine(mine, show, row, col, x - 1, y/*, &win*/);
		if (x + 1 <= row && show[x + 1][y] == '*')
			Spreadmine(mine, show, row, col, x + 1, y/*, &win*/);
		if (y - 1 > 0 && show[x][y - 1] == '*')
			Spreadmine(mine, show, row, col, x, y - 1/*, &win*/);
		if (y + 1 <= col && show[x][y + 1] == '*')
			Spreadmine(mine, show, row, col, x, y + 1/*, &win*/);
	}
}

void Stat_judge(char show[ROWS][COLS], int* win, int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 1; i < row + 1; i++)
	{
		for (j = 1; j < col + 1; j++)
		{
			if (show[i][j] != '*'&&show[i][j] != 'x')
				(*win)++;
		}
	}

}