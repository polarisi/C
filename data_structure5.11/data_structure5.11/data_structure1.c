#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	//printf("%d\n", sizeof(char));
//	//printf("%d\n", sizeof(short));
//	//printf("%d\n", sizeof(int));
//	/*printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));*/
//
//
//
//	/*int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("%d\n", sum);*/
//
//	
//	return 0;
//}


//enum Color
//{
//	//ö�ٳ���  �������޸� REDĬ��0��GREENĬ��1��BLUEĬ��2
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	//��ԭɫ
//	//RED GREEN BLUE
//	int nummber = 10;
//	enum Color c = RED;
//	enum Color d = GREEN;
//	printf("%d\n", c);
//	printf("%d", d);
//	return 0;
//}

//�ַ�������\0��β��
//#include <string.h>
//int main()
//{
//	char arr1[] = "abcdef";   //7
//	char arr2[] = { 'a','b','c','d','e','f','\0'};
//	char arr3[] = { 'a','b','c','d','e','f' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//
//	//int len = strlen("asd");  //���ַ������ȵĺ��� string lenth ��Ҫ����ͷ�ļ�string.h
//	//printf("%d\n", len);
//	return 0;
//
//}

//ת���ַ� ����ĸ��    ??)--->  ]      ??(---->   [
//%d ��ӡ����
//%c ��ӡ�ַ�
//%s ��ӡ�ַ���
//%f ��ӡfloat���͵�����
//%lf ��ӡdouble���͵����� 
//int main()
//{
//	/*printf("%s\n", "(Are you okk \? \? )");
//	printf("%c\n",'\'');
//	printf("abcd\n");
//	printf("%s\n", "abcd");
//	printf("abc\0d\n");
//	printf("abc\\0d\n");*/
//	printf("c:\test\test.c\n");
//	printf("c:\\test\\test.c\n");
//	//printf("\a\a\a\a\a\a");  //������\a
//	printf("%c\n", '\130');  //\---��1����3Ϊ8������
//	printf("%c\n", '\x031');  //\x--��ʾ����16������  ת��Ϊʮ���������ӦASCII���ֵ�����ܳ���ASCII��ķ�Χ
//	printf("%d\n", strlen("qwer t"));
//	printf("%d\n", strlen("c:\test\168\test.c"));//һ��14����
//
//	return 0;
//}
//  c++��ע�ͷ����//   c���Ե�ע�ͷ����/*    */ ��һ����ȱ�ݣ���֧��Ƕ��ע�ͣ�����*/�ͻ�

//ѡ�����
//int main()
//{
//	int coding = 0;
//	printf("���ȥ�ô����𣿣�ѡ��1 or 0��:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("��֣�����к�offer\n");
//	}
//	else
//	{
//		printf("�������ؼ�������\n");
//	}
//	return 0;
//}

//int main()
//{
//	printf("����ѧϰ\n");
//	int line = 0;
//	while (line <= 5)
//	{
//		if (line >= 5)
//		{
//			printf("���뻪Ϊ\n");
//		}
//		else
//			printf("��Ҫѧϰ%d\n", line);
//		line++;
//	}
//	
//	return 0;
//}

