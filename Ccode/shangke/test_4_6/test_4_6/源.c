#define _CRT_SECURE_NO_WARNINGS 1
//scanf���������������ݣ����ݴӼ��̶�ȡ���ڴ���
//printf�������������

//int main()
//{
//	/*int a = 0;
//	scanf("%d", &a);
//	printf("%d", a);*/
//	/*char ch = 0;
//	scanf("%c", &ch);
//	printf("%c", ch);
//	return 0;*/
/* ʹ�õ���C���� */

//int main() {
//    int seconds, h, m, s;
//    scanf("%d", &seconds);
//    h = seconds / 3600;
//    m = (seconds % 3600) / 60;
//    s = (seconds % 3600) % 60;
//    printf("%d %d %d", h, m, s);
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x > 0)
//		printf("%d\n", -1);
//	if (x == 0)
//		printf("%d\n", 0);
//	else if(x < 0)
//		printf("%d\n", 1);
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int sum = 0;
//
//	scanf("%d", &a);
//	sum = a % 5;
//	if (sum == 0)
//		printf("%s\n", "YES");
//	else
//		printf("%s\n", "NO");
//	return 0;
//}

//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//    return 0;
//}
//int main() {
//	char ch[] = { 'a', 'b', 'c','d', 'f' };
//	char ch2[] = "abcdef";
//
//	printf("%s\n", ch);
//	printf("%s\n", ch2);
//
//	return 0;

//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    scanf("%d %d", &a, &b);
//    c = a / b;
//    d = a % b;
//    printf("%d %d", c, d);
//    return 0;
//}
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int d;
//	d = -(8 + 22)*a-10+c/2;
//	printf("%d", d);
//	return 0;
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}
//#include <stdio.h>
//void test()
//{
//	static int a = 5;//static
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//
# include<stdio.h>
//int test()
//{
//	int n = 10;
//	if (n > 5)
//		return 1;
//	else
//		return 2;
//}
//int main()
//{
//	int m = test();
//	printf("%d\n", m);
//
//	return 0;
//}
//��һ�������ǹ����գ�����������ĩ
//int main()
//{
//	int day = 0;
//	const int n = 1;
//	scanf("%d ", day);
//	switch (day)
//	{
//	default:
//		printf("�������\n");
//		break;
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;//m = 3
//	case 2:
//		n++;//n = 2
//	case 3:
//		switch (n)//��Ϊn = 2��ֱ�ӽ���case 2
//		{
//		case 1:
//			n++;
//		case 2://ֱ�ӽ�������
//			m++;//m = 4
//			n++;//n = 3
//			break;
//		}
//	case 4:
//		m++;//m = 5
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d", m, n);//m = 5, n = 3
//	return 0;
//}

//����Ļ�ϴ�ӡ1��10
//int main()
//{
//	int n = 1;
//	while (n<=10)
//	{
//		n++;
//		if (n == 5)
//			continue;//continueֱ�����������������
//		printf("%d ", n);
//		
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);//password�����飬������е�ַ�����Բ���Ҫȡ��ַ
//	printf("��ȷ������(Y/N)");
//	char input = 0;
//	scanf("%c", &input);
//	while (getchar() != '\n')
//	{
//		;
//	}
//	input = getchar();
//	if ('Y' == input)
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//	return 0;
//}
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch < '0' || ch > '9'))
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//ʹ��do while����ӡ1~10
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//����n�Ľ׳�
//5! = 1*2*3*4*5

//int main()
//{
//	int n = 10;
//	int i = 0;
//	int ret = 1;
//	int res = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		res = res + ret;
//	}
//	printf("%d\n", res);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == 10)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%d\n", sizeof(arr));//����������ܴ�С����λ���ֽ�
//	//printf("%d\n", sizeof(arr[0]));//4��һ���ֽ�ռ�ĸ���λ
//	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//Ԫ�ظ���
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	//1
//	int left = 0;
//	int right = sz - 1;
//	int flag = 0;
//	//2
//	while (left <= right)//����֮��������һ��Ԫ��
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == k)
//		{
//			printf("�ҵ���\n");
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
//		printf("û�ҵ�\n");
//	return 0;
//}
//��д���룬��ʾ����ַ��������ƶ������м���
//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//wel#############!!!
//...
//welcome to bit!!!!!
//
//��������
//welcome to bit!!!!!
//###################
//#include <string.h>
//#include <windows.h>
////Sleep��Ҫһ��windows.h��ͷ�ļ�
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��λ�Ǻ���
//		system("cls");//system��������ִ��ϵͳ���cls��������Ļ
//		//ÿ�δ�ӡ������һ����Ļ
//		left++;
//		right--;//�������������м�ƽ�
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺> ");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		strcmp����0��ʾ�����ַ������
//		strcmp����>0�����֣���ʾ��һ���ַ������ڵڶ����ַ������Դ�����
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//		if (i == 3)
//			printf("�˳�����\n");
//	}
//	return 0;
//}