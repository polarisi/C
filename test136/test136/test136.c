//struct Stu
//{
//	//学生的相关属性
//	char name[20];
//	int age;
//
//}s1, s2; //s1,s2是全局变量





//匿名结构体类型，只能用一次
struct 
{
	//学生的相关属性
	char name[20];
	int age;

}s1; 

struct
{
	int a;
	char b;
	float c;

}x;

struct
{
	int a;
	char b;
	float c;

}a[20], *p;


//int main()
//{
//	struct Stu s3;//s3是局部变量
//
//	p = &x;  //从“*”到“*”的类型不兼容
//	return 0;
//}





//结构体的自引用

////error
//struct Node
//{
//	int data;
//	struct Node next;
//};
//
//int main()
//{
//	sizeof(struct Node);
//	return 0;
//}


//struct Node
//{
//	int data;           //数据域
//	struct Node* next;  //指针域
//};

////err
//typedef struct 
//{
//	int data;
//	Node* next;//语法不支持
//}Node;

////解决方案
//typedef struct Node
//{
//	int data;           //数据域
//	struct Node* next;  //指针域
//}Node;


////1.
//typedef struct Node
//{
//	int data;           //数据域
//	struct Node* next;  //指针域
//}*linklist;
////2.
//struct Node
//{
//	int data;           //数据域
//	struct Node* next;  //指针域
//};
//typedef struct Node* linklist;//此写法与上面等价

//结构体变量被的定义和初始化

struct Point
{
	int x;
	int y;
}p1 = { 2, 3 };  //p1是结构体变量 剩余是类型

struct score
{
	int n;
	char ch;
};

struct Stu
{
	char name[20];
	int age;
	struct score s;
};

#include <stdio.h>
int main()
{
	struct Point p2 = { 3, 4 };
	struct Stu s1 = { "zhangsan", 20, {100, 'q'}};
	printf("%s %d %d %c\n", s1.name, s1.age, s1.s.n, s1.s.ch);
	return 0;
}