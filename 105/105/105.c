#include <stdio.h>
//int main()
//{
//	//char ch = 'w';
//	//char* p = &ch;
//	//*p = 'b';
//	//printf("%c\n", ch);
//	
//	
//	char* p = "abcdef"; //���ַ������ַ�a�ĵ�ַ����ֵ����p
//	//char[] = "abcdef";
//	printf("%s\n", p);
//	
//	
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if (p1 == p2)
//	{
//		printf("p1 == p2\n");
//	}
//	else
//	{
//		printf("p1! == p2\n");
//	}
//
//	if (arr1 == arr2)
//	{
//		printf("arr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2\n");
//	}
//
//	return 0;
//}


//ָ������
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//
//	int* parr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(parr[i] + j));
//			printf("%d ", parr[i][j]);
//
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int (*p2)[10] = &arr;  //ȥ��p2��p2������
//
//	//printf("%p\n", arr);
//	//printf("%p\n", arr+1);
//
//	//����ָ��������������εĵ�ַ
//	// �ַ�ָ������������ַ��ĵ�ַ
//	// ����ָ����������������ָ��
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", &arr[0]+1);
//
//	//printf("%p\n", &arr);
//	//printf("%p\n", &arr+1);
//
//	//int sz = sizeof(arr);
//	//printf("%d", sz);
//	return 0;
//}
//������ͨ����ʾ����������Ԫ�صĵ�ַ
//��������������
//1.sizeof(������)�������ʾ�����������飬���������������Ĵ�С,��λ���ֽ�
//2.&�������������ʾ�����������飬&������ȡ��������������ĵ�ַ

//int main()
//{
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int(*p)[10] = &arr;
//
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(*p+i));   //pz��ָ������ģ�*p��ʵ�൱�������������������൱����Ԫ�صĵ�ַ    ����ָ��
//	//}    //��Ť  ����ʾ��
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//
//}
void print1(int arr[3][5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
//int (*p)[5]
//p��������int (*)[5]
//p��ָ��һ����������ģ�����5��Ԫ��int[5]
//p+1����һ��5��Ԫ�ص�����
void print2(int (*p)[5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			//printf("%d ", *(*(p + i) + j)); //�ȼ�  *(p+i) -> p[i]
			printf("%d ", p[i][j]);

		}
		printf("\n");

	}
}
void print3(int* p)
{

}
//arr��������ʾ��Ԫ�صĵ�ַ
//��ά�������Ԫ��ָ�������ĵ�һ��
int main()
{
	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	int data[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	print3(data);
	return 0;
}

//int arr[10];
//int (*p) = &arr;     //����Ϊint (*) = &arr
//&arr+1 ->40          &arr -> int(*)[10]       arr -> int*
//int* p2;
//p2+1 -> ����һ������