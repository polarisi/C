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
//	//枚举常量  不允许修改 RED默认0，GREEN默认1，BLUE默认2
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	//三原色
//	//RED GREEN BLUE
//	int nummber = 10;
//	enum Color c = RED;
//	enum Color d = GREEN;
//	printf("%d\n", c);
//	printf("%d", d);
//	return 0;
//}

//字符串是以\0结尾的
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
//	//int len = strlen("asd");  //求字符串长度的函数 string lenth 需要包含头文件string.h
//	//printf("%d\n", len);
//	return 0;
//
//}

//转义字符 三字母词    ??)--->  ]      ??(---->   [
//%d 打印整形
//%c 打印字符
//%s 打印字符串
//%f 打印float类型的数据
//%lf 打印double类型的数据 
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
//	//printf("\a\a\a\a\a\a");  //蜂鸣是\a
//	printf("%c\n", '\130');  //\---是1——3为8进制数
//	printf("%c\n", '\x031');  //\x--表示两个16进制数  转化为十进制数后对应ASCII码的值，不能超出ASCII码的范围
//	printf("%d\n", strlen("qwer t"));
//	printf("%d\n", strlen("c:\test\168\test.c"));//一共14个数
//
//	return 0;
//}
//  c++的注释风格是//   c语言的注释风格是/*    */ 有一定的缺陷，不支持嵌套注释，遇到*/就会

//选择语句
//int main()
//{
//	int coding = 0;
//	printf("你会去敲代码吗？（选择1 or 0）:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("坚持，你会有好offer\n");
//	}
//	else
//	{
//		printf("放弃，回家卖红薯\n");
//	}
//	return 0;
//}

//int main()
//{
//	printf("加入学习\n");
//	int line = 0;
//	while (line <= 5)
//	{
//		if (line >= 5)
//		{
//			printf("加入华为\n");
//		}
//		else
//			printf("我要学习%d\n", line);
//		line++;
//	}
//	
//	return 0;
//}

