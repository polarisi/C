#include <stdio.h>

typedef struct Birthday
{
	int year;
	int month;
	int day;

}Birthday;

// 1 结构体 定义
struct Student
{
	//char name[10];
	
	char *name;

	int age;
	Birthday bir;  //结构体的嵌套
};

//空结构体  无法编译通过
//struct EmptyStruct
//{
//
//};

//匿名结构体
struct 
{
	//char name[10];

	char* name;

	int age;
}S1, S2;

//// 2. typedef 使用  结构体重命名为Student
typedef struct Student Student;


//简写 1 2结合
typedef struct Studentt
{
	//char name[10];

	char* name;

	int age;
}Studentt, SS; //重定义为这两个名字


//打印学生结构体信息
void printStudentInfo(Student stu)
{
	printf("%s %d %d %d %d\n", stu.name, stu.age, stu.bir.year, stu.bir.month, stu.bir.day);

}

//结构体指针作为参数
void printStudentInfo1(Student* stu)
{
	printf("%s %d %d %d %d\n", stu->name, stu->age, stu->bir.year, stu->bir.month, stu->bir.day);

}
int main()
{
	//1   定义变量的基本类型 数据类型+变量名  int a; float b; char c;
	struct Student S = { "张三", 10 ,{10, 12, 13} };
	printf("%s %d %d %d %d\n", S.name, S.age, S.bir.year, S.bir.month, S.bir.day);


	// 2
	Student S3 = { "李四", 111 ,{11, 2, 13} };
	printStudentInfo(S3);
	Student S4;
	S4 = S3;
	printStudentInfo(S4);


	//声明结构体指针
	Student* pStu1 = &S1;
	printStudentInfo1(pStu1);
	 

	//内存计算 
	printf("生日结构体所占字节数%d\n", (int)sizeof(Birthday));//3 * 4 = 12
	printf("学生结构体所占字节数%d\n", (int)sizeof(Student));//24  原因 内存对齐  12的倍数


	//学生数组
	Student students[] = 
	{
		{ "张三", 10, {10, 12, 13} },
		{"李四", 111, {11, 2, 13} }
	};
	printStudentInfo1(students);  //张三的  数组名相当于首地址
	printStudentInfo1(students+1);  //李四的 第二个元素的地址
	printStudentInfo1(&(students[1]));  //李四的  第二个元素 然后再取地址


	Studentt SSS = { "在", 1 };

	SS a = { "as", 15 };

	system("pause");
	system("cls");
	return 0;
}