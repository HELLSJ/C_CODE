#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	/*printf("%p\n", &i);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[9]);*/
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//ģ��ʵ�ֿ⺯����strcpy
//#include <string.h>
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;// \0 �Ŀ���
//}
//
//int main()
//{
//	char arr1[] = "hello bit";
//	//char arr2[20] = "xxxxxxxxxxxxx";//ԭ�ַ��������\0Ҳ�ᱻ������Ŀ����������
//	char* p = NULL;
//	my_strcpy(p, arr1);
//	printf("%s\n", p);
//
//	//printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;

#include <assert.h>//assert��ͷ�ļ�
//�������ص���Ŀ��ռ����ʼ��ַ
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//����
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)//�����Ż� 3�б�1��
//		;//����� -- ��������Ҫһ����䵫������䲻��Ҫ���κ������ʱ�򣬾�ʹ�ÿ����
//	//return dest;//���ﲻ�ܷ���dest����Ϊdest��Ϊָ��һֱ�ڼӵ��������ȥ�ˣ�������ʼλ����
//	//���ݹ���Ҫ������ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = "xxxxxxxxxxxxx";
//	char* p = NULL;
//	/*my_strcpy(p, arr1);
//	printf("%s\n", p);*/
//	printf("%s\n", my_strcpy(arr2, arr1));//������ֱ�ӵ�����Ҫǰ��ĺ�����char*����
//
//	return 0;
//}

//int main()
//{
//	const int n = 100;//const����n��ֵ
//	//n = 200;//error���Ĳ���
//	const int* p = &n;
//	*p = 20;
//	printf("%d\n", n);//��������÷�������ָ�룩�ķ�ʽ��ֵ�������˷���©��
//	return 0;
//}

//int main()
//{
//	int m = 10;
//	//cosnt ��������ָ��
//	int n = 100;
//	const int *const p = &m;
//	*p = 0;//err
//	p = &n; //err
//
//	printf("%d\n", m);
//
//	return 0;
//}


//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int ret = add(2, 3);
//	return 0;
//}

//int i;//ȫ�ֱ������������ʼ����Ĭ����0
////
////��̬������ȫ�ֱ������������ʼ����Ĭ����0
////
//int main()
//{
//    i--;//-1
//    // int  size_t
//    //size_t size_t
//    //-1     4
//    //
//    if (i > sizeof(i))//-1 > 4
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//
//    return 0;
//}

//������������
#include <stdio.h>

int main()
{
    //����
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr1[n];
    int arr2[m];
    int i = 0;
    //��һ������
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    //�ڶ�������
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    //�ϲ�
    int arr3[n + m];
    i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    if (i == n)
    {
        //arr1�������ˣ���Ҫ��arr2��ʣ���Ԫ��ȫ������arr3��
        while (j < m)
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    else
    {
        //arr2�������ˣ���Ҫ��arr1��ʣ���Ԫ��ȫ������arr3��
        while (i < n)
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
    }

    //���
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}