//ʵ��һ����������������ת�ַ����е�k���ַ�

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//void left_rorate(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	k %= len;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < len; j++)
//		{
//			arr[j] = arr[j + 1];
//
//		}
//		arr[len - 1] = tmp;
//	}
//}
#include<assert.h>
reverse(char* left, char* right)
{
	assert(left && right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}

}
void left_rorate(char arr[], int k)
{
	int len = strlen(arr);
	k %= len;
	reverse(arr, arr+k - 1);//��ߵߵ�
	reverse(arr+k, arr+len - 1);//�ұߵߵ�
	reverse(arr, arr+len - 1);//����ߵ�

}
//arr[0] ��ʾ arr ����ĵ�һ���ַ����� arr[k - 1] ��ʾ����ĵ� k ���ַ�����Щֵ�Ǿ�����ַ���������ָ�롣
//reverse �����Ĳ����� char* ���͵�ָ�룬ָ���ڴ��е�λ�á�reverse(arr[0], arr[k - 1]) ʵ�����Ǵ������ַ�����������ָ���ַ���ָ�룬��ᵼ�±�������δ������Ϊ
//reverse(arr[0], arr[k - 1]) �Ǵ���ģ���Ϊ�����ݵ��Ǿ����ַ�������ָ�롣reverse(arr, arr + k - 1) ������ȷ����ʽ����Ϊ��������ָ���ַ���ָ��
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_rorate(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}

//�ж�һ���ַ����ܷ�������һ���ַ�����ת�õ�
// ����1�����
//int is_left_move(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = arr1[0];
//		int j = 0;
//		for (j = 0; j < len; j++)
//		{
//			arr1[j] = arr1[j + 1];
//	
//		}
//		arr1[len - 1] = tmp;
//
//		if (strcmp(arr2, arr1) == 0)
//			return 1;
//	}
//	return 0;
//}

//����2
int is_left_move(char arr1[], char arr2[])
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
	{
		return 0;
	}
	strncat(arr1, arr1, strlen(arr1));
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	char arr1[20] = "abcdef"; 
	//abcdefabcdef
	//bcdefa

	char arr2[] = "cdefab";//�ж�arr2�е��ַ����Ƿ����ͨ��arr1�е��ַ�����ת�õ�
	int ret =is_left_move(arr1,arr2);
	if(ret == 1)
		printf("ok\n");
	else
		printf("No\n");
	return 0;
}
