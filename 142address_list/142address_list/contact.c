#include "contact.h"

void menu()
{
	printf("****************************************************\n");
	printf("********* 1.add       2.del     ********************\n");
	printf("********* 3.search    4.modify  ********************\n");
	printf("********* 5.show      6.sort    ********************\n");
	printf("********* 0.exit                ********************\n");
	printf("****************************************************\n");

}
////静态的版本
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	pc->count = 0;
//	memset(pc->data, 0, sizeof(pc->data));//设置内存
//
//}


void Check_capacity(Contact* pc)//增容
{
	if (pc->count == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{

			printf("AddContact::%s\n", strerror(errno));
			return;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("增容成功\n");
		}
		//printf("通讯录已满，无法添加\n");
		//return;
	}
}

void LoadContact(Contact* pc)//文件的方式
{
	FILE* pfRead = fopen("contact.txt", "rb");
	if (pfRead == NULL)
	{
		perror("LoadContact");
		return;
	}

	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead) == 1)
	{
		Check_capacity(pc);
		pc->data[pc->count] = tmp;
		pc->count++;
	}
	

	fclose(pfRead);
	pfRead = NULL;
}

//动态版本
int  InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	pc->data = (PeoInfo*)calloc(DEFAULT_SZ, sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		printf("InitContact::%s\n", strerror(errno));
		return 1;

	}
	pc->capacity = DEFAULT_SZ;

	//加载文件信息到通讯录
	LoadContact(pc);

	return 0;
	//memset(pc->data, 0, sizeof(pc->data));//设置内存

}

void DestroyContact(Contact* pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
}

//静态版本
//void AddContact(Contact* pc)
//{
//	assert(pc);
//	if (pc->count == 100)
//	{
//		printf("通讯录已满，无法添加\n");
//		return;
//	}
//	else
//	{
//		printf("请输入名字>");
//		scanf("%s", pc->data[pc->count].name);// 数组名就是首地址
//		printf("请输入年龄>");
//		scanf("%d", &(pc->data[pc->count].age));  //age 是整形变量，所以需要取地址
//		printf("请输入性别>");
//		scanf("%s", pc->data[pc->count].sex);
//		printf("请输入电话>");
//		scanf("%s", pc->data[pc->count].tele);
//		printf("请输入地址>");
//		scanf("%s", pc->data[pc->count].addr);
//
//		pc->count++;
//		printf("增加成功\n");
//	}
//}



//动态版本
void AddContact(Contact* pc)
{
	assert(pc);
	//增容
	Check_capacity(pc);
	
	
	printf("请输入名字>");
	scanf("%s", pc->data[pc->count].name);// 数组名就是首地址
	printf("请输入年龄>");
	scanf("%d", &(pc->data[pc->count].age));  //age 是整形变量，所以需要取地址
	printf("请输入性别>");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入电话>");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址>");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("增加成功\n");
	
}


void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\t\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\t\n",	pc->data[i].name, 
														pc->data[i].age, 
														pc->data[i].sex, 
														pc->data[i].tele, 
														pc->data[i].addr);      //不够的用空格填充
	}
	
}

static int FindByName(Contact* pc, char name[])  //加了static之后表示只能在.c文件内部看到
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}

	}

	return -1;
		
}

void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	int i = 0;
	if (pc->count == 0)
	{
		printf("通讯录为空，没有信息可以删除\n");
		return 0;
	}
	printf("请输入要删除人的名字：->");
	scanf("%s", name);
	//删除
	//1.查找
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//2.删除
	for (i = pos; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];

	}
	pc->count--;
	printf("删除成功\n");
}


void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	int i = 0;
	if (pc->count == 0)
	{
		printf("通讯录为空，没有信息可以查找\n");
		return 0;
	}
	printf("请输入要查找人的名字：->");
	scanf("%s", name);
	
	//1.查找
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	//打印
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\t\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\t\n", pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}


void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	int i = 0;
	if (pc->count == 0)
	{
		printf("通讯录为空，没有信息可以修改\n");
		return 0;
	}
	printf("请输入要修改人的名字：->");
	scanf("%s", name);

	//1.查找
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	//修改
	else
	{
		printf("要修改的人的信息已经查询到，接下来开始修改\n");
		printf("请输入名字>");
		scanf("%s", pc->data[pos].name);// 数组名就是首地址
		printf("请输入年龄>");
		scanf("%d", &(pc->data[pos].age));  //age 是整形变量，所以需要取地址
		printf("请输入性别>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址>");
		scanf("%s", pc->data[pos].addr);

		printf("修改成功\n");
	}

}



int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
void SortContact(Contact* pc)//排序联系人  按照名字
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
	printf("排序成功\n");
}


void SaveContact(const Contact* pc)
{
	assert(pc);
	FILE* pfwrite = fopen("contact.txt", "wb");
	if (pfwrite == NULL)
	{
		perror("SaveContact");
		return;
	}

	//写文件-二进制的形式写
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pfwrite);
	}



	fclose(pfwrite);
	pfwrite = NULL;
}