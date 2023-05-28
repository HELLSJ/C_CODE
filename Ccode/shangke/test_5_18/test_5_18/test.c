#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 100;
//	int* pa = &a;//pa是专门用来存放地址（指针）的，这里的pa就被称为指针变量
//	/*int arr[10];
//	printf("%p\n", &a);*/
//	return 0;
//}

//int main()
//{
//	int a = 100;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%d\n",sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc + 1);
//	*pa = 0;
//	return 0;
//}


//int main()
//{
//	int* p;
//	*p = 20;
//	printf("%d\n", *p);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)//这里的11明显超出数组的范围
//	{
//		*(p++) = i;//当指针指向的范围超出数组arr的范围时，p就是野指针
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 110;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int* ptr = NULL;//NULL其实就是0
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	//不适用下标访问数组
//	int* p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		*p = i;
//		p++;//加四个字节到下一个地址
//	}
//	p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	/*for (i = 0; i < 10 ; i++)
//	{
//		printf("%d", arr[i]);
//	}*/
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i[arr]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n",&arr[9] - &arr[0]);
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	printf("%d\n", &arr[9] - &ch[0]);
//	return 0;
//}
//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;//这里的s++是地址不断地往后面加，也就是指针不断往后面挪
//		//这里没必要在s前面解引用，因为解引用是找到s指向空间或内容，没有意义
//	}
//	return count;
//}
//int my_strlen(char* s)
//{
//	char* start = s;
//	while (*s != '\0')
//	{
//		s++;
//	}
//	return s - start;
//}
//
//int my_strlen(char* s)
//{
//	char* start = s;
//	while (*s)//a b c d e f \0->0的ASCII码值:0，0扔进去为假，循环也就暂停了
//	{
//		s++;
//	}
//	return s - start;
//}

//int my_strlen(char* s)
//{
//	char* start = s;
//	while (*s++);
//	return s - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp == &values[N_VALUES-1]; vp > &values[0];vp--)
//	{
//		*vp = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		/*printf("%p == %p\n", p+i, &arr[i]);*/
//
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d ", &arr);
//	return 0;
//}
//p是以及指针变量，指针变量也是变量，变量是在内存开辟空间的，有变量就有地址
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	*(*pp) = 100;//解引用
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "hello world";
//	char arr3[] = "cui hua";
//
//	char* parr[] = { arr1, arr2, arr3 };
//	char** p = parr;//存放的是首元素也就是arr1的地址
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "hello world";
//	char arr3[] = "cui hua";
//
//	//指针数组
//	char* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", parr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = {arr1, arr2, arr3};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}