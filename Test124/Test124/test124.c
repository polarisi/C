#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include <assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	//if (*str1 > *str2)
	//	return 1;
	//else
	//	return -1;
	return (*str1 - *str2);
}

//int main()
//{
//	//char arr1[20] = "zhangsan";
//	//char arr2[20] = "zhangsanfeng";
//	char arr1[] = "abcq";
//	char arr2[] = "abcdef";  // >    q>d 比的是ASCII码值
//	//比较一下两个字符串是否相等
//	//aarr1是数组名，arr2也是数组名，数组名是首元素的地址 
//	//这里是比较两个地址，而不是两个字符串的内容
//	
//	//if (arr1 == arr2)
//	//{
//	//	printf("==\n");
//	//}
//	//else
//	//{
//	//	printf("!=\n");
//	//}
//
//	//两个字符串比较相等，应该使用strcmp
//	//int ret = strcmp(arr1, arr2);
//	int ret = my_strcmp(arr1, arr2);
//
//	if (ret < 0)
//	{
//		printf("<\n");
//	}
//	else if (ret == 0)
//	{
//		printf("==\n");
//	}
//	else
//	{
//		printf(">\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[4] = { 0 };
//	strcpy(arr, "hello bit");
//	printf("%s\n", arr);
//	return 0;
//}

//长度受限制的字符串函数
//strncpy
//strncat
//strncmp

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);//只想拷贝前五个字符不行
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	//strncat 追加参数
//	char arr1[20] = "abcdef\0xxxx";
//	char arr2[] = "bit";
//	strncat(arr1, arr2, 3); //追加完成以后会在末尾追加\0,同时不会因为把3改成6而多追加
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	//int ret = strncmp(arr1, arr2, 3);
//	int ret = strncmp(arr1, arr2, 4);//返回  1 0 -1
//
//	if (ret == 0)
//	{
//		printf("==\n");
//	}
//	else if (ret < 0)
//		printf("<\n");
//	else
//		printf(">\n");
//	return 0;
//}


//情况一：
//abcdef
//bcd
//情况二：多次匹配才能找到
//abbbcdef 
//bbc

//KMP算法
//这个算法也是用来实现一个字符串中查找字符串的
//效率高，但是实现难度大
//B站搜索：比特大博哥，可以找到kmp算法的实现

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p)
	{
		s1 = p;
		s2 = str2;
		while(*s1 !='\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (char*)p;
		p++;
	}
	return NULL;
}
//int main()
//{
//	//char email[] = "zpw@bitejiuyeke.com";
//	//char substr[] = "bitejiuyeke";
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	//char* ret = strstr(email, substr);
//	char* ret = my_strstr(arr1, arr2);
//
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//strtok
//切割字符串


//int main()
//{
//	const char* sep = "@.";
//	char email[] = "zhangpengwei@bitejiuiyeke.com";
//	char cp[30] = { 0 };//zhangpengwei@bitejiuiyeke.com  找到分隔符之后会把分隔符改成\0
//	strcpy(cp, email);
//
//	char* ret = NULL;
//	for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//
//	//char* ret = strtok(cp, sep);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//	////ret = strtok(NULL, sep);
//	////printf("%s\n", ret);
//
//	return 0;
//}


//strerror  错误报告函数
//C语言的库函数在执行失败的时候，都会设置错误码

//errno是C语言设置的一个全局的错误码存放的变量

//int main()
//{
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//
//	}
//
//	return 0;
//}


#include <ctype.h>
//int main()
//{
//	//int a = isspace('w');
//	//printf("%d\n", a);
//
//	int a = isdigit('5');
//	printf("%d\n", a);
//	return 0;
//}

void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
//memcpy 负责拷贝两块独立空间中的数据
//重叠内存的拷贝，用memmove做到
int main()
{
	//int arr1[] = { 1, 2, 3, 4, 5, 6, 7 };
	//int arr2[10] = { 0 };
	////memcpy(arr2, arr1, 28);//4*7=28
	//my_memcpy(arr2, arr1, 28);//4*7=28


	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memcpy(arr1 + 2, arr1, 20);
	return 0;
}