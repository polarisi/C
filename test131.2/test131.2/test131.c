//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��:ʱ�临�Ӷ�С��0(N);�򵥵�˵����Ѱ��ĳ��Ԫ�صĴ���С��Ԫ���ܸ���
//1 2 3
//4 5 6
//7 8 9
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////����1
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



////����2
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


//����3
//�����Ͳ���
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
	////����1
	//int ret = find_num(arr, 3, 3, k);
	////printf("%d %d\n", ret);
	
	////����2
	//struct Point ret = find_num(arr, 3, 3, k);
	//printf("%d %d\n", ret.x, ret.y);
	
	//����3
	int x = 3;//��
	int y = 3;
	int ret = find_num(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("%d %d\n", x, y);
	}
	else
	{
		printf("�Ҳ���");
	}

	scanf("%d", &k);//�ڶ��ε���
	x = 3;//��
	y = 3;
	ret = find_num(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("%d %d\n", x, y);
	}
	else
	{
		printf("�Ҳ���");
	}
	
	return 0;
}