//struct Stu
//{
//	//ѧ�����������
//	char name[20];
//	int age;
//
//}s1, s2; //s1,s2��ȫ�ֱ���





//�����ṹ�����ͣ�ֻ����һ��
struct 
{
	//ѧ�����������
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
//	struct Stu s3;//s3�Ǿֲ�����
//
//	p = &x;  //�ӡ�*������*�������Ͳ�����
//	return 0;
//}





//�ṹ���������

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
//	int data;           //������
//	struct Node* next;  //ָ����
//};

////err
//typedef struct 
//{
//	int data;
//	Node* next;//�﷨��֧��
//}Node;

////�������
//typedef struct Node
//{
//	int data;           //������
//	struct Node* next;  //ָ����
//}Node;


////1.
//typedef struct Node
//{
//	int data;           //������
//	struct Node* next;  //ָ����
//}*linklist;
////2.
//struct Node
//{
//	int data;           //������
//	struct Node* next;  //ָ����
//};
//typedef struct Node* linklist;//��д��������ȼ�

//�ṹ��������Ķ���ͳ�ʼ��

struct Point
{
	int x;
	int y;
}p1 = { 2, 3 };  //p1�ǽṹ����� ʣ��������

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