#pragma once
# define _CRT_SECURE_NO_WARNINGS 1


#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

//动态新增的
#define DEFAULT_SZ 3 //动态
#define INC_SZ 2 //动态


#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30


//类型在这里声明

//人的信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];

}PeoInfo;

//通讯录
////静态版本
//typedef struct Contact
//{
//	PeoInfo data[MAX];//存放人的信息
//	int count;//记录当前通讯录中实际的人的个数
//}Contact;

//动态版本
//1.通讯录默认只能存放3个人的信息
//2.如果空间不够了，就增加空间，每次增加两个人的空间
typedef struct Contact
{
	PeoInfo* data;//存放人的信息
	int count;//记录当前通讯录中实际的人的个数
	int capacity;//当前通讯录的容量

}Contact;

void menu();  //菜单选项

//void InitContact(Contact* pc);//初始化通讯录  静态
int InitContact(Contact* pc);//初始化通讯录  动态
void DestroyContact(Contact* pc);//销毁通讯录 动态

void AddContact(Contact* pc); //增加联系人到通讯录
void DelContact(Contact* pc);//删除指定联系人
void SearchContact(Contact* pc);//查找指定联系人
void ModifyContact(Contact* pc);//修改指定联系人
void SortContact(Contact* pc);//排序通讯录中的内容  按照名字  按照年龄


void ShowContact(const Contact* pc);//显示通讯录中的信息

void SaveContact(const Contact* pc);//保存通讯录信息到文件


void LoadContact(Contact* pc);  //加载文件信息到通讯录

