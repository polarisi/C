#include<stdio.h>
//�ṹ�ĳ�Ա����ʹ���������顢ָ�룬���������������ṹ��
//struct Peo                  //���ͣ���ռ�ÿռ�
//{
//	char name[20];
//	char tele[20];
//	char sex[5];
//	int high;
//};
//int main()
//{
//	struct Peo p1 = {0};   //p1�ǽṹ������Ĵ���
//	return 0;
//}


struct Peo                  //���ͣ���ռ�ÿռ�
{
	char name[20];
	char tele[20];
	char sex[5];
	int high;
};

struct st
{
	struct Peo p;
	int num;
	float f;
};

//struct Peo                  //���ͣ���ռ�ÿռ�
//{
//	char name[20];
//	char tele[20];
//	char sex[5];
//	int high;
//}p3, p4;              //����
//struct Peo p5;        //���Ҳ�Ǵ���

void print1(struct Peo* ps)
{
	printf("%s, %s, %s, %d\n", ps->name, ps->tele, ps->sex, ps->high);   //�ṹ��ָ��->��Ա����
}
void print2(struct Peo p)
{
	printf("%s, %s, %s, %d\n", p.name, p.tele, p.sex, p.high);           //�ṹ�����.��Ա����
}
int main()
{
	struct Peo p1 = { "����", "12345678912", "��", 181 };
	struct st  s = {{"lisi", "15923647889", "��", 178},100, 3.14f };
	printf("%s, %s, %s, %d\n", p1.name, p1.tele, p1.sex, p1.high);
	printf("%s, %s, %s, %d, %d, %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);

	print1(&p1);   //����ַ
	print2(p1);    //���ṹ��
	//�������ε�ʱ�򣬲�������Ҫѹջ�ġ�
	//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½�
	//�ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ��
	return 0;
}