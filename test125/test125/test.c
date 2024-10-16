#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<assert.h>
void* my_memcpy(void* dest, const void* src, size_t num)    //此函数和memcpy的功能一致，只不过在VSS里面memcpy和memmove的功能一样，VSS超额完成任务
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;

     }
	return ret;
}

//memcpy函数不是用来处理重叠的内存之间的数据拷贝的
//使用memcpy函数来实现，重叠内存之间的拷贝要用memmove

void test1()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[20] = { 0 };
	//memcpy(arr2, arr1, 20);
	my_memcpy(arr2, arr1, 20);

	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
}
void test2()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[20] = { 0 };
	//memcpy(arr2, arr1, 20);
	//my_memcpy(arr1 + 2, arr1, 20);//1 2 1 2 1 2 1 8 9 10
	memmove(arr1+2, arr1, 20);      //1 2 1 2 3 4 5 8 9 10
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
}

void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src)
	{
		//从前向后拷贝
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;

		}
	}
	else
	{
		//从后向前拷贝
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);

		}
	}
	return ret;
}

void test3()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[20] = { 0 };
	//memcpy(arr2, arr1, 20);
	//my_memcpy(arr1 + 2, arr1, 20);//1 2 1 2 1 2 1 8 9 10
	my_memmove(arr1, arr1 + 2, 20);      //1 2 1 2 3 4 5 8 9 10
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
}

//int main()
//{
//	test3();
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	int arr2[] = { 1, 3, 2 };//01 00 00 00 03 00 00 00 02 00 00 00
//	int ret = memcmp(arr1, arr2, 12);//< -1; == 0; > 1   此函数可以作用于任意类型的数据
//	printf("%d\n", ret);//0
//	return 0;
//}

//memset 可以用来初始化内存
//

int main()
{
	//char arr[] = "hello bit";
	//memset(arr+6, 'x', 3);
	//printf("%s\n", arr);
	int arr[10] = { 0 };
	//把arr初始化为全1
	memset(arr, 1, 40);   //做不到
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}