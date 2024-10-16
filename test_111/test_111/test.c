#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//int main()
//{
//	//int (*pf)(int, int) = Add;                   //pf是函数指针
//	int(*arr[4])(int, int) = {Add, Sub, Mul, Div}; //arr就是函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}

void menu()
{
	printf("************************\n");
	printf("***1. Add  2. Sub*******\n");
	printf("***3. Mul  4. Div*******\n");
	printf("***0. Exit**************\n");
	printf("************************\n");

}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int input = 0;
//	//函数指针数组
//	//转移表
//	int (*pfarr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//
//	} while (input);
//	return 0;
//}
//指向函数指针数组的指针
//int main()
//{
//
//	//函数指针数组
//	//转移表
//	int (*pfarr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//
//	//指向函数指针数组的指针
//	//ppfarr = &pfarr;
//
//	int (*(*ppfarr)[5])(int, int) = &pfarr;
//
//	return 0;
//}


//冒泡排序

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;

		//一趟冒泡排序的过程
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
			

		}
		if (flag == 1)
		{
			break;
		}
	}

}
////qsort  快速排序函数  可以排序任意类型的数据
//
//void qsort(void* base, //你要排序的数据的起始位置
//			size_t num,  //待排序的数据元素的个数
//			size_t width,//待排序的数据元素的大小（单位是字节） 
//			int(* cmp)(const void* e1, const void* e2)    //函数指针-比较函数
//			);
//
////__cdecl是函数调用约定
//
//比较两个整形元素
//e1指向一个整数
//e2指向另一个整数
//int cmp_int(const void* e1, const void* e2)
//{
//	if (*(int*)e1 > *(int*)e2)
//		return 1;
//	else if (*(int*)e1 == *(int*)e2)
//	{
//		return 0;
//	}
//	else
//		return-1;
//}
int cmp_int(const void* e1, const void* e2)
{
	
		//return (*(int*)e1 - *(int*)e2);  //升序
		return (*(int*)e2 - *(int*)e1);  //降序

	
}

int main()
{
	//int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	//把数组排成升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}



//int main()
//{
//	int a = 0;
//	char* pa = &a;//报错，因为类型不兼容
//	void* pv = &a;//void*是没有具体类型的指针，可以接受任意类型的指针
//	//void*是无具体类型的指针，所以不能解引用操作，也不能+—整数
//	//
//	return 0;
//}