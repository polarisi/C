#define _CRT_SECURE_NO_WARNINGS 1

//malloc
//free
//calloc
//realloc
//ѧ���⼸������
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	int arr[10] = { 0 };
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//�ռ俪�ٳɹ���ʹ���ڴ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);//���õ�ʱ����Ҫ�ͷ��ڴ�
//	p = NULL;
//	//û��free
//	//������˵�ڴ�ռ�Ͳ�������
//	//�������˳���ʱ��ϵͳ���Զ������ڴ�ռ��
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

//����10�����͵��¿ռ�
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));//���ٺÿռ����ʼ��Ϊ0
//	if (p == calloc)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//
//	}
//	//��ӡ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//�ͷ�
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
	//����
	int* ptr = (int*)realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *(p + i));
	}
	//�ͷ�
	free(p);
	p = NULL;
	return 0;
}