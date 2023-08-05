#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	//int sz = sizeof(arr) / sizeof(arr[0]);     // a b c d e f \0     一共七个
//	int left = 0;
//	//int right = sz - 2;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//	return 0;
//}
//void reverse_string(char arr[])          //函数实现
//{
//	
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//	
//}

////递归实现
//reverse_string(char* str)
//{
//	char temp = *str;   //1
//	int len = strlen(str);
//	*str = *(str + len - 1);  //2
//	*(str + len - 1) = '\0';  //3
//	if (strlen(str + 1) >= 2)
//		reverse_string(str + 1);  //4
//	*(str + len - 1) = temp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	 reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

////递归实现
//reverse_string(char arr[],  int left, int right)      //有问题，会多交换一次，变成 fecdba
//{
//	char temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		if (left < right)
//			reverse_string(arr, left + 1, right - 1);
//}

//修改后的
reverse_string(char arr[], int left, int right)     
{
	
	if (left < right)
	{
		char temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		reverse_string(arr, left + 1, right - 1);
	}
		
}
int main()
{
	char arr[] = "abcdef";
	int left = 0;
	int right = strlen(arr) - 1;
	reverse_string(arr, left, right);
	printf("%s", arr);
	return 0;
}

//int digit_sum(unsigned int n)
//{
//	if (n > 9)
//		return digit_sum(n / 10) + n % 10;
//	else
//		return n;
//}
//int main()              //求一个数的各位之和
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int sum = digit_sum(n);
//	printf("%d", sum);
//	return 0;
//}
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}