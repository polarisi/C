#include <stdio.h>
//联合

struct St  //结构体每个人都有独立的空间
{
	int a;
	char c;
};

//union Un //共用空间
//{
//	int a;//4
//	char c;//1
//};

//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));
//
//
//}

//判断大小端存储


//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}

//int check_sys()
//{
//	union Un //共用空间
//	{
//		int i;//4
//		char c;//1
//
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int a = 1; //0x 00 00 00 01
//	//低到高
//	//01 00 00 00 --小端
//	//00 00 00 01 --大端
//
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//union Un //共用空间
//{
//	int i;//4
//	char arr[5];//5
//};

union Un //共用空间
{
	int i;//4
	short arr[7];//14
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));//8   arr占了5个字节  但是需要对齐，浪费了三个字节
	                          //16  short占了14个字节

	//printf("%p\n", &u);
	//printf("%p\n", &(u.a));
	//printf("%p\n", &(u.c));


}