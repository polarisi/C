//С���ָ�����
//����
//С����ϲ�����֡�����λ�0��1�������ڵõ���һ���������ÿλ��������0��1.���ĳһλ���������Ͱ�������1�������ż������ô�Ͱ�������0������ش�������õ������Ƕ���.
//��������:
//�������һ������n(0<=n<=10^9)
//�������:
//���һ����������С�����޸ĺ�õ������֡�
//����222222   ���0
//����123      ���101

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
//int main()
//{
//	int input = 0;
//	int sum = 0;
//	int i = 0;
//	scanf("%d", &input);
//	while (input)
//	{
//		int bit = input % 10;
//		if (bit % 2 == 1)
//		{
//			sum += 1 * pow(10, i);
//			i++;
//		}
//		else
//		{
//			sum += 0 * pow(10, i);
//			i++;
//		}
//		input = input / 10;
//	}
//	printf("%d ", sum);
//	return 0;
//}

int main()
{
	int input = 0;
	int sum = 0;
	int i = 0;
	scanf("%d", &input);
	while (input)
	{
		int bit = input % 10;
		//if (bit % 2 == 1)
		//{
		//	bit = 1;
		//}
		//else
		//{
		//	bit = 0;			
		//}
		sum = sum + (bit % 2)*pow(10, i);
		i++;
		input /= 10;
	}
	printf("%d ", sum);
	return 0;
}