#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�����߷�������ͷ����Ĳ�
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

//��Сдת��
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
//	//��ȡ�ɹ����ض�ȡ�ַ�����
//	//��ȡ���ɹ�����EOF
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