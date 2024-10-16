//小乐乐改数字
//描述
//小乐乐喜欢数字。尤其嘉欢0和1。他现在得到了一个数，想把每位的数交成0或1.如果某一位是奇数。就把它交成1，如果是偶数，那么就把它交成0。请你回答他豪后得到的数是多少.
//输入描述:
//输入包含一个整数n(0<=n<=10^9)
//输出横迷:
//输出一个整数，即小乐乐修改后得到的数字。
//输入222222   输出0
//输入123      输出101

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