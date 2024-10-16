#define  _CRT_SECURE_NO_WARNINGS 1

#include<string.h>
#include<stdio.h>
//
//int main()
//{
//	//char arr[] = "abcdef";//abcdef\0
//	char arr[] = { 'a', 'b', 'c' };//结果是随机值
//	int len = strlen(arr);//strlen函数的返回值是size_t无符号整形
//	printf("%d\n", len);
//
//	return 0;
//}

//模拟实现strlen函数
#include <assert.h>

//1.计数器方法
//2.指针-指针
//3.递归的方法
size_t my_strlen(const char* str)
{
	int count = 0;
	assert(str);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//int main()
//{
//	char arr[] = "abcdef";
//	size_t n = my_strlen(arr);
//	printf("%u\n", n);
//	return 0;
//}

//int main()
//{
//	char name[20] = { 0 };
//	//"zhangsan"
//	//string copy
//	strcpy(name, "zhangsan");
//	//name = "zhengsan" //err,name数组名是地址，地址是一个常量值，不能被赋值
//	printf("%s\n", name);
//	return 0;
//}

//int main()
//{
//	char* p = "aabcdef";
//	char arr[] = "bit";
//	strcpy(p, arr);//目标区域不可修改
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//	return ret;
//}

//void my_strcpy(char*p2, char*p1)
//{
//	
//	while (*p1)
//	{
//		*p2 = *p1;
//		p2++;
//		p1++;
//	}
//	*p2 = '\0';
//}

#include<assert.h>
void my_strcpy(char* s1, const char* s2)
{
	assert(s2);
	while (*s1++ = *s2++);  //表达式放到while里面，既进行了赋值，又进行了判断，最后一个*s2的值是'\0',赋值给*s1,'\0'的ASCII值是0，为假，跳出循环
}                           //这样写代码简洁

//int main()
//{
//	char arr1[] = "aabcdef";
//	char arr2[] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);//abcdef
//
//	return 0;
//}

//字符串追加
char* my_strcat(char*dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "hello ";
	//strcat(arr1, "world");
	//my_strcat(arr1, "world");

	//自己给自己追加
	my_strcat(arr1, arr1);  //会崩溃


	printf("%s\n", arr1);
	return 0;
}