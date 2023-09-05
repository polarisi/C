#include<stdio.h>
#include<string.h>

//int main()
//{
//	char a = -128;    //char -128~127
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//截断后                   10000000
//	//11111111111111111111111110000000  提升
//	//00000000000000000000000010000000 提升
//	printf("%u\n", a);   //%u是无符号的整数  4294967168
//	printf("%d\n", a);   //%d是有符号的整数  -128
//
//	return 0;
//}


//int main()
//{
	//int i = -20;
	//unsigned int j = 10;
	//printf("%d\n", i + j);

	//unsigned int i;
	//for (i = 9; i >= 0; i--)
	//{
	//	printf("%u\n", i);
	//}
	//char a[1000];
	//int i;
	//for (i = 0; i < 1000; i++)
	//{
	//	a[i] = -1 - i;
	//}
	////arr[i]-->char -128~127
	//printf("%d", strlen(a));    //255
	//unsigned char i = 0;
	//	for (i = 0; i <= 255; i++)
	//	{
	//		printf("hello world\n");    //死循环
	//	}
//	if ((int)strlen("abc") - (int)strlen("abcdef") >= 0)   //strlen返回值是size-t   -->   unsigned int   
//		printf(">\n");
//	else
//		printf("<\n");
//	return 0;
//}

int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	//1001.0
	//1.001*2^3
	//S = 0  E = 3   M = 1.001    3+127=130  -->10000010
	//0 10000010 00100000000000000000000
	//
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);   //9.0
	return 0;
}