#define _CRT_SECURE_NO_WARNINGS 1
#include <limits.h>
//int main()
//{
//	//INT_MAX;
//	int num = 10;//创建一个整型变量num，这时num向内存申请4个字节来存放数据
//	//4个字节--32个比特位
//	//00000000000000000000000000001010 - 原码
//	//00000000000000000000000000001010 - 反码
//	//00000000000000000000000000001010 - 补码
//	int num2 = -10;
//	//10000000000000000000000000001010 - 原码
//	//11111111111111111111111111110101 - 反码
//	//11111111111111111111111111111110 - 补码
//	return 0;
//}


//1-1
//1+(-1)
//
//方式1
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;//int*
//	if (*p == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//int check_sys()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//		return 1;
//	else
//		return 0;
//}
////小端返回1
////大端返回0
//
////方式2
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if(ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111 - 截断,截取后八个字节
//	//11111111 -a
//	//整型提升：11111111111111111111111111111111
//	//变成原码：10000000000000000000000000000001 -->-1
//	signed char b = -1;
//	//就是char
//	//11111111 -b
//	unsigned char c = -1;
//	//11111111 -c
//	//00000000000000000000000011111111-->255
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	//%d 十进制的形式打印有符号的整型整数
//	//整型提升
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	//-128
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000 -->-128的补码
//	//10000000 -->符号位是1，往前面补1
//	//11111111111111111111111110000000 -->无符号原、反、补相同
//	//
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}

//
//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100 -->-20的补码
//	//
//	unsigned int j = 10;
//	//00000000000000000000000000001010 -- 10
//	//11111111111111111111111111101100 -- -20
//	//11111111111111111111111111110110
//	//11111111111111111111111111110101
//	//10000000000000000000000000001010 -- -10
//	printf("%d\n", i + j);
//	return 0;
//}

#include <windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);//单位是毫秒
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//
//#include <stdio.h>
//
//unsigned char i = 0;//0~255
//
//
//int main()
//{
//	for (i = 0; i <= 255; i++)//恒成立
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;//short*大小为两个字节，所以只把数组前面两个元素改成0
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    /*int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);*/
//    unsigned long pulArray[] = { 6,7,8,9,10 };
//    unsigned long* pulPtr;
//    pulPtr = pulArray;
//    *(pulPtr + 3) += 3;
//    printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//    return 0;
//}

//#include <stdio.h>
//
//void printArray(int* arr, int sz) 
//{
//    // 使用指针遍历数组并打印每个元素
//    for (int i = 0; i < sz; i++) 
//    {
//        printf("%d ", *(arr + i));
//    }
//    printf("\n");
//}
//
//int main() 
//{
//    int arr[] = { 1, 2, 3, 4, 5 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    printArray(arr, sz);
//
//    return 0;
//}


//#include <stdio.h>
//#include <math.h>
//
//int isArmstrongNumber(int num) {
//    int temp = num;
//    int digits = 0;
//    int sum = 0;
//
//    // 计算数字的位数
//    while (temp != 0) {
//        temp /= 10;
//        digits++;
//    }
//
//    temp = num;
//
//    // 计算各位数字的n次方之和
//    while (temp != 0) {
//        int digit = temp % 10;
//        sum += pow(digit, digits);
//        temp /= 10;
//    }
//
//    // 判断是否为水仙花数
//    if (sum == num) {
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}
//
//int main() {
//    int i;
//
//    printf("水仙花数：\n");
//    for (i = 0; i <= 100000; i++) {
//        if (isArmstrongNumber(i)) {
//            printf("%d ", i);
//        }
//    }
//    printf("\n");
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a;
//    printf("请输入数字a：");
//    scanf("%d", &a);
//
//    int sum = 0;
//    int term = a;
//    int i;
//    for (i = 1; i <= 5; i++) {
//        sum += term;
//        term = term * 10 + a;
//    }
//
//    printf("Sn的和为：%d\n", sum);
//
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("      *      \n");
//	printf("     ***     \n");
//	printf("    *****    \n");
//	printf("   *******   \n");
//	printf("  *********  \n");
//	printf(" *********** \n");
//	printf("*************\n");
//	printf(" *********** \n");
//	printf("  *********  \n");
//	printf("   *******   \n");
//	printf("    *****    \n");
//	printf("     ***     \n");
//	printf("      *      \n");
//	return 0;
//}

//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},
//							 {9802,"wang",19},
//					{9803,"zhao",18} };
//	fun(students + 1);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int money = 20; // 初始金额
//    int bottles = money; // 初始汽水瓶数
//    int total = bottles; // 总共喝到的汽水瓶数
//
//    while (bottles >= 2) {
//        int exchanged = bottles / 2; // 可以兑换的汽水瓶数
//        total += exchanged; // 喝到的汽水瓶数增加
//        bottles = exchanged + bottles % 2; // 剩余的汽水瓶数
//    }
//
//    printf("可以喝到 %d 瓶汽水\n", total);
//
//    return 0;
//}


#include <stdio.h>

void swap(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void adjustOrder(int arr[], int length) 
{
    if (arr == NULL || length <= 0) 
    {
        return;
    }

    int left = 0;
    int right = length - 1;

    while (left < right) 
    {
        // 从左侧找到第一个偶数
        while (left < right && arr[left] % 2 != 0) 
        {
            left++;
        }

        // 从右侧找到第一个奇数
        while (left < right && arr[right] % 2 == 0) 
        {
            right--;
        }

        // 交换左右两个数
        if (left < right) {
            swap(&arr[left], &arr[right]);
        }
    }
}

int main() 
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int length = sizeof(arr) / sizeof(arr[0]);

    adjustOrder(arr, length);

    printf("调整后的数组为：");
    for (int i = 0; i < length; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
