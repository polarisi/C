//关机程序
//程序运行起来后，一分钟后关机
//如果输入我是猪，则取消关机
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	//char input[20] = "";
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在一分钟之后关机，如果输入：我是猪，则取消关机\n");
	scanf("%s", input);
	if (strcmp(input , "我是猪") == 0)
		system("shutdown -a");
	else
		goto again;
	return 0;
}