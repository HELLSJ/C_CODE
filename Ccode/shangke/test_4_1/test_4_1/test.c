#define 
//#include<stdio.h>
//int main()
//{
//	printf("hello bit\n");
//	return 0;
//}
//����һ���Ǵ�main������ʼд��
#include <stdio.h>
//C������main�����ǳ�������
//�����Ǵ�main������һ�п�ʼִ�е�
//main��������ֻ��һ��
int main()
{
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;//����0��0��һ������
}
//printf��һ���⺯��
//˫���ű�ʾ�ַ���
//��ʹ��֮ǰҪʹ��ͷ�ļ�stdio.h
//sizeof