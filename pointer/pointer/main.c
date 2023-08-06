#include<stdio.h>
//int main()
//{
//	//int a = 10;      //a是整形变量，占用4个字节空间
//	//int* pa = &a;    //pa是一个指针变量，用来存放地址；*pa用来存放指针里面的值
//	//指针本质上就是地址
//	//口语上说的指针是指针变量，指针变量就是一个变量，用来存放地址的一个变量，通过地址就可以找到一个内存单元
//	//指针32位是4个字节64位是8个字节
//	int a = 0x11223344;
//	//int* pa = &a;
//	int *pa = &a;
//	char* pc = (char*)&a;
//	//*pc = 0;
//	printf("pa = %d\n", pa);         //int加4个字节
//	printf("pa + 1 = %d\n", pa + 1);
//	printf("pc = %d\n", pc);         //char加一个字节
//	printf("pc + 1 = %d\n", pc + 1);
//	//指针的类型决定了指针+-1操作的时候跳过几个字节，也就是指针的步长
//	//指针的类型决定了指针在解引用的时候可以访问字节的个数，char*一个;int*4个
//	//int*和float*不可以通用，虽然他们大小一样，但是int*里面是整形数据，float*里面是浮点型数据
//	//int* pi = &a;
//	//float* pf = &a;
//	//*pi = 100;
//	//*pf = 100.0;
//
//	return 0;
//}
////野指针
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
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
//避免野指针
//1. 指针初始化
//2. 小心指针越界
//3. 指针指向空间释放，及时置NULL
//4. 避免返回局部变量的地址
//5. 指针使用之前检查有效性

////指针+-整数=指针
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//数组下标的写法
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

//指针-指针得到指针之间元素的个数   10-1=9
//指向同一块空间的两个指针才能加减

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
//	//指针+-整数；指针的关系运算
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//
//
//	//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与
//	//指向第一个元素之前的那个内存位置的指针进行比较
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	//化简以后的
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;
//	}
//	return 0;
//}

//数组名代表首元素的地址 eg:arr
//指针变量p，是一个变量，存放的是地址
//指针*p,存放地址对应的值
//int main()
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9 };
//	//arr是首元素的地址
//	//&arr[0]
//	int* p = arr;
//	//通过指针来访问数组
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

//void test(int* p, int sz)     //指针形式
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p++);
//		printf("%d ", *(p+i));  //两行一样
// 
//	}
//}
//void test(int arr[], int sz)     //数组形式 
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

////二级指针
////二级指针变量是用来存放一级指针变量地址的
//int main()
//{
//	int a = 10;
//	int* pa = &a;    //pa 一级指针变量
//	int** ppa = &pa; //ppa二级指针变量    int*说明ppa指向的对象是int*类型
//	printf("%d", **ppa);
//	return 0;
//}

//指针数组  存放指针的数组就是指针数组
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
			//printf("%d ", (*(parr+i)[j])); //下面不行
		}
		printf("\n");
	}

	return 0;
}