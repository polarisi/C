//����
//����Ա�����ֳ���֡���7λ���٣��Ӽ�������������ɼ���ÿ��7������(�ٷ���)��ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ�(ע:�����ж�������)
//��������:
//ÿһ�У�����7������(0~100)������7���ɼ����ÿո�ָ���
//������� :
//ÿһ�У����ȥ����߷ֺ���ͷֵ�ƽ���ɼ���С�������2λ��ÿ��������С�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int score = 0;
	int n = 0;
	int max = 0;
	int min = 100;
	int sum = 0;
	while (scanf("%d", &score) == 1)
	{
		n++;
		if (score > max)
		
			max = score;
		
		if(score < min)
			min = score;
		sum += score;
		if (n == 7)
		{
			printf("%.2lf\n", (sum - max - min) / 5.0);
			n = 0;
			max = 0;
			min = 100;
			sum = 0;
		}
	}
	return 0;
}