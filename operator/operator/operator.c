#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && ++c && ++d;              //ֻ��a++ִ���ˣ�������û��ִ�б������   1 2 3 4   ֻҪ��0��ִֹͣ��
//	i = a++ || ++b || ++c || ++d;                // 1 3 3 4                                       ֻҪ��1��ִֹͣ��
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
////[]���±����ò�����
////()�Ǻ������ò����� 
//int arr[10];//��������
//arr[9] = 10;//ʵ���±����ò�������
////[] ��������������arr��9��
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
//	test1();             //ʵ�ã�����Ϊ�������ò�������
//	test2("hello bit."); //ʵ�ã�����Ϊ�������ò�������
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
//	strcpy(ps->name, "zhangsan");         //�ṹ��ָ��->��Ա    ps->name  �ȼ���(*ps).name
//	ps->age = 20;
//	ps->score = 100.0;
//
//}
//void print_stu(struct Stu ss)
//{
//	printf("%s %d %lf", ss.name, ss.age, ss.score);    //�ṹ�����.��Ա
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
//int main()                   //��������
//{                            //��������������λ����
//	char a = 5;              //������1
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
////ȡ��00000000000000000000000001111101
//
//	printf("%d", c);   //-125
//	return 0;
//}


//int main()                 //�޷���������������λ��0
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