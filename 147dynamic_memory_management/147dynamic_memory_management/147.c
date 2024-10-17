#define _CRT_SECURE_NO_WARNINGS 1

//malloc
//free
//calloc
//realloc
//学会这几个函数
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	int arr[10] = { 0 };
//	//动态内存开辟
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//空间开辟成功，使用内存
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);//不用的时候需要释放内存
//	p = NULL;
//	//没有free
//	//并不是说内存空间就不回收了
//	//当程序退出的时候，系统会自动回收内存空间的
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}

//开辟10个整型的新空间
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));//开辟好空间后会初始化为0
//	if (p == calloc)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//
//	}
//	//打印
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}

//calloc = malloc + memset

int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	//扩容
	int* ptr = (int*)realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *(p + i));
	}
	//释放
	free(p);
	p = NULL;
	return 0;
}