#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a > 5)
//	{
//		b = 3;
//	}
//	else
//		b = -3;
//
//	/*(a > 5) ? (b = 3) : (b = -3);*/
//	b = (a > 5) ? 3 : -3;
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d%d", &a, &b);
//	//if (a > b)
//	//	m = a;
//	//else
//	//	m = b;
//
//	m = (a > b ? a : b);
//
//	printf("%d\n", m);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//���ű��ʽ
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	//              0 1 2 3 4 5 6 7 8 9
//	//�������ʼ�����±�ģ��±���0��ʼ��
//	printf("%d\n", arr[2]);//[] �±����ò�����,arr �� 2 ��[] ������������
//	//3 + 5
//	//
//	return 0;
//}

//#include <string.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	//int len = strlen("abc");//() �������ò�����
//	//() �Ĳ������ǣ�strlen "abc"
//	//printf("%d\n", len);
//
//	int c = Add(3, 5);//() �������ò�����
//	//Add 3 5
//	//���ں������ò�������˵��������1��������
//
//	printf("%d\n", c);
//
//	test();
//	return 0;
//}
//struct Book
//{
//	char name[30];//��Ա
//	char author[20];
//	float price;
//};
//void Print(struct Book* p)
//{
//	/*printf("%s %s %.1f\n", (*p).name, (*p).author, (*p).price);*/
//	printf("%s %s %.1f\n", p->name, p->author, p->price);
//	//�ṹָ��->��Ա
//}
//int main()
//{
//	struct Book b1 = {"C���Ե�һ��", "����", 66.5f};//��
//	struct Book b2 = {"���ݽṹ��һ��", "����", 88.6f};//��
//	Print(&b1);
//	Print(&b2);
//	//printf("%s %s %.1f\n", b1.name, b1.author, b1.price);
//	//printf("%s %s %.1f\n", b2.name, b2.author, b2.price);
//
//	//�ṹ�����.��Ա��
//	return 0;
//}

//int main()
//{
//	char c1 = 5;
//	//00000000000000000000000000000101
//	// ��Ϊchar����ܴ��1���ֽڣ�8��bitλ��������ֻ�ܽضϸ�λ
//	//00000101 - c1
//	char c2 = 127;
//	//01111111111111111111111111111111
//	//01111111 - c2
//	char c3 = c1 + c2;
//	//�Ƚ���������������ԭ��������00000101��01111111���и�λ����
//	//00000000000000000000000000000101
//	//00000000000000000000000001111111
//	//00000000000000000000000010000100
//	//10000100 - c3 
//	//%d - 10���Ƶ���ʽ��ӡ�з��ŵ�����
//	//10000100 ����������11111111111111111111111110000100 - ����
//	//11111111111111111111111110000011 - ����
//	//10000000000000000000000001111100 --> -124
//	printf("%d\n", c3);
//	return 0;
//}
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(-c));
//	return 0;
//}
#include <stdio.h>
int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("ret = %d\n", ret);
	return 0;
}

























//�Ƚ���������������ԭ��������00000101��01111111���и�λ����
	//00000000000000000000000000000101
	//00000000000000000000000001111111
	//00000000000000000000000010000100
	//10000100 - c3 
	//%d - 10���Ƶ���ʽ��ӡ�з��ŵ�����
	//10000100 ����������11111111111111111111111110000100 - ����
	//11111111111111111111111110000011 - ����
	//10000000000000000000000001111100 --> -124
//int Count(int num)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (num & 1 == 1)
//		{
//			count++;
//		}
//		num >>= 1;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = a ^ b;
//	int ret = Count(c);
//	printf("%d", ret);
//	return 0;
//
//}


//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}

//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}