#include<stdio.h>
//结构的成员可以使标量、数组、指针，甚至可以是其他结构体
//struct Peo                  //类型，不占用空间
//{
//	char name[20];
//	char tele[20];
//	char sex[5];
//	int high;
//};
//int main()
//{
//	struct Peo p1 = {0};   //p1是结构体变量的创建
//	return 0;
//}


struct Peo                  //类型，不占用空间
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

//struct Peo                  //类型，不占用空间
//{
//	char name[20];
//	char tele[20];
//	char sex[5];
//	int high;
//}p3, p4;              //创建
//struct Peo p5;        //这个也是创建

void print1(struct Peo* ps)
{
	printf("%s, %s, %s, %d\n", ps->name, ps->tele, ps->sex, ps->high);   //结构体指针->成员变量
}
void print2(struct Peo p)
{
	printf("%s, %s, %s, %d\n", p.name, p.tele, p.sex, p.high);           //结构体变量.成员变量
}
int main()
{
	struct Peo p1 = { "张三", "12345678912", "男", 181 };
	struct st  s = {{"lisi", "15923647889", "男", 178},100, 3.14f };
	printf("%s, %s, %s, %d\n", p1.name, p1.tele, p1.sex, p1.high);
	printf("%s, %s, %s, %d, %d, %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);

	print1(&p1);   //传地址
	print2(p1);    //传结构体
	//函数传参的时候，参数是需要压栈的。
	//如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降
	//结构体传参的时候，要传结构体的地址。
	return 0;
}