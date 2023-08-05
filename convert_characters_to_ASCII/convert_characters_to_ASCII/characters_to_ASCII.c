
#include <stdio.h>
int main()
{
	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof(arr)测的是整个数组的大小，单位是字节
	                                      //sizeof（arr[0]）测的是第一个元素的大小
	while (i < sz)
	{
		printf("%c", arr[i]);
		i++;

	}

	return 0;
}