#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && ++c && ++d;              //只有a++执行了，其他的没有执行便结束了   1 2 3 4   只要有0便停止执行
//	i = a++ || ++b || ++c || ++d;                // 1 3 3 4                                       只要有1便停止执行
//
//	printf("%d\n%d\n%d\n%d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//		//if (a > 5)
//		//	b = 3;
//		//else
//		//	b = -3;
//	//(a > 5) ? (b = 3) : (b = -3);
//	b = (a > 5 ? 3 : -3);
//		printf("%d", b);
//
//
////[]是下标引用操作符
////()是函数引用操作符 
//int arr[10];//创建数组
//arr[9] = 10;//实用下标引用操作符。
////[] 的两个操作数是arr和9。
//
//return 0;
//}

//#include <stdio.h>
//void test1()
//{
//	printf("hehe\n");
//}
//void test2(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1();             //实用（）作为函数调用操作符。
//	test2("hello bit."); //实用（）作为函数调用操作符。
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//void set_stu(struct Stu* ps)
//{
//	//strcpy((*ps).name, "zhangsnan");
//	//(*ps).age = 20;
//	//(*ps).score = 100.0;
//
//	strcpy(ps->name, "zhangsan");         //结构体指针->成员    ps->name  等价于(*ps).name
//	ps->age = 20;
//	ps->score = 100.0;
//
//}
//void print_stu(struct Stu ss)
//{
//	printf("%s %d %lf", ss.name, ss.age, ss.score);    //结构体对象.成员
//
//}
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	printf("%s %d %lf", s.name, s.age, s.score);
//	//print_stu(s);
//	return 0;
//}


//int 4byte~32bit
//char 1byte~8bit
//#include<stdio.h>
//int main()                   //整形提升
//{                            //正数整形提升高位补零
//	char a = 5;              //负数补1
//	//0000000000000000000000000000101
//	//00000101  -  a
//	char b = 126;
//	//0000000000000000000000001111110
//	//01111110   - b
//	char c = a + b;  
//	//0000000000000000000000000000101
//	//0000000000000000000000001111110
//	//c-                      10000011    
//	//11111111111111111111111110000011
//// -1=11111111111111111111111110000010
////取反00000000000000000000000001111101
//
//	printf("%d", c);   //-125
//	return 0;
//}


//int main()                 //无符号数整形提升高位补0
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));  //1
	printf("%u\n", sizeof(+c)); //4
	printf("%u\n", sizeof(-c)); //4
	return 0;
}