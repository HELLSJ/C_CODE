#define _CRT_SECURE_NO_WARNINGS 1
#include <limits.h>
//int main()
//{
//	//INT_MAX;
//	int num = 10;//����һ�����ͱ���num����ʱnum���ڴ�����4���ֽ����������
//	//4���ֽ�--32������λ
//	//00000000000000000000000000001010 - ԭ��
//	//00000000000000000000000000001010 - ����
//	//00000000000000000000000000001010 - ����
//	int num2 = -10;
//	//10000000000000000000000000001010 - ԭ��
//	//11111111111111111111111111110101 - ����
//	//11111111111111111111111111111110 - ����
//	return 0;
//}


//1-1
//1+(-1)
//
//��ʽ1
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;//int*
//	if (*p == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
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
////С�˷���1
////��˷���0
//
////��ʽ2
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
//		printf("С��\n");
//	else
//		printf("���\n");
//
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111 - �ض�,��ȡ��˸��ֽ�
//	//11111111 -a
//	//����������11111111111111111111111111111111
//	//���ԭ�룺10000000000000000000000000000001 -->-1
//	signed char b = -1;
//	//����char
//	//11111111 -b
//	unsigned char c = -1;
//	//11111111 -c
//	//00000000000000000000000011111111-->255
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	//%d ʮ���Ƶ���ʽ��ӡ�з��ŵ���������
//	//��������
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	//-128
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000 -->-128�Ĳ���
//	//10000000 -->����λ��1����ǰ�油1
//	//11111111111111111111111110000000 -->�޷���ԭ����������ͬ
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
//	//11111111111111111111111111101100 -->-20�Ĳ���
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
//		Sleep(1000);//��λ�Ǻ���
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
//	for (i = 0; i <= 255; i++)//�����
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;//short*��СΪ�����ֽڣ�����ֻ������ǰ������Ԫ�ظĳ�0
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
//    // ʹ��ָ��������鲢��ӡÿ��Ԫ��
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
//    // �������ֵ�λ��
//    while (temp != 0) {
//        temp /= 10;
//        digits++;
//    }
//
//    temp = num;
//
//    // �����λ���ֵ�n�η�֮��
//    while (temp != 0) {
//        int digit = temp % 10;
//        sum += pow(digit, digits);
//        temp /= 10;
//    }
//
//    // �ж��Ƿ�Ϊˮ�ɻ���
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
//    printf("ˮ�ɻ�����\n");
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
//    printf("����������a��");
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
//    printf("Sn�ĺ�Ϊ��%d\n", sum);
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
//    int money = 20; // ��ʼ���
//    int bottles = money; // ��ʼ��ˮƿ��
//    int total = bottles; // �ܹ��ȵ�����ˮƿ��
//
//    while (bottles >= 2) {
//        int exchanged = bottles / 2; // ���Զһ�����ˮƿ��
//        total += exchanged; // �ȵ�����ˮƿ������
//        bottles = exchanged + bottles % 2; // ʣ�����ˮƿ��
//    }
//
//    printf("���Ժȵ� %d ƿ��ˮ\n", total);
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
        // ������ҵ���һ��ż��
        while (left < right && arr[left] % 2 != 0) 
        {
            left++;
        }

        // ���Ҳ��ҵ���һ������
        while (left < right && arr[right] % 2 == 0) 
        {
            right--;
        }

        // ��������������
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

    printf("�����������Ϊ��");
    for (int i = 0; i < length; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
