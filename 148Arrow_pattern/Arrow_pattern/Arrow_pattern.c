//描述
//KiKi学习了循环，BoBo老师给他出了工系列打印图案的练习，该任务是打印用“*”组成的箭形图案。
//输入描述 :
//本题多组输入，每行一个整数(2~20)
//输出描述 :
//	针对每行输入，输出用“ * ”组成的箭形
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		//打印图案   上n行
		int i = 0;
		for (i = 0; i < n; i++)
		{
			//打印空格
			int j = 0;
			for (j = 0; j < (n - i); j++)
			{
				printf("  ");
			}
			for (j = 0; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		//打印下n+1行
		for (i = 0; i <= n; i++)
		{
			//打印空格
			int j = 0;
			for (j = 0; j < i; j++)
			{
				printf("  ");
			}
			for (j = 0; j <= (n - i); j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}