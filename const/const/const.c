#include <stdio.h>
#include<assert.h>
////代码1
//void test1()
//{
//	int n = 10;
//	int m = 20;
//	int* p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//void test2()
//{
//	//代码2
//	int n = 10;
//	int m = 20;
//	const int* p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//void test3()
//{
//	int n = 10;
//	int m = 20;
//	int* const p = &n;
//	*p = 20; //ok?
//	p = &m;  //ok?
//}
//int main()
//{
//	//测试无cosnt的
//	test1();
//	//测试const放在*的左边
//	test2();
//	//测试const放在*的右边
//	test3();
//	return 0;
//}
//const修饰指针变量的时候：
//1. const如果放在 * 的左边，修饰的是指针指向的内容，保证指针指向的内容不能通过指针来改
//变。但是指针变量本身的内容可变。
//2. const如果放在 * 的右边，修饰的是指针变量本身，保证了指针变量的内容不能修改，但是指
//针指向的内容，可以通过指针改变
int my_strlen(const char* str)    //const在*左边，只能修改str
{
	int count = 0;
	assert(str);    //如果括号里的内容为假，即str为空，就报错
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "hello bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;

}