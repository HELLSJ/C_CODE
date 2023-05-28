#define 
//#include<stdio.h>
//int main()
//{
//	printf("hello bit\n");
//	return 0;
//}
//代码一般是从main函数开始写的
#include <stdio.h>
//C语言中main函数是程序的入口
//程序是从main函数第一行开始执行的
//main函数有且只有一个
int main()
{
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;//返回0，0是一个整型
}
//printf是一个库函数
//双引号表示字符串
//在使用之前要使用头文件stdio.h
//sizeof