#include<stdio.h>
////λ�ο��Խ�ʡ�ռ�
// 
// λ��������������ô��ܴ�
// 
//struct S
//{
//	//4byte   ��Ϊ��int���ͣ�һ�ο����ĸ��ֽڣ������Ļ��ٿ���
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	//4byte
//	int _d : 30;
//
//
//};
////47
////6byte-48bit
////8byte-64bit
////������16byte
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}

struct A
{
	//����1byte-8bit
	char a : 3;
	char b : 4;
	//ʣ��1bit,�������ٿ���1byte
	char c : 5;
	//ʣ��3bit,�������ٿ���1byte
	char d : 4;
};

int main()
{
	printf("%d\n", sizeof(struct A));//3
	struct A s = { 0 };
	s.a = 10;  //1010 ȡ��λ 010
	s.b = 12;  //1100 ȡ��λ 1100
	s.c = 3;   //11   ����5λ00011  
	s.d = 4;   //100  ����4λ0100

	return 0;
}
//0110 0010    0000 0011    0000 0100    0000 0000
//a,b��λȻ����
//             c5λ����3��0
//                          d����4��0
//   62            03          04