//int main()
//{
//	int n1, n2, sum;
//	printf("���\n");
//	scanf("%d %d", &n1, &n2);
//	//sum = n1 + n2;
//	sum = Add(n1, n2);
//	printf("%d",sum);
//	return 0;
//}
//int Add(int x, int y)    //intΪ�������ͣ�AddΪ��������(int x, int y)Ϊ����������135-139Ϊ������
//{
//	//int z = 0;
//	//z = x + y;
//	//return z;
//	return(x + y);
//}
//������±��0��ʼ
//int main()
//{
//	int arr[6] = { 10, 11, 12, 13, 14, 15 };
//		int i = 0;
//	while (i < 6)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//
//	return 0;
//}
//MAX(int x, int y)  //�Ƚ���������С���Ӻ���
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()       //�Ƚ���������С��������
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int z = MAX(x, y);
//	printf("%d\n", z);
//	return 0;
//}
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d", &x);
//	if (x < 0)
//		y = -1;
//	else
//		//{
//			if (x == 0)
//				y = 0;
//			else
//				y = 1;
//		//}
//	printf("%d", y);
//	return 0;
//}
//int main()
//{
//	//int a = 7 / 2, b = 7 % 2;
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	float a = 7 / 2.0;           //   7/2��3.0������7/2.0��3.5
//	float b = 7 / 2.0;           
//	int c = 7 % 2;              //ȡģ���������˱���������
//	printf("%f\n", a);
//	printf("%.1f\n", b);           //����һλС��
//	printf("%d\n", c);
//	a = a + 3;      //�ȼ���a+=3
//	return 0;
//}
//C������0��ʾ�٣���0��ʾ��
//int main()
//{
//	int a = 2;
//	if (!a)
//		printf("666");
//	else
//		printf("̩����\n");
//	printf("%d\n", sizeof(int));      //sizeof�ǵ�Ŀ����������Ǻ���
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));   //40���������������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr[0]));   //4������ǵ�һ�����Ĵ�С
//	printf("%lld\n", sizeof(arr)/ sizeof(arr[0]));  //10�����Ԫ�ظ���
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	////int b = a++;     //����++����ʹ�ã���++
//	////int b = ++a;     //ǰ��++����++����ʹ��
//	////int b = a--;     
//	//int b = --a;     
//	//printf("%d\n", b);
//	//printf("%d\n", a);
//	//int c = 3.14;
//	//int d = (int)3.14;
//	//printf("%d", c);
//	//printf("%d", d);
//	int e = 10, f = 20;
//	int g = e > f ? e : f;
//	printf("%d", g);
//
//	return 0;
//}
//&&�߼���   ||�߼���    ���ű��ʽ���ص��Ǵ������Ҽ��㣬���Ľ��Ϊ���մ�
//typedef unsigned int uint; //����������
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	unsigned int a=0;
//	uint b=1;
//	struct Node c;
//	Node d;
//
//	return 0;
//}
//static   1����ȫ�ֱ���2����ȫ�ֱ���3���κ���
//void test()     //void��ʾ����Ҫ����
//{
//	static int a = 1;    //���ӽ����2 2 2 2 2����֮������2 3 4 5 6
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		i++;
//		test();
//	}
//	return 0;
//}
//extern int g_val;   //�����ⲿ����
////extern int Add(int x, int y);
//#define A 100
//#define ADD(x,y)  ((x)+(y))    //define���峣���ͺ�
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int z = ADD(a,b);
//	printf("%d\n", z);
//	printf("%d\n", g_val);
//	printf("%d\n", A);
//	register int num = 3;//���齫num���ڼĴ�����
//	return 0;
//}
//int main()
//{
//	int a = 10;//���ڴ�����4���ֽ�     %p�ǵ�ַ
//	//&a;
//	int* p = &a;
//	*p = 20;     //�����ò���������˼��ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����p��ָ��Ķ���
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	printf("%zu\n", sizeof(char*));//ָ������Ĵ�С64λ������8���ֽ�,32��4���ֽ�
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}
//struct Stu 
//{
//	char name[20];
//	int  ege;
//	char sex[10];
//	char tele[20];
//};
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).ege, (*ps).sex, (*ps).tele);
//	printf("%s %d %s %s\n", ps->name, ps->ege, ps->sex, ps->tele);
//
//}
//int main()
//{
//	struct Stu s = { "lisi", 12, "nan", "123456" };
//	printf("%s %d %s %s\n", s.name, s.ege, s.sex, s.tele);
//	print(&s);
//	return 0;
//}
//elseֻ�������ifƥ��
//int test()
//{
//	int a = 2;
//	if (3 == a)
//		return 3;          //return�ǽ����ı�־
//	return 1;
//}
//int main()
//{
//	//int b = test();
//	printf("%d", test());
//	return 0;
//}
//int main()
//{
//	double pi = 3.1415926;
//	float r = 0;
//	scanf("%f", &r);
//	double v = (4.0 / 3) * pi * r*r*r;
//	printf("%.3f\n", v);
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:                     //case��switch������������ͳ���
//		printf("Monday\n");    
//		break;
//	case 2:
//		printf("Tuesday\n");
//		break;
//	case 3:
//		printf("Wednesday\n");
//		break;	
//	case 4:
//		printf("Thursday\n");
//		break;	
//	case 5:
//		printf("Firday\n");
//		break;	
//	case 6:
//		printf("Saturdayy\n");
//		break;	
//	case 7:
//		printf("Sunday\n");
//		break;
//	}
//	switch (day)
//	{
//	case 1:                     //����ʵ�ֶ��caseƥ��һ��ִ�����
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("Firday\n");
//		break;
//	case 6:
//	case 7:
//		printf("Sunday\n");
//		break;
//	default:
//		printf("ѡ�����\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;
//int m = 2;
//switch (n)
//{
//case 1:
//	m++;
//case 2:
//	n++;
//case 3:
//	switch (n)
//	{//switch����Ƕ��ʹ��
//	case 1:
//		n++;
//	case 2:
//		m++;
//		n++;
//		break;
//	}
//case 4:
//	m++;
//	break;
//default:
//	break;
//}
//printf("m = %d, n = %d\n", m, n);
//return 0;
//}
//int main()            //��ʵ��ѭ����ֻҪ����break����ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ����
//{                     //continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�
//	                  //����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������жϡ�
//	int i = 1;
//	while (i <= 10)     //ֻ���1-4
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}
//int main()          //���2-11û��5
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()     //����������������
//{
//	int ch = 0;
//	//printf("%c\n", ch);
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}
//int main()
//{
//	printf("����������:");
//	char password[20] = { 0 };
//	scanf("%s", password);           //scanf�����ո�Ͳ�����
//	printf("��ȷ�����룺Y/N\n");
//	//getchar();
//	while (getchar() != '\n')
//	{
//		;
//	}
//	int ret = getchar();
//	if (ret == 'Y')
//		printf("Y\n");
//	else
//		printf("N\n");
//
//	return 0;
//}
//int main()          //ֻ��ӡ�����ַ�
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()             //���hello world �ķ���ֵ
//{
//	int n = printf("Hello world!");
//	printf("\n%d", n);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
	//���ʡ�Ե���ʼ�����֣������ӡ���ٸ�hehe?   3��
	//for (; i < 3; i++)
	//{
	//	for (; j < 3; j++)
	//	{
	//		printf("hehe\n");
	//	}
	//}
	//for (i = 0; i < 3; i++)            //��ӡ9��
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf("hehe\n");
	//	}
	//}
	//����4-ʹ�ö���һ����������ѭ��       �������hehe
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)       
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()                                 //����ѭ��Ҫѭ�����ٴΣ�         0��     k=0���Ϊ�٣�������ѭ��
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}
//int main()                                         //��ӡ1 2 3 4 5 6 7 8 9 10 
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= 10);
//	return 0;
//}
//int main()                                           //��ӡ1 2 3 4 
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= 10);
//
//	return 0;
//}
//int main()                                         //1234��ѭ��
//{
//	int i = 1;
//
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= 10);
//
//	return 0;
//}
//int main()                              //��ӡ���2 3 4 6 7 8 9 10 11
//{
//	int i = 1;
//
//	do
//	{
//		i = i + 1;
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	} while (i <= 10);
//
//	return 0;
//}
//int main()                                            //����׳�
//{
//	int i = 1;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//}
//int factorial(int m)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= m; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()                                       //��1��+2!+3!+.....+n!
//{
//	int m = 0;
//	int n = 0;
//	int j = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		sum = sum + factorial(j);
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()                                         //��1��+2��+......+10��
//{
//	int i = 1;
//	int ret = 1;
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d", sum);
//	return 0;
//}
//int main()                                  //��1��+2��+......+10�� ���㷨
//{
//	int ret = 1;
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum += ret;
//	}
//
//	printf("%d", sum);
//	return 0;
//}
//int main()                                             //Ѱ������
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±���%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("û���ҵ���");
//	return 0;
//}
//int main()                                           //���ַ�������
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		//�����������  int mid = left + (right-left)/2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			printf("�ҵ��ˣ��±���%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}
//#include <windows.h>
//#include <stdlib.h>
//int main()                                         //ʵ�ִ���ͷ���м��ӡ
//{
//	char arr1[] = "welcome to bit...";
//	char arr2[] = "#################";
//	int left = 0;
//	char buf[] = "abc";                  //[a b c \0]�ĸ��ַ�
//	int right = strlen(arr1) - 1;        //int right = sizeof(arr1)/sizeof(arr1[0])-2;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);          //����һ��
//		system("cls");        //system��һ���⺯��������ִ��ϵͳ����
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//		return 0;
//}
// ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�(ֻ���������������룬���������ȷ�� 
// ��ʾ��¼�ɹ���������ξ�����������˳�����
// �Ƚ�2���ַ����Ƿ���ȣ�����ʹ�� == ����Ӧ��ʹ��һ���⺯��: strcmp 
// �������ֵ��0����ʾ2���ַ������
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = {0};       //�����������ַ���abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("��¼�ɹ���");
//			break;
//		}
//		else
//			printf("�������\n");
//	}
//	if (i == 3)
//		printf("������������˳�����");
//	return 0;
//}
//#include <stdio.h>
//int main()                      //�����ַ���
//{
//	//char   arr1[] = "asdfghj";
//	//char   arr2[20] = "";
//	//strcpy(arr2, arr1);
//	//printf("%s", arr2);
//	char arr[20] = "hello world!";
//	memset(arr+6, 'y', 3);
//	printf("%s", arr);
//	return 0;
//}
//get_max���������
//int get_max(int x, int y)
//{
//	//return (x > y) ? (x) : (y);
//	return (x > y ? x : y);
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}
//ʵ�ֳɺ��������ǲ����������
//void Swap1(int x, int y)        //��ʵ�δ��ݸ��β�ʱ���β�ʱʵ�ε�һ����ʱ����
//{                               //���βε��޸Ĳ���Ӱ��ʵ��
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
////��ȷ�İ汾
//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1, num2);                                       //��ֵ����
//	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
//	Swap2(&num1, &num2);                                     //��ַ����
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}
//#include <math.h>
//int main()                           //��ӡ100~200֮�����е�����
//{
//	int i = 0;
//	int count = 0;
//	//for (i = 100; i <= 200; i++)
//	for (i = 101; i <= 200; i+=2)      //ż��������������
//
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)           //��i��ƽ������ȥ�Գ�
//		//for (j = 2; j <= i - 1; j++)           //��2~i-1����ȥ�Գ�
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//#include <math.h>
//
//#include <stdbool.h>
//
//int main()                           //��ӡ100~200֮�����е�����
//{
//	int i = 0;
//	int count = 0;
//	//for (i = 100; i <= 200; i++)
//	for (i = 101; i <= 200; i+=2)      //ż��������������
//	{
//		bool is_prime(i);        //C����Ҫ�����ȶ������ã��������������ڱ��������ĺ���
//		if (is_prime(i))         //��������ȶ����ʹ��һ��������������������Զ��庯����ǰ�棬
//		{                       //����Ҫ�ں�������ǰ�����Ϻ���ԭ�����������������������ʱ��Ĭ�ϵ��ú�����int���͡�
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
////int is_prime(int n)
//bool is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)           //��i��ƽ������ȥ�Գ�
//		//for (j = 2; j <= i - 1; j++)           //��2~i-1����ȥ�Գ�
//	{
//		if (n % j == 0)
//		{
//			//return 0;               //return����֮��ֱ�ӽ������򣬱�breakǿ��
//			return false;
//		}
//	}
//	//return 1;
//	return true;
//}
//int main()                      //��ӡ1000~2000֮�����е�����
//{                               //������Ա�4���������ǲ��ܱ�100����
//	int i = 0;                  //���߿��Ա�400����
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0)
//		{
//			if (i % 100 != 0)
//				printf("%d ", i);
//			else if (i % 400 == 0)
//				printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()                      //��ӡ1000~2000֮�����е�����
//{                               //������Ա�4���������ǲ��ܱ�100����
//	int i = 0;                  //���߿��Ա�400����
//	for (i = 1000; i <= 2000; i++)
//	{
//		if((i % 4 == 0)&&(i % 100 != 0)||(i % 400 ==0))
//				printf("%d ", i);
//		
//	}
//	return 0;
//}
//int main()                      //��ӡ1000~2000֮�����е�����
//{                               //������Ա�4���������ǲ��ܱ�100����
//	int i = 0;                  //���߿��Ա�400����
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_leap_year(i))
//			printf("%d ", i);
//
//	}
//	return 0;
//}
//int  is_leap_year(int j)
//{
//	if ((j % 4 == 0) && (j % 100 != 0) || (j % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int binary_search(int arr[], int k, int sz)       //���ּ����������±���Ӻ�����arr[]�Ǹ�ָ��
//{                                               //���鴫��ʵ���ϴ��ݵ���������Ԫ�صĵ�ַ
//	                                            //�������������飬�����ں����ڲ�����һ�������������ֵ�����Ԫ���ǲ����׵�
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;    //�ҵ��ˣ������±�
//	}
//	return -1;            //�Ҳ���
//}
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);       //�β���ʵ�ε����ֿ�����ͬҲ���Բ�ͬ
//	if (-1 == ret)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±�ʶ%d", ret);
//	return 0;
//}
//void Adc(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Adc(&num);
//	printf("%d\n", num);
//	Adc(&num);
//	printf("%d\n", num);
//	return 0;
//}
//int  Adc(int n)
//{
//	//return n + 1;
//	//return n ++;        //�����ԣ����Ϊ00
//	return ++n;             //���Ϊ12
//}
//int main()
//{
//	int num = 0;
//	num = Adc(num);
//	printf("%d\n", num);
//	num = Adc(num);
//	printf("%d\n", num);
//	return 0;
//}
//����Ƕ�׵��ã����ǲ�����Ƕ�׶���
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));         //printf ����ֵΪ��ӡ����
	return 0;
}