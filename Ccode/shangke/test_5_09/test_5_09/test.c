#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//创建数组不能用变量
//	arr[5];//下标引用操作符
//	/*printf("%d\n", arr[5]);*/
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//访问元素可以使用变量,下标从0开始
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//创建数组不能用变量
//	arr[5];//下标引用操作符
//	/*printf("%d\n", arr[5]);*/
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n",i,&arr[i]);//查看每个元素地址
//	}
//	return 0;
//}
//int main()
//{
//	int arr[4][5];
//	char ch[3][8];
//	return 0;
//}
//int main()
//{
//	//二维数组的初始化
//	int arr[4][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{5,6,7,8,9} };
//	//二位数组即使初始化了
//	//行可以省略但是列不能省略
//	int arr2[][] = 
//
//	return 0;
//}
//int main()
//{
//	int arr[4][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{5,6,7,8,9} };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[4][5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);
//		}
//	}
//	return 0;
//}
//越界访问
//int main()
//{
//	int arr[4][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
void bubble_sort(int* arr, int sz)//这里的arr的本质是指针
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		//每一趟开始前就假设已经有序了
		int flag = 1;
		//一趟每部比较的对数
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}

		if (flag == 1)
			break;
	}
}

int main()
{
	int arr[10] = { 0 };
	//输入
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	//冒泡排序 - 升序
	//趟数
	//arr作为数组进行了传参
	//数组传参，传递的是地址,传递的是首元素的地址
	//
	bubble_sort(arr, sz);//arr 是数组首元素的地址

	//输出
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}


//数组名该怎么理解？
//数组名通常情况下就是数组首元素的地址
//但是有2个例外：
//1. sizeof(数组名)，数组名单独放在sizeof()内部，这里的数组名表示整个数组，计算的是整个数组的大小
//2. &数组名，这里的数组名也表示整个数组，这里取出的是整个数组的地址
//除此之外所有遇到的数组名都表示数组首元素的地址
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//数组的地址
//	printf("%p\n", &arr+1);//+1，跳过整个数组
//
//	//printf("%d\n", sizeof(arr));
//	return 0;
//}
