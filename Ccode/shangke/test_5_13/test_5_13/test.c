#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//
//int main() 
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//
//    printf("交换前: a=%d, b=%d\n", a, b);
//
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//
//    printf("交换后: a=%d, b=%d\n", a, b);
//
//    return 0;
//}
//#include <stdio.h>
//
//int countOnes(unsigned int num) 
//{
//    int count = 0;
//    while (num != 0) 
//    {
//        count += num & 1; // 判断最低位是否为1
//        num >>= 1; // 将num右移一位，相当于去掉了最低位
//    }
//    return count;
//}
//
//int main() 
//{
//    unsigned int num;
//    scanf("%u", &num);
//    
//    printf("%d\n", countOnes(num));
//    return 0;
//}
// 
//int main()
//{
//	//int r = 7 / 2;
//	//printf("r = %d\n", r);
//	//double d = 7 / 2;
//	//printf("d = %lf\n", d);//3.5?
//
//
//	double d = 7.0 / 2.0;
//	printf("%lf\n", d);//3.5?
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int r = 5 / n;
//	return 0;
//}


//int main()
//{
//	int r = 15 % 8;//% 得到是整除后的余数
//	printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int a = 15;
	
//	
//	int b = -15;

//
//	//整数在内存中存储的是补码
//	//计算的时候也是用补码计算的
//}

//int main()
//{
//	int a = 15;
//	int b = a >> 1;
//	printf("%d\n", b);//7
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = -15;
//	int b = a >> 1;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//    int a = 6;
//    //左移操作符 - 左边丢弃，右边补0
//    //[00000000000000000000000000000110] - 6的补码
//    //[00000000000000000000000000001100] - 补码 - 12
//    //
//    int b = a << 1;
//    printf("%d\n", b);
//    printf("%d\n", a);
//
//    //a = a << 1;
//    //a <<= 1;
//
//
//    return 0;
//}
//}
//int main()
//{
//	int a = 5;
//	int b = a >> -2;//标准未定义行为
//
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011--补码
//	int b = -5;
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011--补码
//	int c = a & b;
//	//& -- 对应二进制位有0则为0，两个同时为1才是1
//	//00000000000000000000000000000011
//	//11111111111111111111111111111011
//	//00000000000000000000000000000011 -- 3
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011--补码
//	int b = -5;
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011--补码
//	int c = a | b;
//	//| -- 按（2进制）位或 - 对应的二进制位有1则1，两个同时位0才是0
//	//00000000000000000000000000000011
//	//11111111111111111111111111111011
//	//11111111111111111111111111111011 -- c的补码
//	//11111111111111111111111111111010
//	//10000000000000000000000000000101 - -5
//	printf("%d\n", c);//-5
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011--补码
//	int b = -5;
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011--补码
//	int c = a ^ b;
//	//^ - 按二进制位异或 - 对应的二进制位相同为0，相异为1
//	//00000000000000000000000000000011
//	//11111111111111111111111111111011
//	//11111111111111111111111111111000 -- c的补码
//	//11111111111111111111111111110111
//	//10000000000000000000000000001000 - -8
//	printf("%d\n", c);//-8
//	return 0;
//}

//交换2个整型变量
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前:a=%d,b=%d\n", a, b);
//	/*int tmp = a;
//	a = b;
//	b = tmp;*///常规
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*///如果a和b特别大，超出范围，可能会被截断某些比特位
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后:a=%d,b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	//a ^ a = 0
//	//a ^ 0 = a
//	//异或是支持交换律的
//	//a ^ b ^ a
//	//011  a
//	//101  b
//	//110  a ^ b
//	//011  a
//	//101  (a ^ b) ^ a
//	//a ^ a ^ b = 5
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;//a ^ (a ^ b) = b
//	return 0;
//}

//int main()
//{
//	int flag = 5;
//	if (flag == 0)
//	{
//		printf("hehe\n");
//	}
//	if (!flag)//flag 为假，打印hehe
//	{
//		printf("hehe\n");
//	}
//	if (flag)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;//取出a的地址
//	return 0;
//}

