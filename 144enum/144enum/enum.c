//ö��
#include<stdio.h>
enum Day
{
	Mon = 1,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};

//�ṹ��
struct S
{
	int a;
	char c;
};

int main()
{
	//enum Day d = Fri;//��ö�ٵķ�Χ�︳ֵ
	printf("%d\n", Mon);//0  1
	printf("%d\n", Tues);//1 2 
	printf("%d\n", Wed);//2  3
	printf("%d\n", Thur);//  4
	printf("%d\n", Fri);//   5
	printf("%d\n", Sat);//   6
	printf("%d\n", Sun);//   7



	return 0;
}