////���ַ�������
//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//���������������е����У����������кϲ�Ϊһ���������в������
//���ݷ�Χ:1��n, m��1000 �������е�ֵ����0�� val < 30000
//	�������� :
//	����������У�
//	��һ�а�������������n, m���ÿո�ָ���n��ʾ�ڶ��е�һ���������������ֵĸ�����m��ʾ�����еڶ����������������ֵĸ�����
//	�ڶ��а���n���������ÿո�ָ���
//	�����а���m���������ÿո�ָ�.
//	������� :
//	���Ϊһ�У��������Ϊn + m���������У�������Ϊn���������кͳ���Ϊm�����������е�Ԫ�����½��������������кϲ���

#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void input(int a,  int *arr)
{
	int i = 0;

	for (i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}
}
int main()
{

	int m = 0;
	int n = 0;
	int arr1[1000];
	int arr2[1000];
	scanf("%d", &m);
	scanf("%d", &n);
	input(m, arr1);
	input(n, arr2);

	int j = 0;
	int k = 0;
	while (j < m && k < n)
	{
		if(arr1[j] < arr2[k])
		{
			printf("%d ", arr1[j]);
			j++;
		}
		else
		{
			printf("%d ", arr2[k]);
			k++;
		}
}
	if (j < m)
	{
		for (; j < m; j++)
		{
			printf("%d ", arr1[j]);
		}
	}
	else
	{
		for (; k < n; k++)
		{
			printf("%d ", arr2[k]);
		}
	}
	return 0;
}