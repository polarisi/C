//����һ����������nums������ǡ��������Ԫ��ֻ����һ�Σ���������Ԫ�����������Ρ��ҳ�ֻ����һ�ε�������Ԫ������
//���԰�����˳�� ���ش𰸡�

#include <stdio.h>
void find_single_dog(int arr[], int sz, int *pd1, int *pd2)
{
	int i = 0;
	int ret = 0;
	//1.���
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//2.����ret�Ķ����������ұߵĵڼ�λ��1
	int pos = 0;
	for (pos = 0; pos < 32; pos++)
	{
		if (((ret >> pos) & 1) == 1)
		{
			break;

		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			*pd1 ^= arr[i];

		}
		else
		{
			*pd2 ^= arr[i];
		}
	}
}


int main()
{
	//1 2 3 4 5 1 2 3 4 6
	//1 2 3 4 5 1 2 3 4
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
	//1 1 3 3 5
	//2 2 4 4 6
	
	//5^6 ��� ��ͬΪ0������Ϊ1
	//101 - 5 B 1 1 3 3  �������һλ��ͬ����
	//110 - 6 A 2 2 4 4
	//010
	//1.����
	//1.�����������
	//2.�ҳ����Ľ����������һλΪ1 - n
	//3.�Ե�nλΪ1��һ�飬��nλΪ0��һ��
	int sz = sizeof(arr) / sizeof(arr[0]);
	int dog1 = 0;
	int dog2 = 0;
	find_single_dog(arr, sz, &dog1, &dog2);
	printf("%d %d\n", dog1, dog2);

	return 0;
}