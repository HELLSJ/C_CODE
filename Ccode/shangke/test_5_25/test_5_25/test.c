#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����һ��ѧ��
//����+����+�Ա�

//�����ṹ������
//struct Stu
//{
//	//��Ա���������������ṹ�������������
//	char name[20];
//	int age;
//	char sex[5];//�� Ů ����\0
//}s2,s3,s4;//s2,s3,s4���ǽṹ����� - ȫ�ֱ���
//
//int main()
//{
//	struct Stu s1;//�ֲ�����
//
//	return 0;
//}
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//}Stu;//������ṹ��������������һ�����ֽ�Stu
//
//
//int main()
//{
//	struct Stu s1;//�ֲ�����
//	Stu s2;//��Stu������s2��ʱ���s1�Ĵ�����һ������
//	//��C�����У����û�жԽṹ������typedef��struct�ؼ��ֲ���ʡ��
//	return 0;
//}
//struct S
//{
//	int a;
//	char arr[5];
//	int* p;
//}s1;//��һ�ֱ���������ʽ
//
//struct S s2;//�ڶ��ֱ���������ʽ
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
//	struct S s3 = { .arr = "abc", .p = NULL, .a = 1 };;//�����ֱ���������ʽ
//	return 0;
//}
////�����ֱ���������ʽ����typedef



//struct S
//{
//	int a;
//	char arr[5];
//	int* p;
//}s1 = {100, "bit", NULL};//Ҫ���ݳ�Ա˳����
//struct S s2 = { .arr = "abc", .p = NULL, .a = 1 };//�����������ð���˳����Ϊ˳�����Լ����Զ�

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
//	printf("%d %s %p", s3.a, s3.arr, s3.p);//.�ṹ��Ա���ʲ�����
//	struct B sb = { "hello", {20, "qqq", NULL}, 3.14};
//	printf("%s %d %s %p %.2lf\n", sb.ch, sb.s.a, sb.s.arr, sb.s.p, sb.d);
//	return 0;
//}


#include <string.h>//�ַ���������Ҫ����һ��

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void set_stu(struct Stu t)
//{
//	t.age = 20;
//	//t.name = "����";//error ��Ϊ����ġ��������ǵ�ַ����Ͳ����ˣ�����Ӧ�ð������ŵ�name����Ŀռ�����
//	strcpy(t.name, "����");//�ַ�������
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
//	set_stu(s);//����s��ֵ
//	print_stu(s);
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
////��ʽ1
////void set_stu(struct Stu* ps)
////{
////	(*ps).age = 20;
////	//t.name = "����";//err
////	strcpy((*ps).name, "����");//�ַ�������
////}
////��ʽ2
//void set_stu(struct Stu* ps)
//{
//	ps->age = 20;//�ṹ��ָ��->�ṹ���Ա
//	//t.name = "����";//err
//	strcpy(ps->name, "����");//�ַ�������
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
//	print1(s);//���ṹ��
//	print2(&s);//����ַ
//	return 0;
//}
//дһ���������ز����������� 1 �ĸ�����
//���磺 15    00001111    4 �� 1
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
// n = n&(n-1)  ������ʽ����n�Ķ����������ұߵ�1��ʧ
// 14-->1110
// n-->1110
// n-1-->1101
// n&(n-1) = n -->1100
// ������n-1 -->1011
// ������n-->1000
// n-1-->0111
// ������n -->0000
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

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

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
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
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
//	//��� - ��ͬΪ0������Ϊ1
//	int ret = number_of_1(m ^ n);
//	printf("%d\n", ret);
//
//	return 0;
//}
////