#include <stdio.h>
#include <stddef.h>

//�ṹ��Ĵ�С
//�ṹ���ڴ����
//��μ��� ?
//���ȵ����սṹ��Ķ������ :
//	1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
//	2.������Ա����Ҫ���뵽ĳ������(������)���������ĵ�ַ����
//	������ = ������Ĭ�ϵ�һ�������� �� �ó�Ա��С�Ľ�Сֵ��
//	VS��Ĭ�ϵ�ֵΪ8
//	3.�ṹ���ܴ�СΪ��������(ÿ����Ա��������һ��������)����������
//	4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С����������������(��Ƕ�׽ṹ��Ķ�����)��������
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
////��ռ�ÿռ�С�ĳ�Ա����������һ��
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
//	//printf("%d\n", sizeof(struct S1));//12 ���ֽ�
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
//ͷ�ļ���ʹ�ã���ֹͷ�ļ����������

//�޸�Ĭ�϶�����  Ϊ 4
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
//	printf("%d\n", sizeof(struct S));//16   �޸ĺ�Ϊ 12
//	printf("%d\n", sizeof(struct S1));//12   �޸ĺ�Ϊ 6
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
//��ѡ��ַ����ʽ
int main()
{
	struct S s = { {1, 2, 3}, 100 };
	print1(s);//��ֵ����
	print2(&s);//��ַ����

	return 0;
}