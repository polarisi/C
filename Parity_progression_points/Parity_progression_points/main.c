//����һ����������,ʵ��һ������,
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿������ż��λ������ĺ�벿�֡�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while(left < right)
//	{
//		
//		while ((left < right) && (arr[left] % 2))    //�������ң��ҵ������ͽ���ѭ�����ҵ�ż����ͣ��
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))   //�������ң��ҵ�ż���ͽ���ѭ�����ҵ�������ͣ��
//		{
//			right--;
//		}
//		if (left < right)                            //��������
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//	
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)   //����
//	{
//		scanf("%d", arr + i);
//	}
//    move_odd_even(arr, sz);          //���ﲻ�ܼ�void
//	for (i = 0; i < sz; i++)    //���
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//����������У�
//��һ�а�������������n, m���ÿո�ָ���n��ʾ�ڶ��е�һ���������������ֵĸ�����m��ʾ�����еڶ����������������ֵĸ�����
//�ڶ��а���n���������ÿո�ָ���
//�����а���m���������ÿո�ָ���
//������� :
//���Ϊһ�У��������Ϊn + m���������У�������Ϊn���������кͳ���Ϊm�����������е�Ԫ�����½��������������кϲ���

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int arr1[1000];
//	int arr2[1000];
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	int j = 0;
//	int k = 0;
//	while (j < m && k < n)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			printf("%d", arr1[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d", arr2[k]);
//			k++;
//		}
//	}
//	if (j < m)
//	{
//		for (; j < m; j++)
//		{
//			printf("%d", arr1[j]);
//		}
//	}
//	else
//	{
//		for (; k < n; k++)
//		{
//			printf("%d", arr2[k]);
//		}
//	}
//	return 0;
//}


int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int arr1[1000];
	int arr2[1000];
	int arr3[1000];
	int i = 0;
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr2[i]);
	}
	int j = 0;
	int k = 0;
	int l = 0;
	while (j < m && k < n)
	{
		if (arr1[j] < arr2[k])
		{
			//printf("%d", arr1[j]);
			arr3[l++] = arr1[j];
			j++;
		}
		else
		{
			//printf("%d", arr2[k]);
			arr3[l++] = arr2[k];

			k++;
		}
	}
	if (j < m)
	{
		for (; j < m; j++)
		{
			//printf("%d", arr1[j]);
			arr3[l++] =arr1[j];

		}
	}
	else
	{
		for (; k < n; k++)
		{
			//printf("%d", arr2[k]);
			arr3[l++] = arr2[k];
		}
	}
	//int a = strlen(arr1) / strlen(arr1[0]) + strlen(arr2) / strlen(arr2[0]);
	for (l = 0; l <(m+n) ; l++)
	{
		printf("%d ", arr3[l]);
	}
	return 0;
}