
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	int  i = 0;
//	int arr[10] = { 0 };
//	//��ֵ
//	for (i = 0; i < 10; i++)
//	{
//		//arr[i] = i;
//		scanf("%d", &arr[i]);
//	}
//	//��ӡ
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


////x64����ѭ����x86��ѭ��    ��C������ȱ�ݡ�
//int main()
//{
//	int i = 0;     //x86�����£�����arr[10]�������ѭ����������ᱨ��
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
//	//����
//	assert(src != NULL);
//     	//assert(src != NULL);������Ե���˼�Ǽ�� src ָ���Ƿ�Ϊ NULL������һ����Ч�ļ�飬ȷ�����ڳ��Է��� src ָ�������֮ǰ��src ָ�뱾������Ч�ġ�
//		//assert(*src != NULL);
//	    //  ���������ͼ���* src �Ƿ�Ϊ NULL��Ȼ���������* src ��һ�� char ���͵�ֵ��������һ��ָ�롣char ���͵�ֵ����Ϊ NULL����� assert(*src != NULL); ʵ��������Ч�ģ�������������
//	assert(dest != NULL);
//	//while ( *src++ = *dest++ )   //�ᱨ��const��ָ
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
//	//strcpy�ڿ����ַ�����ʱ����\0Ҳ������ȥ
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
//	//*p = 20;           //�����ţ�������
//	const int num = 10;
//	// //const int* p = &num;  //1.const����ָ�����������*�����
//	//int const * p = &num;   //����Ҳ������ߣ�constһ�����ǰ�棬��˼��pָ��Ķ�����ͨ��p���ı���
//	//*p = 20;           //err
//
//	//const int* p = &num;
//	//int n = 100;
//	//p = &n;
//	//const����*���ұ�,��˼��pָ��Ķ����ǿ���ͨ��p���ı�ģ����ǲ����޸�p���������ֵ
//	//����˵��const����*��ߣ����Ƶ���*p��const����*�ұߣ����Ƶ���p
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
	//strcpy�ڿ����ַ�����ʱ����\0Ҳ������ȥ
	
	//my_strcpy(arr1, p);

	printf("%s", my_strcpy(arr1, arr2));
	return 0;
}