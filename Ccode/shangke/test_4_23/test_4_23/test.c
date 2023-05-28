#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("***************************\n");
//	printf("***** 1.play   0.exit *****\n");
//	printf("***************************\n");
//}
////void srand (unsigned int seed)
//void game()
//{
//	RAND_MAX;//最大值0x7fff也就是32767
//	//1.生成随机数
//	int ret = rand() % 100 + 1; //可以生成随机数，随机数的范围是：1~100
//	/*printf("%d\n", ret);*/
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}	
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	//打印菜单
//	//1.玩游戏
//	//0.退出游戏
//	int input = 0;
//	srand((unsigned int)time(NULL));//要给srand传递一个变化的值，我们想到时间戳
//	//time函数可以返回一个时间戳
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);//1 0
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	}while (input);
//	return 0;
//}

//void test()
//{
//flag:
//	printf("test\n");
//}
//int main()
//{
//
//	printf("hehe\n");
//	goto flag;
//	return 0;
//}
//关机程序
//1.程序运行起来1分钟后电脑关机
//2.如果输入：我是猪，就取消关机
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
//int main()
//{
//	char input[20] = { 0 };
//	//程序倒计时关机
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//}
//#include <math.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int k = (m > n ? n : m);
//	while (1)
//	{
//		if (m % k == 0 && n % k == 0)
//		{
//			break;
//		}
//		k--;
//	}
//	printf("%d", k);
//	return 0;
//}
//int main()
//{
//	int i, j, k;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			k = i * j;
//			printf("%d*%d=%d\n", i, j, k);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int max = 0;
//	int arr[10] = { 0 };
//	for (n = 0; n < 10; n++)
//	{
//		scanf("%d", &arr[n]);
//	}
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int n = 0;
//	double ret = 0.0;
//	for (n = 1; n <= 100; n++)
//	{
//		ret = ret + i * 1.0 / n;
//		i = -i;
//	}
//	printf("%lf", ret);
//	return 0;
//}
//int main()
//{
//	
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (9 == i % 10 || 9 == i / 10)
//			count += 1;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	scanf("%d", &k);
//	int left = 0;
//	int right = sz - 1;
//	int flag = 0;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == k)
//		{
//			printf("找到了,数组下标是：%d",mid);
//			flag = 1;
//			break;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//	if (flag == 0)
//		printf("没找到\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	long long n = 0;
//	scanf("%d", &n);
//	int res = 0;
//	for (i = 1; i <= n; i++)
//	{
//		res = res + i;
//	}
//	printf("%d", res);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int max = 0;
//	int arr[10] = { 0 };
//	for (n = 0; n < 4; n++)
//	{
//		scanf("%d", &arr[n]);
//	}
//	for (i = 0; i <= 4; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	char c;
//	while ((c = getchar()) != EOF)
//	{
//		if (('c' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
//		{
//			printf("%c is an alphabet.\n",c);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", c);
//		}
//		getchar();
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float val = 0;
//	int month = 0;
//	int day = 0;
//	int yh = 0;
//	scanf("%lf %d %d %d", val, month, day, yh);
//	if (yh == 1)
//	{
//		if (month = 11 && day == 11)
//		{
//			val = val * 0.7 - 50;
//		}
//		else if (month == 12 && day == 12)
//		{
//			val = val * 0.8 - 50;
//		}
//	}
//	else
//	{
//		if (month = 11 && day == 11)
//		{
//			val = val * 0.7 ;
//		}
//		else if (month == 12 && day == 12)
//		{
//			val = val * 0.8 ;
//		}
//	}
//	
//	printf("%lf", val);
//	return 0;
//}
//void multiply(int n)
//{
//	int i, j, k;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			k = i * j;
//			printf("%d*%d=%d\t", i, j, k);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	multiply(m);
//	return 0;
//}
//void swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//	printf("%d %d", x, y);
//}
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	swap(x, y);
//	return 0;
//}

//void panduan(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//		printf("这一年是闰年");
//	else
//		printf("这一年不是闰年哦~");
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	panduan(n);
//	return 0;
//}
#include <math.h>
void panduan(int i)
{
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("这个是个素数");
			break;
		}	
		else
		{
			printf("这个不是素数");
			break;
		}
	}
}
int main()
{
	int i;
	scanf("%d", &i);
	panduan(i);
	return 0;
}
