//实现一个通讯录:
//人的信息:名字 + 年龄 + 性别 + 电话 + 地址
//1.存放100个人的信息
//2.增加联系人
//3.删除指定联系人
//4.查找联系人
//5.修改联系人
//6.排序
//7.显示联系人

//address_list.c 测试功能
//contact.c      通讯录相关的实现
//contact.h      通讯录相关的声明


#include "contact.h"
//静态的版本  
//动态的版本
//文件的版本



enum option   //枚举
{
	EXIT,//0
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT

};

int main()
{
	int input = 0;
	Contact con;//通讯录
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			SaveContact(&con);
			DestroyContact(&con);
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}