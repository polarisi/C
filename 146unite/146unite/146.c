#include <stdio.h>
//����

struct St  //�ṹ��ÿ���˶��ж����Ŀռ�
{
	int a;
	char c;
};

//union Un //���ÿռ�
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

//�жϴ�С�˴洢


//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}

//int check_sys()
//{
//	union Un //���ÿռ�
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
//	//�͵���
//	//01 00 00 00 --С��
//	//00 00 00 01 --���
//
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//union Un //���ÿռ�
//{
//	int i;//4
//	char arr[5];//5
//};

union Un //���ÿռ�
{
	int i;//4
	short arr[7];//14
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));//8   arrռ��5���ֽ�  ������Ҫ���룬�˷��������ֽ�
	                          //16  shortռ��14���ֽ�

	//printf("%p\n", &u);
	//printf("%p\n", &(u.a));
	//printf("%p\n", &(u.c));


}