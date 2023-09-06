//输入一个整数数组,实现一个函数,
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分所有偶数位于数组的后半部分。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while(left < right)
//	{
//		
//		while ((left < right) && (arr[left] % 2))    //从左向右，找到奇数就进入循环，找到偶数就停下
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))   //从左向右，找到偶数就进入循环，找到奇数就停下
//		{
//			right--;
//		}
//		if (left < right)                            //交换数据
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//	
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)   //输入
//	{
//		scanf("%d", arr + i);
//	}
//    move_odd_even(arr, sz);          //这里不能加void
//	for (i = 0; i < sz; i++)    //输出
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//输入包含三行，
//第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//第二行包含n个整数，用空格分隔。
//第三行包含m个整数，用空格分隔。
//输出描述 :
//输出为一行，输出长度为n + m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int arr1[1000];
//	int arr2[1000];
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	int j = 0;
//	int k = 0;
//	while (j < m && k < n)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			printf("%d", arr1[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d", arr2[k]);
//			k++;
//		}
//	}
//	if (j < m)
//	{
//		for (; j < m; j++)
//		{
//			printf("%d", arr1[j]);
//		}
//	}
//	else
//	{
//		for (; k < n; k++)
//		{
//			printf("%d", arr2[k]);
//		}
//	}
//	return 0;
//}


int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int arr1[1000];
	int arr2[1000];
	int arr3[1000];
	int i = 0;
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr2[i]);
	}
	int j = 0;
	int k = 0;
	int l = 0;
	while (j < m && k < n)
	{
		if (arr1[j] < arr2[k])
		{
			//printf("%d", arr1[j]);
			arr3[l++] = arr1[j];
			j++;
		}
		else
		{
			//printf("%d", arr2[k]);
			arr3[l++] = arr2[k];

			k++;
		}
	}
	if (j < m)
	{
		for (; j < m; j++)
		{
			//printf("%d", arr1[j]);
			arr3[l++] =arr1[j];

		}
	}
	else
	{
		for (; k < n; k++)
		{
			//printf("%d", arr2[k]);
			arr3[l++] = arr2[k];
		}
	}
	//int a = strlen(arr1) / strlen(arr1[0]) + strlen(arr2) / strlen(arr2[0]);
	for (l = 0; l <(m+n) ; l++)
	{
		printf("%d ", arr3[l]);
	}
	return 0;
}