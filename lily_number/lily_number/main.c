
#include<stdio.h>
#include<math.h>
//求五位数中的水仙花数   eg:14610 = 1 *4610 + 14 * 610 + 146 * 10 + 1461 * 0
int main()
{
	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		int sum = 0;
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			int k = pow(10, j);
			sum += (i / k) * (i % k);

		}
		if (sum == i)
			printf("%d ", i);
	}
	
	return 0;
}