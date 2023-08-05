#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//输出最高分数和最低分数的差
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[100];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int j = 0;
	int k = arr[0];
	for (i = 0; i < n; i++)
	{
		if (arr[i] > j)
		{
			j = arr[i];
		}
		if (arr[i] < k)
		{
			k = arr[i];
		}
	}
	printf("%d", j - k);
	return 0;
}

//大小写转换
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		else    if (ch >= 'A' && ch <= 'Z')
//			printf("%c\n", ch + 32);
//		//getchar();
//	}
//		return 0;
//}
//#include<ctype.h>
//int main()
//{
//	char ch = 0;
//	//读取成功返回读取字符个数
//	//读取不成功返回EOF
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (islower(ch))
//			printf("%c\n", toupper(ch));
//		else    if (isupper(ch))
//			printf("%c\n", tolower(ch));
//		//getchar();
//	}
//		return 0;
//}