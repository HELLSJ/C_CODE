#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�����ڲ���ı��ⲿ�����������õ�ַ�ѱ�������ȥ
//void test(int*p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	test(&num);
//	test(&num);
//	printf("%d\n", num);
//	return 0;
//}
//������Ƕ�׵��ã�������ζ�ź�������Ƕ�׶��壨��һ������������һ����������
//Ƕ�׵���
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//		new_line();
//}
//int main()
//{
//	three_line();
//	return 0;
//}
////Ƕ�׶��壨����
//int test()
//{
//	int a = 0;
//	int b = 0;
//	return a + b;
//
//	void fun(a)
//	{
//		a++;
//	}
//}
//��ʽ����
//int main()
//{
//	/*int len = strlen("abcdef");
//	printf("%d\n", len);*/
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	printf("%d", 43)�������ӡ43��Ҳ���������ַ���
//	����printf��ɴ�ӡ�����ַ���Ҳ�ʹ�ӡ2��2��һ���ַ�
//	������printf��ӡ����ַ���Ҳ���Ǵ�ӡ1
//	�������Ľ����4321
//	�������������Ļ�
//	/*printf("%d ", printf("%d ", printf("%d ", 43)));*/
//	���ӡ43 3 2
//	return 0;
//}
//��������
//����Ҫ��֤�������ٵ���
//int Add(int x, int y);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, & b);
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//�����Ķ���--һ�����������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);//��������
//	printf("%d\n", c);
//	return 0;
//}
////���ݹ飬����ջ���
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	//����һ��ֵ
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
////ÿһ�εݹ���ʵ����ջ�д���һ���ռ䣬�����������ĵݹ鲻�������Ļ�
////ջ����Ŀռ����ᱻ�Ĺ⣬��͵���ջ��������ݹ��ˡ�

//���ַ�������
//#include <string.h>
//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//��д��������������ʱ���������ַ�������
//#include <string.h>
//int my_strlen(char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(s + 1);//����һλ�ַ��ĵ�ַ
//}
////my_strlen("abc")
////1 + my_strlen("bc")
////1 + 1 + my_strlen("c")
////1 + 1 + 1 + my_strlen("")
////1 + 1 + 1 + 0
//int main()
//{
//	char arr[] = "abc";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//��n�Ľ׳�
//int fac(int n)
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 2; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = fac(num);
//	printf("%d", ret);
//	return 0;
//}
//int fibonacci(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fibonacci(n - 1) + fibonacci(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fibonacci(n);
//	printf("%d\n", ret);
//	return 0;
//}
//���Ƿ�������50��ʱ��������˺ܾã�������Ϊ������
//����2^32�Σ����ظ�����

//����д��
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//�ݹ飺��Ҫ����
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
//#include <math.h>
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / Pow(n, -k);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
//int DigitSum(unsigned int n)
//{
//	if (n <= 9)
//		return n;
//	else
//		return DigitSum(n / 10) + n % 10;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d", sum);
//	return 0;
//}

//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//
//void reverse_string(char* s)
//{
//	if (*s == '\0')
//		return;
//	int len = my_strlen(s);
//	char tmp = s[0];
//	s[0] = s[len - 1];
//	s[len - 1] = '\0';
//	if (my_strlen(s + 1) >= 2)
//		reverse_string(s + 1);
//	s[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//#include <stdio.h>
//
//int recursive_strlen(char* str) 
//{
//    if (*str == '\0') 
//    {  
//        return 0;
//    }
//    else 
//    {
//        return 1 + recursive_strlen(str + 1);  
//    }
//}
//
//int main() {
//    char str[100];
//    scanf("%s", str);
//    int len = recursive_strlen(str);
//    printf("%d",len);
//    return 0;
//}

//#include <stdio.h>
//int iterative_strlen(char* str) 
//{
//    int len = 0;
//    while (*str != '\0') 
//    {
//        len++;
//        str++;
//    }
//    return len;
//}
//
//int main() {
//    char str[100];
//    scanf("%s", str);
//    int len = iterative_strlen(str);
//    printf("%d",len);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}
//int main() 
//{
//	char acX[] = "abcdefg";
//	char acY[] = { 'a','b','c','d','e','f','g' };
//	printf("%d\n", sizeof(acX), strlen(acX));
//	printf("%d %d\n", sizeof(acY), strlen(acY));
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    
//    int A[5] = { 0 };
//    int B[5] = { 0 };
//    int temp, i;
//    int sz = sizeof(A) / sizeof(A[0]);
//    for (i = 0; i < sz; i++)
//    {
//        scanf("%d", &A[i]);
//    }
//    for (i = 0; i < sz; i++)
//    {
//        scanf("%d", &B[i]);
//    }
//
//    printf("����ǰ:\n");
//    printf("A = ");
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", A[i]);
//    }
//
//    printf("\nB = ");
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", B[i]);
//    }
//
//    for (i = 0; i < sz; i++)
//    {
//        temp = A[i];
//        A[i] = B[i];
//        B[i] = temp;
//    }
//
//    printf("\n������:\n");
//    printf("A = ");
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", A[i]);
//    }
//
//    printf("\nB = ");
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", B[i]);
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//void init(int* arr)
//{
//    for (int i = 0; i < 100; i++)
//    {
//        arr[i] = 0;
//    }
//}
//
//void print(int* arr, int sz)
//{
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//void reverse(int* arr, int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//    int tmp;
//    while (left < right)
//    {
//        tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//}

