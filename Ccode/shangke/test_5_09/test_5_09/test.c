#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//�������鲻���ñ���
//	arr[5];//�±����ò�����
//	/*printf("%d\n", arr[5]);*/
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//����Ԫ�ؿ���ʹ�ñ���,�±��0��ʼ
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//�������鲻���ñ���
//	arr[5];//�±����ò�����
//	/*printf("%d\n", arr[5]);*/
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n",i,&arr[i]);//�鿴ÿ��Ԫ�ص�ַ
//	}
//	return 0;
//}
//int main()
//{
//	int arr[4][5];
//	char ch[3][8];
//	return 0;
//}
//int main()
//{
//	//��ά����ĳ�ʼ��
//	int arr[4][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{5,6,7,8,9} };
//	//��λ���鼴ʹ��ʼ����
//	//�п���ʡ�Ե����в���ʡ��
//	int arr2[][] = 
//
//	return 0;
//}
//int main()
//{
//	int arr[4][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{5,6,7,8,9} };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[4][5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);
//		}
//	}
//	return 0;
//}
//Խ�����
//int main()
//{
//	int arr[4][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
void bubble_sort(int* arr, int sz)//�����arr�ı�����ָ��
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		//ÿһ�˿�ʼǰ�ͼ����Ѿ�������
		int flag = 1;
		//һ��ÿ���ȽϵĶ���
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}

		if (flag == 1)
			break;
	}
}

int main()
{
	int arr[10] = { 0 };
	//����
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	//ð������ - ����
	//����
	//arr��Ϊ��������˴���
	//���鴫�Σ����ݵ��ǵ�ַ,���ݵ�����Ԫ�صĵ�ַ
	//
	bubble_sort(arr, sz);//arr ��������Ԫ�صĵ�ַ

	//���
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}


//����������ô��⣿
//������ͨ������¾���������Ԫ�صĵ�ַ
//������2�����⣺
//1. sizeof(������)����������������sizeof()�ڲ����������������ʾ�������飬���������������Ĵ�С
//2. &�������������������Ҳ��ʾ�������飬����ȡ��������������ĵ�ַ
//����֮����������������������ʾ������Ԫ�صĵ�ַ
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//����ĵ�ַ
//	printf("%p\n", &arr+1);//+1��������������
//
//	//printf("%d\n", sizeof(arr));
//	return 0;
//}
