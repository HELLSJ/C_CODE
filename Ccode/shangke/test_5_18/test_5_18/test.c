#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 100;
//	int* pa = &a;//pa��ר��������ŵ�ַ��ָ�룩�ģ������pa�ͱ���Ϊָ�����
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
//	for (i = 0; i <= 11; i++)//�����11���Գ�������ķ�Χ
//	{
//		*(p++) = i;//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
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
//	int* ptr = NULL;//NULL��ʵ����0
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	//�������±��������
//	int* p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		*p = i;
//		p++;//���ĸ��ֽڵ���һ����ַ
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
//		s++;//�����s++�ǵ�ַ���ϵ�������ӣ�Ҳ����ָ�벻��������Ų
//		//����û��Ҫ��sǰ������ã���Ϊ���������ҵ�sָ��ռ�����ݣ�û������
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
//	while (*s)//a b c d e f \0->0��ASCII��ֵ:0��0�ӽ�ȥΪ�٣�ѭ��Ҳ����ͣ��
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
//p���Լ�ָ�������ָ�����Ҳ�Ǳ��������������ڴ濪�ٿռ�ģ��б������е�ַ
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	*(*pp) = 100;//������
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
//	char** p = parr;//��ŵ�����Ԫ��Ҳ����arr1�ĵ�ַ
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "hello world";
//	char arr3[] = "cui hua";
//
//	//ָ������
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