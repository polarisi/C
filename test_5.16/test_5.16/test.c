
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	int  i = 0;
//	int arr[10] = { 0 };
//	//赋值
//	for (i = 0; i < 10; i++)
//	{
//		//arr[i] = i;
//		scanf("%d", &arr[i]);
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	return 0;
//}

//int add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	c = add(a, b);
//	printf("%d", c);
//	return 0;
//}

//void test(int a[])
//{
//	//
//}
//
//int main()
//{
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//test(arr);
//	char arr[] = "abcdef";
//	printf("%s", arr);
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//1! + 2! + 3! + 4! + 5! + 6! + ... + n!

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 1;
//	int j = 0;
//	int result = 0;
//	for (j = 1; j <= n; j++)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			//sum = sum * i;
//			sum *= i;
//		}
//		result += sum;
//		sum = 1;
//	}
//	printf("%d", result);
//	return 0;
//}


////x64不会循环，x86会循环    《C陷阱与缺陷》
//int main()
//{
//	int i = 0;     //x86环境下，这句放arr[10]上面会死循环，放下面会报错
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0; 
//		printf("hehe\n");
//	}
//	return 0;
//}

#include <string.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		//*dest = *src;
//		//dest++;
//		//src++;
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}


#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	//断言
//	assert(src != NULL);
//     	//assert(src != NULL);这个断言的意思是检查 src 指针是否为 NULL。这是一种有效的检查，确保你在尝试访问 src 指向的数据之前，src 指针本身是有效的。
//		//assert(*src != NULL);
//	    //  这个断言试图检查* src 是否为 NULL。然而，这里的* src 是一个 char 类型的值，而不是一个指针。char 类型的值不能为 NULL，因此 assert(*src != NULL); 实际上是无效的，会引起编译错误
//	assert(dest != NULL);
//	//while ( *src++ = *dest++ )   //会报错，const左指
//	while ( *dest++ = *src++  )
//	{
//		//*dest = *src;
//		//dest++;
//		//src++;
//		;
//	}
//	//*dest = *src;
//}
//
//
//int main()
//{
//	char arr1[20] = "XXXXXXXXXXX";
//	char arr2[] = "hello bit";
//	char* p = NULL;
//	//strcpy(arr1, arr2);
//	//strcpy在拷贝字符串的时候会把\0也拷贝进去
//	my_strcpy(arr1, arr2);
//	//my_strcpy(arr1, p);
//
//	printf("%s", arr1);
//	return 0;
//}

//int main()
//{
//	//int num = 10;
//	//num = 20;
//	//const int num = 10;
//	//int* p = &num;
//	//*p = 20;           //不走门，翻窗户
//	const int num = 10;
//	// //const int* p = &num;  //1.const修饰指针变量，放在*的左边
//	//int const * p = &num;   //这种也算在左边；const一般放在前面，意思是p指向的对象不能通过p来改变了
//	//*p = 20;           //err
//
//	//const int* p = &num;
//	//int n = 100;
//	//p = &n;
//	//const放在*的右边,意思是p指向的对象是可以通过p来改变的，但是不能修改p变量本身的值
//	//等于说是const放在*左边，限制的是*p；const放在*右边，限制的是p
//	int* const p = &num;
//	*p = 0; //ok
//	int n = 100;
//	p = &n; //err
//
//	printf("%d\n", num);
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(src != NULL);
	assert(dest != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = "XXXXXXXXXXX";
	char arr2[] = "hello bit";
	char* p = NULL;
	//strcpy(arr1, arr2);
	//strcpy在拷贝字符串的时候会把\0也拷贝进去
	
	//my_strcpy(arr1, p);

	printf("%s", my_strcpy(arr1, arr2));
	return 0;
}