//#include <stdio.h>
//
//int main() 
//{
//    int num = 1234567890;  // 假设我们要获取该整数的二进制序列的偶数位和奇数位
//    int even = 0, odd = 0;
//
//    // 获取偶数位
//    for (int i = 0; i < 32; i += 2) 
//    {
//        even |= ((num >> i) & 1) << (i / 2);
//    }
//
//    // 获取奇数位
//    for (int i = 1; i < 32; i += 2) 
//    {
//        odd |= ((num >> i) & 1) << ((i - 1) / 2);
//    }
//
//    // 打印结果
//    printf("even: %u\n", even);
//    printf("odd: %u\n", odd);
//
//    return 0;
//}
//int main()
//{
//	int a = 10;
//	pa是指针变量
//	int* pa = &a;//&-取地址操作符-取出a的地址
//
//	*pa = 20;//解引用操作符(间接访问操作符)-单目操作符-通用pa中存放的地址，找到指向的空间（内容）
//	int c = *pa;
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof a);//4
//	说明sizeof不是函数,因为一般函数必须带括号加形参
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	printf("%d\n", sizeof(arr));//40 - 计算整个数组的大小，单位字节
//	printf("%d\n", sizeof(int [10]));//
//	return 0;
//}
//~ 按补码二进制位取反
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 - 补码
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001 //-1
//	return 0;
//}
//
//int main()
//{
//	int a = 13;
//	a |= (1 << 4);
//	//00000000000000000000000000001101
//	//00000000000000000000000000010000 -- (1 << 4)
//	//00000000000000000000000000011101 -- a | (1 << 4) = 29
//	printf("%d", a);
//	a &= (~(1 << 4));
//	printf("%d", a);//13
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (scanf("%d", a) == 1)
//	{
//		printf("%d", a);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scnaf 读取失败返回EOF
//	while (scanf("%d", a) != EOF)
//	{
//		printf("%d", a);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scnaf 读取失败返回EOF
//	假设scanf读取失败，返回EOF --> EOF = -1
//	while (~scanf("%d", a))
//	{
//		printf("%d", a);
//	}
//	return 0;
//}
//--前置，后置--
//++前置，后置++

//int main()
//{
//	int a = 1;
//	int b = a++;//后置++，先使用，后++
//	//b = a, a = a + 1
//	printf("a = %d, b = %d", a, b);//2 1
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = a--;//后置--，先使用，后--
//	//b = a, a = a - 1
//	printf("a = %d, b = %d", a, b);//0 1
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = ++a;//前置++，先++，后使用
//	//a = a + 1, b = a
//	printf("a = %d, b = %d", a, b);//2 2
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//强制
//	//int a = int(3.14) 这么写是错误的
//	printf("%d\n", a);
//	return 0;
//}
//void test1(int arr[])//传入的参数是int* 指针，大小是4或者8个字节 - 什么指针都是4或8个字节
//{
//	printf("%d\v", sizeof(arr));
//}
//void test2(char ch[])//传入的参数是char* 指针，大小是4或者8个字节
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40 - 整型大小
//	printf("%d\n", sizeof(ch));//10 - 10个字符
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//a 和 b 都是5就打印hehe
//	if (a == 5 && b == 5)
//	{
//		printf("hehe\n");
//	}
//	//a或者b是5就打印haha
//	if (a == 5 || b == 5)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	//1. 能被4整除，并且不能被100整除
//	//2. 能被400整除是闰年
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		printf("闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;//a++ +使用前= 0为假，
	//&& 操作符，左边为假，右边就不计算了!
	//printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);// 1 2 3 4
	//int i = 0, a = 1, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;//a++ +使用前=1为真，后面继续计算
	//printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
	// a = 2（因为a在前面已经使用过了，所以这里加上1等于2）
	//b = 3 c = 3 d = 5



	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++||++b||d++;// || 左右两边有一个是真就可以计算
	
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//1 3 3 4
	return 0;
}
