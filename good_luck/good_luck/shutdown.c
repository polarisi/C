//�ػ�����
//��������������һ���Ӻ�ػ�
//���������������ȡ���ػ�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	//char input[20] = "";
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ���һ����֮��ػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input , "������") == 0)
		system("shutdown -a");
	else
		goto again;
	return 0;
}