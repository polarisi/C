//给定一个整数数组nums，其中恰好有两个元素只出现一次，其余所有元来均出现两次。找出只出现一次的那两个元来。你
//可以按任意顺序 返回答案。

#include <stdio.h>
void find_single_dog(int arr[], int sz, int *pd1, int *pd2)
{
	int i = 0;
	int ret = 0;
	//1.异或
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//2.计算ret的二进制中最右边的第几位是1
	int pos = 0;
	for (pos = 0; pos < 32; pos++)
	{
		if (((ret >> pos) & 1) == 1)
		{
			break;

		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			*pd1 ^= arr[i];

		}
		else
		{
			*pd2 ^= arr[i];
		}
	}
}


int main()
{
	//1 2 3 4 5 1 2 3 4 6
	//1 2 3 4 5 1 2 3 4
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
	//1 1 3 3 5
	//2 2 4 4 6
	
	//5^6 异或 相同为0，相异为1
	//101 - 5 B 1 1 3 3  按照最后一位不同分组
	//110 - 6 A 2 2 4 4
	//010
	//1.分组
	//1.所有数字异或
	//2.找出异或的结果数字中哪一位为1 - n
	//3.以第n位为1分一组，第n位为0分一组
	int sz = sizeof(arr) / sizeof(arr[0]);
	int dog1 = 0;
	int dog2 = 0;
	find_single_dog(arr, sz, &dog1, &dog2);
	printf("%d %d\n", dog1, dog2);

	return 0;
}