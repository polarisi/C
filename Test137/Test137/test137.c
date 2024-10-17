#include <stdio.h>
#include <stddef.h>

//结构体的大小
//结构体内存对齐
//如何计算 ?
//首先得掌握结构体的对齐规则 :
//	1.第一个成员在与结构体变量偏移量为0的地址处。
//	2.其他成员变量要对齐到某个数字(对齐数)的整数倍的地址处。
//	对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
//	VS中默认的值为8
//	3.结构体总大小为最大对齐数(每个成员变量都有一个对齐数)的整数倍。
//	4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数(含嵌套结构体的对齐数)的整数倍
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//
//struct S2
//{
//	char c1;//1
//	char c2;//1
//	int i;//4
//	
//};
////让占用空间小的成员尽量集中在一起
//struct S3
//{
//	double d;
//	char c;
//	int i;
//
//
//};
//
//struct S4
//{
//	char c1;//1
//	struct S3 s3;
//	double d;
//
//};
//
//int main()
//{
//	//struct S1 s1;
//	//struct S2 s2;
//	//printf("%d\n", sizeof(struct S1));//12 个字节
//	//printf("%d\n", sizeof(struct S2));//8
//
//
//	//printf("%d\n", offsetof(struct S1, c1));//0
//	//printf("%d\n", offsetof(struct S1, i));//4
//	//printf("%d\n", offsetof(struct S1, c2));//8
//
//	//printf("%d\n", offsetof(struct S2, c1));//0
//	//printf("%d\n", offsetof(struct S2, c2));//1
//	//printf("%d\n", offsetof(struct S2, i));//4
//
//
//	struct S3 s3;
//
//	printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", offsetof(struct S3, d));//0
//	printf("%d\n", offsetof(struct S3, c));//8
//	printf("%d\n", offsetof(struct S3, i));//12
//
//	printf("%d\n", sizeof(struct S4));//32
//
//	return 0;
//}

//#pragma once
//头文件中使用，防止头文件被多次引用

//修改默认对齐数  为 4
//#pragma pack(4)
//struct S
//{
//	int i;//0~3    0~3
//	//4~7          4
//	double d;//8~15  4~11
//};
//#pragma pack()
//
//#pragma pack(1)
//
//
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S));//16   修改后为 12
//	printf("%d\n", sizeof(struct S1));//12   修改后为 6
//
//	return 0;
//}

struct S
{
	int data[1000];
	int num;
};

void print1(struct S ss)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", ss.data[i]);
	}
	printf("%d\n", ss.num);
}

void print2(const struct S* ps)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", ps->data[i]);
	}
	printf("%d\n", ps->num);
}
//优选传址的形式
int main()
{
	struct S s = { {1, 2, 3}, 100 };
	print1(s);//传值调用
	print2(&s);//传址调用

	return 0;
}