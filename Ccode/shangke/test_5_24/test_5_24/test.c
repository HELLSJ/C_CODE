#include <cstddef>
#define _CRT_SECURE_NO_WARNINGS 1
//����һ��ѧ��
//����+����+�Ա�

//�����ṹ������
//struct Stu
//{
//	//��Ա���������������ṹ�������������
//	char name[20];
//	int age;
//	char sex[5];//�� Ů ����\0
//}s2,s3,s4;//s2,s3,s4���ǽṹ����� - ȫ�ֱ���
//
//int main()
//{
//	struct Stu s1;//�ֲ�����
//
//	return 0;
//}
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//}Stu;//������ṹ��������������һ�����ֽ�Stu
//
//
//int main()
//{
//	struct Stu s1;//�ֲ�����
//	Stu s2;//��Stu������s2��ʱ���s1�Ĵ�����һ������
//	//��C�����У����û�жԽṹ������typedef��struct�ؼ��ֲ���ʡ��
//	return 0;
//}
//struct S
//{
//	int a;
//	char arr[5];
//	int* p;
//}s1;//��һ�ֱ���������ʽ
//
//struct S s2;//�ڶ��ֱ���������ʽ
//
//struct B
//{
//	char ch[10];
//	struct S s;
//	double d;
//};
//
//int main()
//{
//	struct S s3 = { .arr = "abc", .p = NULL, .a = 1 };;//�����ֱ���������ʽ
//	return 0;
//}
////�����ֱ���������ʽ����typedef



//struct S
//{
//	int a;
//	char arr[5];
//	int* p;
//}s1 = {100, "bit", NULL};//Ҫ���ݳ�Ա˳����
//struct S s2 = { .arr = "abc", .p = NULL, .a = 1 };//�����������ð���˳����Ϊ˳�����Լ����Զ�

struct S
{
	int a;
	char arr[5];
	int* p;
};

int main()
{
	struct S s3 = { .arr = "abc", .p = NULL, .a = 1 };
	printf("%d %s %p", s3.a, s3.arr, s3.p);//.�ṹ��Ա���ʲ�����
	return 0;
}