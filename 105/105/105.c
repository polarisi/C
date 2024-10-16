#include <stdio.h>
//int main()
//{
//	//char ch = 'w';
//	//char* p = &ch;
//	//*p = 'b';
//	//printf("%c\n", ch);
//	
//	
//	char* p = "abcdef"; //把字符串首字符a的地址，赋值给了p
//	//char[] = "abcdef";
//	printf("%s\n", p);
//	
//	
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if (p1 == p2)
//	{
//		printf("p1 == p2\n");
//	}
//	else
//	{
//		printf("p1! == p2\n");
//	}
//
//	if (arr1 == arr2)
//	{
//		printf("arr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2\n");
//	}
//
//	return 0;
//}


//指针数组
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//
//	int* parr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(parr[i] + j));
//			printf("%d ", parr[i][j]);
//
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int (*p2)[10] = &arr;  //去掉p2是p2的类型
//
//	//printf("%p\n", arr);
//	//printf("%p\n", arr+1);
//
//	//整形指针是用来存放整形的地址
//	// 字符指针是用来存放字符的地址
//	// 数组指针是用来存放数组的指针
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", &arr[0]+1);
//
//	//printf("%p\n", &arr);
//	//printf("%p\n", &arr+1);
//
//	//int sz = sizeof(arr);
//	//printf("%d", sz);
//	return 0;
//}
//数组名通产表示的是数组首元素的地址
//但是有两个例外
//1.sizeof(数组名)，这里表示的是整个数组，计算的是整个数组的大小,单位是字节
//2.&数组名，这里表示的是整个数组，&数组名取出的是整个数组的地址

//int main()
//{
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int(*p)[10] = &arr;
//
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(*p+i));   //pz是指向数组的，*p其实相当于数组名，数组名又相当于首元素的地址    数组指针
//	//}    //别扭  错误示范
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//
//}
void print1(int arr[3][5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
//int (*p)[5]
//p的类型是int (*)[5]
//p是指向一个整形数组的，数组5个元素int[5]
//p+1跳过一个5个元素的数组
void print2(int (*p)[5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			//printf("%d ", *(*(p + i) + j)); //等价  *(p+i) -> p[i]
			printf("%d ", p[i][j]);

		}
		printf("\n");

	}
}
void print3(int* p)
{

}
//arr数组名表示首元素的地址
//二维数组的首元素指的是她的第一行
int main()
{
	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	int data[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	print3(data);
	return 0;
}

//int arr[10];
//int (*p) = &arr;     //类型为int (*) = &arr
//&arr+1 ->40          &arr -> int(*)[10]       arr -> int*
//int* p2;
//p2+1 -> 跳过一个整形