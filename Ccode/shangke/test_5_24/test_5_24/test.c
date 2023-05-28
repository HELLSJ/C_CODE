#include <cstddef>
#define _CRT_SECURE_NO_WARNINGS 1
//描述一个学生
//名字+年龄+性别

//声明结构体类型
//struct Stu
//{
//	//成员变量，用来描述结构体对象的相关属性
//	char name[20];
//	int age;
//	char sex[5];//男 女 保密\0
//}s2,s3,s4;//s2,s3,s4就是结构体变量 - 全局变量
//
//int main()
//{
//	struct Stu s1;//局部变量
//
//	return 0;
//}
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//}Stu;//对这个结构体类型重新起了一个名字叫Stu
//
//
//int main()
//{
//	struct Stu s1;//局部变量
//	Stu s2;//用Stu来创建s2的时候跟s1的创建是一个道理
//	//在C语言中，如果没有对结构体类型typedef，struct关键字不能省略
//	return 0;
//}
//struct S
//{
//	int a;
//	char arr[5];
//	int* p;
//}s1;//第一种变量创建方式
//
//struct S s2;//第二种变量创建方式
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
//	struct S s3 = { .arr = "abc", .p = NULL, .a = 1 };;//第三种变量创建方式
//	return 0;
//}
////第四种变量创建方式就是typedef



//struct S
//{
//	int a;
//	char arr[5];
//	int* p;
//}s1 = {100, "bit", NULL};//要根据成员顺序来
//struct S s2 = { .arr = "abc", .p = NULL, .a = 1 };//这样创建不用按照顺序，因为顺序你自己可以定

struct S
{
	int a;
	char arr[5];
	int* p;
};

int main()
{
	struct S s3 = { .arr = "abc", .p = NULL, .a = 1 };
	printf("%d %s %p", s3.a, s3.arr, s3.p);//.结构成员访问操作符
	return 0;
}