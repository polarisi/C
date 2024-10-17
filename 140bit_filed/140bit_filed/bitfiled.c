#include<stdio.h>
////位段可以节省空间
// 
// 位段在网络里面的用处很大
// 
//struct S
//{
//	//4byte   因为是int类型，一次开辟四个字节，不够的话再开辟
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
////本来是16byte
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}

struct A
{
	//开辟1byte-8bit
	char a : 3;
	char b : 4;
	//剩余1bit,不够，再开辟1byte
	char c : 5;
	//剩余3bit,不够，再开辟1byte
	char d : 4;
};

int main()
{
	printf("%d\n", sizeof(struct A));//3
	struct A s = { 0 };
	s.a = 10;  //1010 取三位 010
	s.b = 12;  //1100 取四位 1100
	s.c = 3;   //11   补齐5位00011  
	s.d = 4;   //100  补齐4位0100

	return 0;
}
//0110 0010    0000 0011    0000 0100    0000 0000
//a,b七位然后补零
//             c5位，补3个0
//                          d补齐4个0
//   62            03          04