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


//模拟实现库函数：strcpy
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
//	*dest = *src;// \0 的拷贝
//}
//
//int main()
//{
//	char arr1[] = "hello bit";
//	//char arr2[20] = "xxxxxxxxxxxxx";//原字符串后面的\0也会被拷贝到目标数组里面
//	char* p = NULL;
//	my_strcpy(p, arr1);
//	printf("%s\n", p);
//
//	//printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;

#include <assert.h>//assert的头文件
//函数返回的是目标空间的起始地址
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//断言
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)//代码优化 3行变1行
//		;//空语句 -- 当这里需要一条语句但这条语句不需要干任何事情的时候，就使用空语句
//	//return dest;//这里不能返回dest，因为dest作为指针一直在加到数组后面去了，不是起始位置了
//	//而递归需要返回起始地址
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
//	printf("%s\n", my_strcpy(arr2, arr1));//这里能直接调用需要前面的函数是char*类型
//
//	return 0;
//}

//int main()
//{
//	const int n = 100;//const限制n的值
//	//n = 200;//error，改不了
//	const int* p = &n;
//	*p = 20;
//	printf("%d\n", n);//这里可以用翻窗户（指针）的方式改值，利用了法律漏洞
//	return 0;
//}

//int main()
//{
//	int m = 10;
//	//cosnt 可以修饰指针
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

//int i;//全局变量，如果不初始化，默认是0
////
////静态变量和全局变量，如果不初始化，默认是0
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

//有序序列排序
#include <stdio.h>

int main()
{
    //输入
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr1[n];
    int arr2[m];
    int i = 0;
    //第一行数据
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    //第二行数据
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    //合并
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
        //arr1遍历完了，需要将arr2中剩余的元素全部放在arr3中
        while (j < m)
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    else
    {
        //arr2遍历完了，需要将arr1中剩余的元素全部放在arr3中
        while (i < n)
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
    }

    //输出
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}