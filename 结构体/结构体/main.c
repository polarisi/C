#include <stdio.h>

typedef struct Birthday
{
	int year;
	int month;
	int day;

}Birthday;

// 1 �ṹ�� ����
struct Student
{
	//char name[10];
	
	char *name;

	int age;
	Birthday bir;  //�ṹ���Ƕ��
};

//�սṹ��  �޷�����ͨ��
//struct EmptyStruct
//{
//
//};

//�����ṹ��
struct 
{
	//char name[10];

	char* name;

	int age;
}S1, S2;

//// 2. typedef ʹ��  �ṹ��������ΪStudent
typedef struct Student Student;


//��д 1 2���
typedef struct Studentt
{
	//char name[10];

	char* name;

	int age;
}Studentt, SS; //�ض���Ϊ����������


//��ӡѧ���ṹ����Ϣ
void printStudentInfo(Student stu)
{
	printf("%s %d %d %d %d\n", stu.name, stu.age, stu.bir.year, stu.bir.month, stu.bir.day);

}

//�ṹ��ָ����Ϊ����
void printStudentInfo1(Student* stu)
{
	printf("%s %d %d %d %d\n", stu->name, stu->age, stu->bir.year, stu->bir.month, stu->bir.day);

}
int main()
{
	//1   ��������Ļ������� ��������+������  int a; float b; char c;
	struct Student S = { "����", 10 ,{10, 12, 13} };
	printf("%s %d %d %d %d\n", S.name, S.age, S.bir.year, S.bir.month, S.bir.day);


	// 2
	Student S3 = { "����", 111 ,{11, 2, 13} };
	printStudentInfo(S3);
	Student S4;
	S4 = S3;
	printStudentInfo(S4);


	//�����ṹ��ָ��
	Student* pStu1 = &S1;
	printStudentInfo1(pStu1);
	 

	//�ڴ���� 
	printf("���սṹ����ռ�ֽ���%d\n", (int)sizeof(Birthday));//3 * 4 = 12
	printf("ѧ���ṹ����ռ�ֽ���%d\n", (int)sizeof(Student));//24  ԭ�� �ڴ����  12�ı���


	//ѧ������
	Student students[] = 
	{
		{ "����", 10, {10, 12, 13} },
		{"����", 111, {11, 2, 13} }
	};
	printStudentInfo1(students);  //������  �������൱���׵�ַ
	printStudentInfo1(students+1);  //���ĵ� �ڶ���Ԫ�صĵ�ַ
	printStudentInfo1(&(students[1]));  //���ĵ�  �ڶ���Ԫ�� Ȼ����ȡ��ַ


	Studentt SSS = { "��", 1 };

	SS a = { "as", 15 };

	system("pause");
	system("cls");
	return 0;
}