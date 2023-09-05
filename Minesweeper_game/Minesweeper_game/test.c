#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void game()
{
	char mine[ROWS][COLS] = { 0 };      //存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };      //存放排查出的雷的信息
	//初始化数组为指定的内容
	//mine在没有布置雷的时候，都为'0'
	InitBoard(mine, ROWS, COLS, '0');
	//show在没有布置雷的时候，都为'*'
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	//布置雷
	Setmine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//排查雷
	Findmine(mine, show, ROW, COL);
	//标记雷
	//Markmine(show, ROW, COL);

}
int main()
{
	int input = 0;
	//设置随机数的生成起点
	srand((unsigned int)time(NULL));
	do
	{
		printf("****************************\n");
		printf("*********1.play*************\n");
		printf("*********0.exit*************\n");
		printf("****************************\n");
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("扫雷\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}