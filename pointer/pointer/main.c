#include<stdio.h>
//int main()
//{
//	//int a = 10;      //a�����α�����ռ��4���ֽڿռ�
//	//int* pa = &a;    //pa��һ��ָ�������������ŵ�ַ��*pa�������ָ�������ֵ
//	//ָ�뱾���Ͼ��ǵ�ַ
//	//������˵��ָ����ָ�������ָ���������һ��������������ŵ�ַ��һ��������ͨ����ַ�Ϳ����ҵ�һ���ڴ浥Ԫ
//	//ָ��32λ��4���ֽ�64λ��8���ֽ�
//	int a = 0x11223344;
//	//int* pa = &a;
//	int *pa = &a;
//	char* pc = (char*)&a;
//	//*pc = 0;
//	printf("pa = %d\n", pa);         //int��4���ֽ�
//	printf("pa + 1 = %d\n", pa + 1);
//	printf("pc = %d\n", pc);         //char��һ���ֽ�
//	printf("pc + 1 = %d\n", pc + 1);
//	//ָ������;�����ָ��+-1������ʱ�����������ֽڣ�Ҳ����ָ��Ĳ���
//	//ָ������;�����ָ���ڽ����õ�ʱ����Է����ֽڵĸ�����char*һ��;int*4��
//	//int*��float*������ͨ�ã���Ȼ���Ǵ�Сһ��������int*�������������ݣ�float*�����Ǹ���������
//	//int* pi = &a;
//	//float* pf = &a;
//	//*pi = 100;
//	//*pf = 100.0;
//
//	return 0;
//}
////Ұָ��
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//		*(p++) = i;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	//printf("hehe\n");
//	//printf("asd\n");
//
//	if (*p != NULL)
//	{
//		printf("%d", *p);
//	}
//	return 0;
//}
//����Ұָ��
//1. ָ���ʼ��
//2. С��ָ��Խ��
//3. ָ��ָ��ռ��ͷţ���ʱ��NULL
//4. ���ⷵ�ؾֲ������ĵ�ַ
//5. ָ��ʹ��֮ǰ�����Ч��

////ָ��+-����=ָ��
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�����±��д��
//	//for (i = 0; i < 10; i++)
//	//{
//	//	arr[i] = 1;
//	//}
//	//int* p = arr;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = 1;
//	//}
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}

//ָ��-ָ��õ�ָ��֮��Ԫ�صĸ���   10-1=9
//ָ��ͬһ��ռ������ָ����ܼӼ�

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d", len);
//	return 0;
//}


//#define N_VALUES 5
//int main()
//{
//
//	float values[N_VALUES];
//	float* vp;
//	//ָ��+-������ָ��Ĺ�ϵ����
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//
//
//	//����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ����ǲ�������
//	//ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	//�����Ժ��
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;
//	}
//	return 0;
//}

//������������Ԫ�صĵ�ַ eg:arr
//ָ�����p����һ����������ŵ��ǵ�ַ
//ָ��*p,��ŵ�ַ��Ӧ��ֵ
//int main()
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9 };
//	//arr����Ԫ�صĵ�ַ
//	//&arr[0]
//	int* p = arr;
//	//ͨ��ָ������������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p <===> p+%d = %p\n", i, &arr[i], i, p + i);
//		//printf("%p------%p\n", &arr[i], p + i);
//		//printf("%d ", *(p++));
//	}
//	return 0;
//}

//void test(int* p, int sz)     //ָ����ʽ
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p++);
//		printf("%d ", *(p+i));  //����һ��
// 
//	}
//}
//void test(int arr[], int sz)     //������ʽ 
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr, 10);
//	return 0;
//}

////����ָ��
////����ָ��������������һ��ָ�������ַ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;    //pa һ��ָ�����
//	int** ppa = &pa; //ppa����ָ�����    int*˵��ppaָ��Ķ�����int*����
//	printf("%d", **ppa);
//	return 0;
//}

//ָ������  ���ָ����������ָ������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int arr[10];
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int* parr[10] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//	return 0;
//}
int main()
{
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 2,3,4,5 };
	int arr3[4] = { 3,4,5,6 };
	int* parr[3] = { arr1, arr2, arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", parr[i][j]);       //arr[i] <==>*(arr+i)
			//printf("%d ", (*(parr+i)[j])); //���治��
		}
		printf("\n");
	}

	return 0;
}