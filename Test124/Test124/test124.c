#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include <assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	//if (*str1 > *str2)
	//	return 1;
	//else
	//	return -1;
	return (*str1 - *str2);
}

//int main()
//{
//	//char arr1[20] = "zhangsan";
//	//char arr2[20] = "zhangsanfeng";
//	char arr1[] = "abcq";
//	char arr2[] = "abcdef";  // >    q>d �ȵ���ASCII��ֵ
//	//�Ƚ�һ�������ַ����Ƿ����
//	//aarr1����������arr2Ҳ��������������������Ԫ�صĵ�ַ 
//	//�����ǱȽ�������ַ�������������ַ���������
//	
//	//if (arr1 == arr2)
//	//{
//	//	printf("==\n");
//	//}
//	//else
//	//{
//	//	printf("!=\n");
//	//}
//
//	//�����ַ����Ƚ���ȣ�Ӧ��ʹ��strcmp
//	//int ret = strcmp(arr1, arr2);
//	int ret = my_strcmp(arr1, arr2);
//
//	if (ret < 0)
//	{
//		printf("<\n");
//	}
//	else if (ret == 0)
//	{
//		printf("==\n");
//	}
//	else
//	{
//		printf(">\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[4] = { 0 };
//	strcpy(arr, "hello bit");
//	printf("%s\n", arr);
//	return 0;
//}

//���������Ƶ��ַ�������
//strncpy
//strncat
//strncmp

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);//ֻ�뿽��ǰ����ַ�����
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	//strncat ׷�Ӳ���
//	char arr1[20] = "abcdef\0xxxx";
//	char arr2[] = "bit";
//	strncat(arr1, arr2, 3); //׷������Ժ����ĩβ׷��\0,ͬʱ������Ϊ��3�ĳ�6����׷��
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	//int ret = strncmp(arr1, arr2, 3);
//	int ret = strncmp(arr1, arr2, 4);//����  1 0 -1
//
//	if (ret == 0)
//	{
//		printf("==\n");
//	}
//	else if (ret < 0)
//		printf("<\n");
//	else
//		printf(">\n");
//	return 0;
//}


//���һ��
//abcdef
//bcd
//����������ƥ������ҵ�
//abbbcdef 
//bbc

//KMP�㷨
//����㷨Ҳ������ʵ��һ���ַ����в����ַ�����
//Ч�ʸߣ�����ʵ���Ѷȴ�
//Bվ���������ش󲩸磬�����ҵ�kmp�㷨��ʵ��

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p)
	{
		s1 = p;
		s2 = str2;
		while(*s1 !='\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (char*)p;
		p++;
	}
	return NULL;
}
//int main()
//{
//	//char email[] = "zpw@bitejiuyeke.com";
//	//char substr[] = "bitejiuyeke";
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	//char* ret = strstr(email, substr);
//	char* ret = my_strstr(arr1, arr2);
//
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//strtok
//�и��ַ���


//int main()
//{
//	const char* sep = "@.";
//	char email[] = "zhangpengwei@bitejiuiyeke.com";
//	char cp[30] = { 0 };//zhangpengwei@bitejiuiyeke.com  �ҵ��ָ���֮���ѷָ����ĳ�\0
//	strcpy(cp, email);
//
//	char* ret = NULL;
//	for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//
//	//char* ret = strtok(cp, sep);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//	////ret = strtok(NULL, sep);
//	////printf("%s\n", ret);
//
//	return 0;
//}


//strerror  ���󱨸溯��
//C���ԵĿ⺯����ִ��ʧ�ܵ�ʱ�򣬶������ô�����

//errno��C�������õ�һ��ȫ�ֵĴ������ŵı���

//int main()
//{
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//
//	}
//
//	return 0;
//}


#include <ctype.h>
//int main()
//{
//	//int a = isspace('w');
//	//printf("%d\n", a);
//
//	int a = isdigit('5');
//	printf("%d\n", a);
//	return 0;
//}

void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
//memcpy ���𿽱���������ռ��е�����
//�ص��ڴ�Ŀ�������memmove����
int main()
{
	//int arr1[] = { 1, 2, 3, 4, 5, 6, 7 };
	//int arr2[10] = { 0 };
	////memcpy(arr2, arr1, 28);//4*7=28
	//my_memcpy(arr2, arr1, 28);//4*7=28


	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memcpy(arr1 + 2, arr1, 20);
	return 0;
}