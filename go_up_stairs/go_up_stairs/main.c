#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fib(int n)
{
	if (n <= 2)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}
//上n阶台阶，一次可以上两节或者一节，问有多少种走法
int main()
{
	int n = 0;
	scanf("%d", &n);
	int m = fib(n);
	printf("%d", m);
	return 0;
}