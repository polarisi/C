//有序序列判断

//描述
//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。
//数据范围 : 3≤n≤50 序列中的值都满足 1≤ val ≤ 100
//输入描述 :
//	第一行输入一个整数N(3≤N≤50).
//	第二行输入N个整数，用空格分隔N个整数。
//	输出描述 :
//输出为一行，如果序列有序输出sorted，否则输出unsorted.

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50] = { 0 };
	int flag1 = 0;//升序
	int flag2 = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (i > 0)
		{
			if (arr[i] > arr[i - 1])
			{
				flag1 = 1;
			}
			else if(arr[i] < arr[i - 1])
				flag2 =  1;
			//else
			//{
			//	;
			//}

		}
	}
	if (flag1 + flag2 <= 1)//加等于号是防止这种情况1 1 1 1 
		printf("sorted\n");
	else
		printf("unsorted\n");

	return 0;
}