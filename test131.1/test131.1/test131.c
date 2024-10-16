//实现一个函数，可以左旋转字符串中的k个字符

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//void left_rorate(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	k %= len;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < len; j++)
//		{
//			arr[j] = arr[j + 1];
//
//		}
//		arr[len - 1] = tmp;
//	}
//}
#include<assert.h>
reverse(char* left, char* right)
{
	assert(left && right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}

}
void left_rorate(char arr[], int k)
{
	int len = strlen(arr);
	k %= len;
	reverse(arr, arr+k - 1);//左边颠倒
	reverse(arr+k, arr+len - 1);//右边颠倒
	reverse(arr, arr+len - 1);//整体颠倒

}
//arr[0] 表示 arr 数组的第一个字符，而 arr[k - 1] 表示数组的第 k 个字符。这些值是具体的字符，而不是指针。
//reverse 函数的参数是 char* 类型的指针，指向内存中的位置。reverse(arr[0], arr[k - 1]) 实际上是传递了字符本身，而不是指向字符的指针，这会导致编译错误或未定义行为
//reverse(arr[0], arr[k - 1]) 是错误的，因为它传递的是具体字符而不是指针。reverse(arr, arr + k - 1) 才是正确的形式，因为它传递了指向字符的指针
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_rorate(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}

//判断一个字符串能否由另外一个字符串旋转得到
// 方法1：穷举
//int is_left_move(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = arr1[0];
//		int j = 0;
//		for (j = 0; j < len; j++)
//		{
//			arr1[j] = arr1[j + 1];
//	
//		}
//		arr1[len - 1] = tmp;
//
//		if (strcmp(arr2, arr1) == 0)
//			return 1;
//	}
//	return 0;
//}

//方法2
int is_left_move(char arr1[], char arr2[])
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
	{
		return 0;
	}
	strncat(arr1, arr1, strlen(arr1));
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	char arr1[20] = "abcdef"; 
	//abcdefabcdef
	//bcdefa

	char arr2[] = "cdefab";//判断arr2中的字符串是否可以通过arr1中的字符串旋转得到
	int ret =is_left_move(arr1,arr2);
	if(ret == 1)
		printf("ok\n");
	else
		printf("No\n");
	return 0;
}
