//����
//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ��*��ɵĴ��ո�ֱ��������ͼ����
//�������� :
//�������룬һ������(2~20)����ʾֱ��������ֱ�Ǳߵĳ��ȣ���*��������Ҳ��ʾ���������
//������� :
// ���ÿ�����룬�����*��ɵĶ�Ӧ���ȵ�ֱ�������Σ�ÿ��*������һ���ո�,

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int side = 0;
//	int i = 0;
//	scanf("%d", &side);
//	for (i = 0; i < side; i++)
//	{
//		int j = side - i;
//		int k = 0;
//		for (k = 0; k < side; k++)
//		{
//			if (k < j - 1)
//			{
//				printf("  ");
//			}
//			else
//			{
//				printf("* ");
//			}
//
//		}
//		printf("\n");
//
//	}
//	return 0;
//}

int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i + j < n - 1)
				{
					printf("  ");

				}
				else
				{
					printf("* ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}