//描述
//公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数(百分制)，去掉一个最高分和一个最低分，输出每组的平均成绩(注:本题有多组输入)
//输入描述:
//每一行，输入7个整数(0~100)，代表7个成绩，用空格分隔。
//输出描述 :
//每一行，输出去掉最高分和最低分的平均成绩，小数点后保留2位，每行输出后换行。
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