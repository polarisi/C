#include<stdio.h>

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = '\0';
//}
void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)
	{
		;
	}
}

int main()
{
	char arr1[] = "XXXXXXXXXX";
	char arr2[] = "hello bit ";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}