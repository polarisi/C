//����
//KiKiѧϰ��ѭ����BoBo��ʦ�������˹�ϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵļ���ͼ����
//�������� :
//����������룬ÿ��һ������(2~20)
//������� :
//	���ÿ�����룬����á� * ����ɵļ���
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		//��ӡͼ��   ��n��
		int i = 0;
		for (i = 0; i < n; i++)
		{
			//��ӡ�ո�
			int j = 0;
			for (j = 0; j < (n - i); j++)
			{
				printf("  ");
			}
			for (j = 0; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		//��ӡ��n+1��
		for (i = 0; i <= n; i++)
		{
			//��ӡ�ո�
			int j = 0;
			for (j = 0; j < i; j++)
			{
				printf("  ");
			}
			for (j = 0; j <= (n - i); j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}