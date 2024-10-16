//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求:时间复杂度小于0(N);简单点说就是寻找某个元素的次数小于元素总个数
//1 2 3
//4 5 6
//7 8 9
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////方法1
//int find_num(int arr[3][3], int r, int c, int  k)
//{
//	int x = 0;
//	int y = c - 1;
//	while (x < r && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			printf("%d %d\n", x, y);
//			return 1;
//		}
//	}
//	return 0;
//}



////方法2
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct Point find_num(int arr[3][3], int r, int c, int  k)
//{
//	int x = 0;
//	int y = c - 1;
//	struct Point p = { -1, -1 };
//	while (x < r && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			//printf("%d %d\n", x, y);
//			p.x = x;
//			p.y = y;
//			return p;
//		}
//	}
//	return p;
//}


//方法3
//返回型参数
int find_num(int arr[3][3], int *px, int *py, int  k)
{
	int x = 0;
	int y = *py - 1;
	while (x < *px && y >= 0)
	{
		if (k < arr[x][y])
		{
			y--;

		}
		else if (k > arr[x][y])
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	*px = -1;
	*py = -1;
	return 0;
}

int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k = 0;
	scanf("%d", &k);
	////方法1
	//int ret = find_num(arr, 3, 3, k);
	////printf("%d %d\n", ret);
	
	////方法2
	//struct Point ret = find_num(arr, 3, 3, k);
	//printf("%d %d\n", ret.x, ret.y);
	
	//方法3
	int x = 3;//行
	int y = 3;
	int ret = find_num(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("%d %d\n", x, y);
	}
	else
	{
		printf("找不到");
	}

	scanf("%d", &k);//第二次调用
	x = 3;//行
	y = 3;
	ret = find_num(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("%d %d\n", x, y);
	}
	else
	{
		printf("找不到");
	}
	
	return 0;
}