//int main()
//{
//	int n1, n2, sum;
//	printf("求和\n");
//	scanf("%d %d", &n1, &n2);
//	//sum = n1 + n2;
//	sum = Add(n1, n2);
//	printf("%d",sum);
//	return 0;
//}
//int Add(int x, int y)    //int为返回类型，Add为函数名，(int x, int y)为函数参数，135-139为函数体
//{
//	//int z = 0;
//	//z = x + y;
//	//return z;
//	return(x + y);
//}
//数组的下标从0开始
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
//MAX(int x, int y)  //比较两个数大小的子函数
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()       //比较两个数大小的主函数
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
//	float a = 7 / 2.0;           //   7/2是3.0，但是7/2.0是3.5
//	float b = 7 / 2.0;           
//	int c = 7 % 2;              //取模操作符两端必须是整数
//	printf("%f\n", a);
//	printf("%.1f\n", b);           //保留一位小数
//	printf("%d\n", c);
//	a = a + 3;      //等价于a+=3
//	return 0;
//}
//C语言中0表示假，非0表示真
//int main()
//{
//	int a = 2;
//	if (!a)
//		printf("666");
//	else
//		printf("泰裤辣\n");
//	printf("%d\n", sizeof(int));      //sizeof是单目运算符，不是函数
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));   //40计算的是整个数组的大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));   //4计算的是第一的数的大小
//	printf("%lld\n", sizeof(arr)/ sizeof(arr[0]));  //10数组的元素个数
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	////int b = a++;     //后置++，先使用，再++
//	////int b = ++a;     //前置++，先++，再使用
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
//&&逻辑与   ||逻辑或    逗号表达式的特点是从左往右计算，最后的结果为最终答案
//typedef unsigned int uint; //重命名函数
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
//static   1修饰全局变量2修饰全局变量3修饰函数
//void test()     //void表示不需要返回
//{
//	static int a = 1;    //不加结果是2 2 2 2 2加了之后结果是2 3 4 5 6
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
//extern int g_val;   //声明外部符号
////extern int Add(int x, int y);
//#define A 100
//#define ADD(x,y)  ((x)+(y))    //define定义常量和宏
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int z = ADD(a,b);
//	printf("%d\n", z);
//	printf("%d\n", g_val);
//	printf("%d\n", A);
//	register int num = 3;//建议将num放在寄存器中
//	return 0;
//}
//int main()
//{
//	int a = 10;//向内存申请4个字节     %p是地址
//	//&a;
//	int* p = &a;
//	*p = 20;     //解引用操作符，意思是通过p中存放的地址，找到p所指向的对象，*p就是p所指向的对象
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	printf("%zu\n", sizeof(char*));//指针变量的大小64位机器是8个字节,32是4个字节
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
//else只和最近的if匹配
//int test()
//{
//	int a = 2;
//	if (3 == a)
//		return 3;          //return是结束的标志
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
//	case 1:                     //case，switch后面必须是整型常量
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
//	case 1:                     //可以实现多个case匹配一个执行语句
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
//		printf("选择错误\n");
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
//	{//switch允许嵌套使用
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
//int main()            //其实在循环中只要遇到break，就停止后期的所有的循环，直接终止循环。
//{                     //continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，
//	                  //而是直接跳转到while语句的判断部分。进行下一次循环的入口判断。
//	int i = 1;
//	while (i <= 10)     //只输出1-4
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}
//int main()          //输出2-11没有5
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
//int main()     //可以用来清理缓冲区
//{
//	int ch = 0;
//	//printf("%c\n", ch);
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}
//int main()
//{
//	printf("请输入密码:");
//	char password[20] = { 0 };
//	scanf("%s", password);           //scanf读到空格就不读了
//	printf("请确认密码：Y/N\n");
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
//int main()          //只打印数字字符
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
//int main()             //输出hello world 的返回值
//{
//	int n = printf("Hello world!");
//	printf("\n%d", n);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
	//如果省略掉初始化部分，这里打印多少个hehe?   3个
	//for (; i < 3; i++)
	//{
	//	for (; j < 3; j++)
	//	{
	//		printf("hehe\n");
	//	}
	//}
	//for (i = 0; i < 3; i++)            //打印9个
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf("hehe\n");
	//	}
	//}
	//代码4-使用多余一个变量控制循环       输出两个hehe
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)       
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()                                 //请问循环要循环多少次？         0次     k=0语句为假，不进入循环
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}
//int main()                                         //打印1 2 3 4 5 6 7 8 9 10 
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= 10);
//	return 0;
//}
//int main()                                           //打印1 2 3 4 
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
//int main()                                         //1234死循环
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
//int main()                              //打印输出2 3 4 6 7 8 9 10 11
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
//int main()                                            //计算阶乘
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
//int main()                                       //求1！+2!+3!+.....+n!
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
//int main()                                         //求1！+2！+......+10！
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
//int main()                                  //求1！+2！+......+10！ 简化算法
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
//int main()                                             //寻找数据
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("没有找到！");
//	return 0;
//}
//int main()                                           //二分法找数据
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		//避免溢出就用  int mid = left + (right-left)/2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}
//#include <windows.h>
//#include <stdlib.h>
//int main()                                         //实现从两头向中间打印
//{
//	char arr1[] = "welcome to bit...";
//	char arr2[] = "#################";
//	int left = 0;
//	char buf[] = "abc";                  //[a b c \0]四个字符
//	int right = strlen(arr1) - 1;        //int right = sizeof(arr1)/sizeof(arr1[0])-2;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);          //休眠一秒
//		system("cls");        //system是一个库函数，可以执行系统命令
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//		return 0;
//}
// 编写代码实现，模拟用户登录情景，并且只能登录三次。(只允许输入三次密码，如果密码正确则 
// 提示登录成功，如果三次均输入错误，则退出程序。
// 比较2个字符串是否相等，不能使用 == ，而应该使用一个库函数: strcmp 
// 如果返回值是0，表示2个字符串相等
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = {0};       //假设密码是字符串abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登录成功！");
//			break;
//		}
//		else
//			printf("密码错误！\n");
//	}
//	if (i == 3)
//		printf("密码输入错误，退出程序");
//	return 0;
//}
//#include <stdio.h>
//int main()                      //复制字符串
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
//get_max函数的设计
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
//实现成函数，但是不能完成任务
//void Swap1(int x, int y)        //当实参传递给形参时，形参时实参的一份临时拷贝
//{                               //对形参的修改不会影响实参
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
////正确的版本
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
//	Swap1(num1, num2);                                       //传值调用
//	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
//	Swap2(&num1, &num2);                                     //传址调用
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}
//#include <math.h>
//int main()                           //打印100~200之间所有的素数
//{
//	int i = 0;
//	int count = 0;
//	//for (i = 100; i <= 200; i++)
//	for (i = 101; i <= 200; i+=2)      //偶数不可能是素数
//
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)           //拿i开平方的数去试除
//		//for (j = 2; j <= i - 1; j++)           //拿2~i-1的数去试除
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
//int main()                           //打印100~200之间所有的素数
//{
//	int i = 0;
//	int count = 0;
//	//for (i = 100; i <= 200; i++)
//	for (i = 101; i <= 200; i+=2)      //偶数不可能是素数
//	{
//		bool is_prime(i);        //C语言要求函数先定义后调用，将主调函数放在被调函数的后面
//		if (is_prime(i))         //就像变量先定义后使用一样。如果主调函数放在自定义函数的前面，
//		{                       //就需要在函数调用前，加上函数原型声明。如果不声明，编译时会默认调用函数是int类型。
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
//	for (j = 2; j <= sqrt(n); j++)           //拿i开平方的数去试除
//		//for (j = 2; j <= i - 1; j++)           //拿2~i-1的数去试除
//	{
//		if (n % j == 0)
//		{
//			//return 0;               //return结束之后直接结束程序，比break强大
//			return false;
//		}
//	}
//	//return 1;
//	return true;
//}
//int main()                      //打印1000~2000之间所有的闰年
//{                               //闰年可以被4整除，但是不能被100整除
//	int i = 0;                  //或者可以被400整除
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
//int main()                      //打印1000~2000之间所有的闰年
//{                               //闰年可以被4整除，但是不能被100整除
//	int i = 0;                  //或者可以被400整除
//	for (i = 1000; i <= 2000; i++)
//	{
//		if((i % 4 == 0)&&(i % 100 != 0)||(i % 400 ==0))
//				printf("%d ", i);
//		
//	}
//	return 0;
//}
//int main()                      //打印1000~2000之间所有的闰年
//{                               //闰年可以被4整除，但是不能被100整除
//	int i = 0;                  //或者可以被400整除
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
//int binary_search(int arr[], int k, int sz)       //二分检索法，找下标的子函数，arr[]是个指针
//{                                               //数组传参实际上传递的是数组首元素的地址
//	                                            //而不是整个数组，所以在函数内部计算一个函数参数部分的数组元素是不靠谱的
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
//			return mid;    //找到了，返回下标
//	}
//	return -1;            //找不到
//}
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);       //形参与实参的名字可以相同也可以不同
//	if (-1 == ret)
//		printf("找不到\n");
//	else
//		printf("找到了，下标识%d", ret);
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
//	//return n ++;        //不可以，输出为00
//	return ++n;             //输出为12
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
//可以嵌套调用，但是不可以嵌套定义
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));         //printf 返回值为打印个数
	return 0;
}