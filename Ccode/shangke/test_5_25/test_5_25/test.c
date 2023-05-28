#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
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

//struct S
//{
//	int a;
//	char arr[5];
//	int* p;
//};
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
//	struct S s3 = { .arr = "abc", .p = NULL, .a = 1 };
//	printf("%d %s %p", s3.a, s3.arr, s3.p);//.结构成员访问操作符
//	struct B sb = { "hello", {20, "qqq", NULL}, 3.14};
//	printf("%s %d %s %p %.2lf\n", sb.ch, sb.s.a, sb.s.arr, sb.s.p, sb.d);
//	return 0;
//}


#include <string.h>//字符串操作需要加这一句

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void set_stu(struct Stu t)
//{
//	t.age = 20;
//	//t.name = "张三";//error 因为这里的“张三”是地址，这就不对了，我们应该把张三放到name申请的空间里面
//	strcpy(t.name, "张三");//字符串拷贝
//}
//
//void print_stu(struct Stu t)
//{
//	printf("%s %d\n", t.name, t.age);
//}
//
//int main()
//{
//	struct Stu s = {0};
//	set_stu(s);//设置s的值
//	print_stu(s);
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
////方式1
////void set_stu(struct Stu* ps)
////{
////	(*ps).age = 20;
////	//t.name = "张三";//err
////	strcpy((*ps).name, "张三");//字符串拷贝
////}
////方式2
//void set_stu(struct Stu* ps)
//{
//	ps->age = 20;//结构体指针->结构体成员
//	//t.name = "张三";//err
//	strcpy(ps->name, "张三");//字符串拷贝
//}
//
//
//void print_stu(struct Stu t)
//{
//	printf("%s %d\n", t.name, t.age);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//	return 0;
//}

//struct S
//{
//	int data[1000];
//	int num;
//};
//
//struct S s = { {1,2,3,4},1000 };
//
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//
//int main()
//{
//	print1(s);//传结构体
//	print2(&s);//传地址
//	return 0;
//}
//写一个函数返回参数二进制中 1 的个数。
//比如： 15    00001111    4 个 1
//
//int number_of_1(unsigned int m)
//{
//	int count = 0;
//	while (m)
//	{
//		if (m % 2 == 1)
//			count++;
//		m /= 2;
//	}
//	return count;
//}


//int number_of_1(int m)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//
//int number_of_1(int m)
//{
//	int count = 0;
//	while (m)
//	{
//		m = m & (m - 1);
//		count++;
//	}
//	return count;
//}
// n = n&(n-1)  这个表达式会让n的二进制中最右边的1消失
// 14-->1110
// n-->1110
// n-1-->1101
// n&(n-1) = n -->1100
// 相与后的n-1 -->1011
// 再相与n-->1000
// n-1-->0111
// 再相与n -->0000
//
//int main()
//{
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111--> 32
//	int n = 0;
//	scanf("%d", &n);//15
//	int ret = number_of_1(n);
//	printf("%d\n", ret);//4
//	return 0;
//}
//

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//30 28 26 ... 4 2 0
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//
//	return 0;
//}
//

//
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//

//int number_of_1(int m)
//{
//	int count = 0;
//	while (m)
//	{
//		m = m & (m - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	//异或 - 相同为0，相异为1
//	int ret = number_of_1(m ^ n);
//	printf("%d\n", ret);
//
//	return 0;
//}
////