//���������ж�

//����
//����һ���������У��ж��Ƿ����������У�����ָ�����е�������С����������ߴӴ�С����(��ͬԪ��Ҳ��Ϊ����)��
//���ݷ�Χ : 3��n��50 �����е�ֵ������ 1�� val �� 100
//�������� :
//	��һ������һ������N(3��N��50).
//	�ڶ�������N���������ÿո�ָ�N��������
//	������� :
//���Ϊһ�У���������������sorted���������unsorted.

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50] = { 0 };
	int flag1 = 0;//����
	int flag2 = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (i > 0)
		{
			if (arr[i] > arr[i - 1])
			{
				flag1 = 1;
			}
			else if(arr[i] < arr[i - 1])
				flag2 =  1;
			//else
			//{
			//	;
			//}

		}
	}
	if (flag1 + flag2 <= 1)//�ӵ��ں��Ƿ�ֹ�������1 1 1 1 
		printf("sorted\n");
	else
		printf("unsorted\n");

	return 0;
}