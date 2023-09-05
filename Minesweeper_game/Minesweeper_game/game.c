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
	printf("----------扫雷游戏-----------\n");
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
	printf("----------扫雷游戏-----------\n\n");

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
	int win = 0;   //找到非雷的个数
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入要排查的坐标：\n");
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("排查过了，不能重复排查\n");
			}
			else
			{
				if(mine[x][y] == '1')   //如果是雷
				{
					printf("很遗憾，你被炸死了\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else            //如果不是雷
				{
					//win++;
					////统计mine数组中x,y 周围有几个雷
					//int count = get_mine_count(mine, x, y);                  //最初出版本，不能一下显示一片
					//show[x][y] = count + '0';    //转换为数字字符
					Spreadmine(mine, show, row, col, x, y/*, &win*/);
				
					DisplayBoard(show, ROW, COL);
					Markmine(show, ROW, COL);
				}
			}

		}
		else             
		{
			printf("输入的坐标非法，请重新输入\n");
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
		printf("排雷成功\n\n\n\n\n");
		DisplayBoard(mine, ROW, COL);
	}
}
//基础功能
//1、标记功能
//2、展开一片的功能
//当排查xy坐标时  1、该坐标不是雷，2、该坐标周围没有雷，3、该坐标没有被排查过


void Markmine(char show[ROWS][COLS], int row, int col)     //标记功能
{
	char i = 0;
	int x = 0;
	int y = 0;
	//printf("是否需要标记？(y/n)\n");
	//scanf("%c", &i);
		while (1)
		{
			printf("是否需要标记？(y是/n否/x需要取消标记)\n");
		//scanf缓冲区问题
		// 回车、空格等都有对应的ASCII码，所以用scanf输入字符时要小心这些东西被当成字符输进去
		// 而输入字符串和整型、实型等数据时这些都被当成分隔符而不会被输入到字符数组或变量里
		getchar();             //解决方法：可在两个输入语句中间加入一个 getchar();
			                     //或者在字符的输入语句% c前面加上一个空格 即改成scanf(“ % c”, &src);
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
			else if (i == 'x')            //取消标记
			{
				scanf("%d %d", &x, &y);
				show[x][y] = '*';
				DisplayBoard(show, ROW, COL);
			}
			else
			{
				printf("输入错误，请重新输入\n");
			}
		}
}

void Spreadmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y/*, int* win*/)
{
	//统计mine数组中x,y 周围有几个雷
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