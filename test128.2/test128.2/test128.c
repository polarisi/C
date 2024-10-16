//描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用*组成的带空格直角三角形图案。
//输入描述 :
//多组输入，一个整数(2~20)，表示直角三角形直角边的长度，即*的数量，也表示输出行数。
//输出描述 :
// 针对每行输入，输出用*组成的对应长度的直角三角形，每个*后面有一个空格,

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int side = 0;
//	int i = 0;
//	scanf("%d", &side);
//	for (i = 0; i < side; i++)
//	{
//		int j = side - i;
//		int k = 0;
//		for (k = 0; k < side; k++)
//		{
//			if (k < j - 1)
//			{
//				printf("  ");
//			}
//			else
//			{
//				printf("* ");
//			}
//
//		}
//		printf("\n");
//
//	}
//	return 0;
//}

int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i + j < n - 1)
				{
					printf("  ");

				}
				else
				{
					printf("* ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}