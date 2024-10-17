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
////��̬�İ汾
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	pc->count = 0;
//	memset(pc->data, 0, sizeof(pc->data));//�����ڴ�
//
//}


void Check_capacity(Contact* pc)//����
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
			printf("���ݳɹ�\n");
		}
		//printf("ͨѶ¼�������޷����\n");
		//return;
	}
}

void LoadContact(Contact* pc)//�ļ��ķ�ʽ
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

//��̬�汾
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

	//�����ļ���Ϣ��ͨѶ¼
	LoadContact(pc);

	return 0;
	//memset(pc->data, 0, sizeof(pc->data));//�����ڴ�

}

void DestroyContact(Contact* pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
}

//��̬�汾
//void AddContact(Contact* pc)
//{
//	assert(pc);
//	if (pc->count == 100)
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//	else
//	{
//		printf("����������>");
//		scanf("%s", pc->data[pc->count].name);// �����������׵�ַ
//		printf("����������>");
//		scanf("%d", &(pc->data[pc->count].age));  //age �����α�����������Ҫȡ��ַ
//		printf("�������Ա�>");
//		scanf("%s", pc->data[pc->count].sex);
//		printf("������绰>");
//		scanf("%s", pc->data[pc->count].tele);
//		printf("�������ַ>");
//		scanf("%s", pc->data[pc->count].addr);
//
//		pc->count++;
//		printf("���ӳɹ�\n");
//	}
//}



//��̬�汾
void AddContact(Contact* pc)
{
	assert(pc);
	//����
	Check_capacity(pc);
	
	
	printf("����������>");
	scanf("%s", pc->data[pc->count].name);// �����������׵�ַ
	printf("����������>");
	scanf("%d", &(pc->data[pc->count].age));  //age �����α�����������Ҫȡ��ַ
	printf("�������Ա�>");
	scanf("%s", pc->data[pc->count].sex);
	printf("������绰>");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ַ>");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("���ӳɹ�\n");
	
}


void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\t\n",	pc->data[i].name, 
														pc->data[i].age, 
														pc->data[i].sex, 
														pc->data[i].tele, 
														pc->data[i].addr);      //�������ÿո����
	}
	
}

static int FindByName(Contact* pc, char name[])  //����static֮���ʾֻ����.c�ļ��ڲ�����
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
		printf("ͨѶ¼Ϊ�գ�û����Ϣ����ɾ��\n");
		return 0;
	}
	printf("������Ҫɾ���˵����֣�->");
	scanf("%s", name);
	//ɾ��
	//1.����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//2.ɾ��
	for (i = pos; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];

	}
	pc->count--;
	printf("ɾ���ɹ�\n");
}


void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	int i = 0;
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ�û����Ϣ���Բ���\n");
		return 0;
	}
	printf("������Ҫ�����˵����֣�->");
	scanf("%s", name);
	
	//1.����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	//��ӡ
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
		printf("ͨѶ¼Ϊ�գ�û����Ϣ�����޸�\n");
		return 0;
	}
	printf("������Ҫ�޸��˵����֣�->");
	scanf("%s", name);

	//1.����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	//�޸�
	else
	{
		printf("Ҫ�޸ĵ��˵���Ϣ�Ѿ���ѯ������������ʼ�޸�\n");
		printf("����������>");
		scanf("%s", pc->data[pos].name);// �����������׵�ַ
		printf("����������>");
		scanf("%d", &(pc->data[pos].age));  //age �����α�����������Ҫȡ��ַ
		printf("�������Ա�>");
		scanf("%s", pc->data[pos].sex);
		printf("������绰>");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ>");
		scanf("%s", pc->data[pos].addr);

		printf("�޸ĳɹ�\n");
	}

}



int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
void SortContact(Contact* pc)//������ϵ��  ��������
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
	printf("����ɹ�\n");
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

	//д�ļ�-�����Ƶ���ʽд
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pfwrite);
	}



	fclose(pfwrite);
	pfwrite = NULL;
}