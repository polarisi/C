#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//int main()
//{
//	//int (*pf)(int, int) = Add;                   //pf�Ǻ���ָ��
//	int(*arr[4])(int, int) = {Add, Sub, Mul, Div}; //arr���Ǻ���ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}

void menu()
{
	printf("************************\n");
	printf("***1. Add  2. Sub*******\n");
	printf("***3. Mul  4. Div*******\n");
	printf("***0. Exit**************\n");
	printf("************************\n");

}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int input = 0;
//	//����ָ������
//	//ת�Ʊ�
//	int (*pfarr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("������������������>");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("�������\n");
//		}
//
//	} while (input);
//	return 0;
//}
//ָ����ָ�������ָ��
//int main()
//{
//
//	//����ָ������
//	//ת�Ʊ�
//	int (*pfarr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//
//	//ָ����ָ�������ָ��
//	//ppfarr = &pfarr;
//
//	int (*(*ppfarr)[5])(int, int) = &pfarr;
//
//	return 0;
//}


//ð������

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;

		//һ��ð������Ĺ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
			

		}
		if (flag == 1)
		{
			break;
		}
	}

}
////qsort  ����������  ���������������͵�����
//
//void qsort(void* base, //��Ҫ��������ݵ���ʼλ��
//			size_t num,  //�����������Ԫ�صĸ���
//			size_t width,//�����������Ԫ�صĴ�С����λ���ֽڣ� 
//			int(* cmp)(const void* e1, const void* e2)    //����ָ��-�ȽϺ���
//			);
//
////__cdecl�Ǻ�������Լ��
//
//�Ƚ���������Ԫ��
//e1ָ��һ������
//e2ָ����һ������
//int cmp_int(const void* e1, const void* e2)
//{
//	if (*(int*)e1 > *(int*)e2)
//		return 1;
//	else if (*(int*)e1 == *(int*)e2)
//	{
//		return 0;
//	}
//	else
//		return-1;
//}
int cmp_int(const void* e1, const void* e2)
{
	
		//return (*(int*)e1 - *(int*)e2);  //����
		return (*(int*)e2 - *(int*)e1);  //����

	
}

int main()
{
	//int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	//�������ų�����
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}



//int main()
//{
//	int a = 0;
//	char* pa = &a;//������Ϊ���Ͳ�����
//	void* pv = &a;//void*��û�о������͵�ָ�룬���Խ����������͵�ָ��
//	//void*���޾������͵�ָ�룬���Բ��ܽ����ò�����Ҳ����+������
//	//
//	return 0;
//}