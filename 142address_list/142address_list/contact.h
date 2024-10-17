#pragma once
# define _CRT_SECURE_NO_WARNINGS 1


#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

//��̬������
#define DEFAULT_SZ 3 //��̬
#define INC_SZ 2 //��̬


#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30


//��������������

//�˵���Ϣ
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];

}PeoInfo;

//ͨѶ¼
////��̬�汾
//typedef struct Contact
//{
//	PeoInfo data[MAX];//����˵���Ϣ
//	int count;//��¼��ǰͨѶ¼��ʵ�ʵ��˵ĸ���
//}Contact;

//��̬�汾
//1.ͨѶ¼Ĭ��ֻ�ܴ��3���˵���Ϣ
//2.����ռ䲻���ˣ������ӿռ䣬ÿ�����������˵Ŀռ�
typedef struct Contact
{
	PeoInfo* data;//����˵���Ϣ
	int count;//��¼��ǰͨѶ¼��ʵ�ʵ��˵ĸ���
	int capacity;//��ǰͨѶ¼������

}Contact;

void menu();  //�˵�ѡ��

//void InitContact(Contact* pc);//��ʼ��ͨѶ¼  ��̬
int InitContact(Contact* pc);//��ʼ��ͨѶ¼  ��̬
void DestroyContact(Contact* pc);//����ͨѶ¼ ��̬

void AddContact(Contact* pc); //������ϵ�˵�ͨѶ¼
void DelContact(Contact* pc);//ɾ��ָ����ϵ��
void SearchContact(Contact* pc);//����ָ����ϵ��
void ModifyContact(Contact* pc);//�޸�ָ����ϵ��
void SortContact(Contact* pc);//����ͨѶ¼�е�����  ��������  ��������


void ShowContact(const Contact* pc);//��ʾͨѶ¼�е���Ϣ

void SaveContact(const Contact* pc);//����ͨѶ¼��Ϣ���ļ�


void LoadContact(Contact* pc);  //�����ļ���Ϣ��ͨѶ¼

