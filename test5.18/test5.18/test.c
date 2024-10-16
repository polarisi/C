////求字符串长度
//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出，
//数据范围:1≤n, m≤1000 ，序列中的值满足0≤ val < 30000
//	输入描述 :
//	输入包含三行，
//	第一行包含两个正整数n, m，用空格分隔，n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//	第二行包含n个整数，用空格分隔。
//	第三行包含m个整数，用空格分隔.
//	输出描述 :
//	输出为一行，输出长度为n + m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素里新进行升序序列排列合并。

#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void input(int a,  int *arr)
{
	int i = 0;

	for (i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}
}
int main()
{

	int m = 0;
	int n = 0;
	int arr1[1000];
	int arr2[1000];
	scanf("%d", &m);
	scanf("%d", &n);
	input(m, arr1);
	input(n, arr2);

	int j = 0;
	int k = 0;
	while (j < m && k < n)
	{
		if(arr1[j] < arr2[k])
		{
			printf("%d ", arr1[j]);
			j++;
		}
		else
		{
			printf("%d ", arr2[k]);
			k++;
		}
}
	if (j < m)
	{
		for (; j < m; j++)
		{
			printf("%d ", arr1[j]);
		}
	}
	else
	{
		for (; k < n; k++)
		{
			printf("%d ", arr2[k]);
		}
	}
	return 0;
}