#define  _CRT_SECURE_NO_WARNINGS 1

#include<string.h>
#include<stdio.h>
//
//int main()
//{
//	//char arr[] = "abcdef";//abcdef\0
//	char arr[] = { 'a', 'b', 'c' };//��������ֵ
//	int len = strlen(arr);//strlen�����ķ���ֵ��size_t�޷�������
//	printf("%d\n", len);
//
//	return 0;
//}

//ģ��ʵ��strlen����
#include <assert.h>

//1.����������
//2.ָ��-ָ��
//3.�ݹ�ķ���
size_t my_strlen(const char* str)
{
	int count = 0;
	assert(str);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//int main()
//{
//	char arr[] = "abcdef";
//	size_t n = my_strlen(arr);
//	printf("%u\n", n);
//	return 0;
//}

//int main()
//{
//	char name[20] = { 0 };
//	//"zhangsan"
//	//string copy
//	strcpy(name, "zhangsan");
//	//name = "zhengsan" //err,name�������ǵ�ַ����ַ��һ������ֵ�����ܱ���ֵ
//	printf("%s\n", name);
//	return 0;
//}

//int main()
//{
//	char* p = "aabcdef";
//	char arr[] = "bit";
//	strcpy(p, arr);//Ŀ�����򲻿��޸�
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//	return ret;
//}

//void my_strcpy(char*p2, char*p1)
//{
//	
//	while (*p1)
//	{
//		*p2 = *p1;
//		p2++;
//		p1++;
//	}
//	*p2 = '\0';
//}

#include<assert.h>
void my_strcpy(char* s1, const char* s2)
{
	assert(s2);
	while (*s1++ = *s2++);  //���ʽ�ŵ�while���棬�Ƚ����˸�ֵ���ֽ������жϣ����һ��*s2��ֵ��'\0',��ֵ��*s1,'\0'��ASCIIֵ��0��Ϊ�٣�����ѭ��
}                           //����д������

//int main()
//{
//	char arr1[] = "aabcdef";
//	char arr2[] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);//abcdef
//
//	return 0;
//}

//�ַ���׷��
char* my_strcat(char*dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "hello ";
	//strcat(arr1, "world");
	//my_strcat(arr1, "world");

	//�Լ����Լ�׷��
	my_strcat(arr1, arr1);  //�����


	printf("%s\n", arr1);
	return 0;
}