#define _CRT_SECURE_NO_WARNINGS 1
/*描述
KiKi想知道一个n阶方矩是否为上三角矩阵，请帮他编程判定。上三角矩阵即主对角线以下的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线。
输入描述 :
第一行包含一个整数n，表示一个方阵包含n行n列，用空格分隔。(1<=n<=10)从2到n + 1行，每行输入n个整数(范围 - 2^31~2^31-1)，用空格分隔，共输入n*n个数。
输出描述 :
	一行，如果输入方阵是上三角矩阵输出"YES”并换行，否则输出"NO“并换行*/
// 输入：3
//1 2 3
//0 4 5
//0 0 6
//输出：YES
#include<stdio.h>
int main()
{
	int arr[10][10] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int flag = 1;
	int i = 0;
	int j = 0;
	for(i = 0; i <n; i++)
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	//判断
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
			{
				flag = 0;
				goto end;
			}
			
		}
	}

end:
	if (flag == 0)
	{
		printf("NO\n");
	}
	else
		printf("YES\n");
	return 0;
}