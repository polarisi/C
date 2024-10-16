#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<assert.h>
void* my_memcpy(void* dest, const void* src, size_t num)    //�˺�����memcpy�Ĺ���һ�£�ֻ������VSS����memcpy��memmove�Ĺ���һ����VSS�����������
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

//memcpy�����������������ص����ڴ�֮������ݿ�����
//ʹ��memcpy������ʵ�֣��ص��ڴ�֮��Ŀ���Ҫ��memmove

void test1()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[20] = { 0 };
	//memcpy(arr2, arr1, 20);
	my_memcpy(arr2, arr1, 20);

	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
}
void test2()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[20] = { 0 };
	//memcpy(arr2, arr1, 20);
	//my_memcpy(arr1 + 2, arr1, 20);//1 2 1 2 1 2 1 8 9 10
	memmove(arr1+2, arr1, 20);      //1 2 1 2 3 4 5 8 9 10
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
}

void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src)
	{
		//��ǰ��󿽱�
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;

		}
	}
	else
	{
		//�Ӻ���ǰ����
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);

		}
	}
	return ret;
}

void test3()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[20] = { 0 };
	//memcpy(arr2, arr1, 20);
	//my_memcpy(arr1 + 2, arr1, 20);//1 2 1 2 1 2 1 8 9 10
	my_memmove(arr1, arr1 + 2, 20);      //1 2 1 2 3 4 5 8 9 10
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
}

//int main()
//{
//	test3();
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	int arr2[] = { 1, 3, 2 };//01 00 00 00 03 00 00 00 02 00 00 00
//	int ret = memcmp(arr1, arr2, 12);//< -1; == 0; > 1   �˺��������������������͵�����
//	printf("%d\n", ret);//0
//	return 0;
//}

//memset ����������ʼ���ڴ�
//

int main()
{
	//char arr[] = "hello bit";
	//memset(arr+6, 'x', 3);
	//printf("%s\n", arr);
	int arr[10] = { 0 };
	//��arr��ʼ��Ϊȫ1
	memset(arr, 1, 40);   //������
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}