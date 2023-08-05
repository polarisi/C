#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// ‰»Î    6
//        1 2 3 4 5 9
//        4
// ‰≥ˆ    1 2 3 5 9
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &arr[i]);
	}
	int del = 0;
	scanf("%d", &del);
	int j = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] != del)
		{
			arr[j] = arr[i];
			j++;
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}