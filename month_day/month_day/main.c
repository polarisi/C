//#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>
int is_leap_year(int y)
{
	return ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0));
}
int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	//scanf("%d %d", &y, &m);
	while ((scanf_s("%d %d", &y, &m)) == 2)
	{
		int d = day[m];
		if ((m == 2) && is_leap_year(y))
			d++;
		printf("%d\n", d);
	}
	
	
	return 0;
}