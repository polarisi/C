//ʵ��һ��ͨѶ¼:
//�˵���Ϣ:���� + ���� + �Ա� + �绰 + ��ַ
//1.���100���˵���Ϣ
//2.������ϵ��
//3.ɾ��ָ����ϵ��
//4.������ϵ��
//5.�޸���ϵ��
//6.����
//7.��ʾ��ϵ��

//address_list.c ���Թ���
//contact.c      ͨѶ¼��ص�ʵ��
//contact.h      ͨѶ¼��ص�����


#include "contact.h"
//��̬�İ汾  
//��̬�İ汾
//�ļ��İ汾



enum option   //ö��
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
	Contact con;//ͨѶ¼
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��>");
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
			printf("�˳�ͨѶ¼\n");
			SaveContact(&con);
			DestroyContact(&con);
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}