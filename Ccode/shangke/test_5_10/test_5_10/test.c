#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
//��������Ϸ����
void menu()
{
	printf("*****************************\n");
	printf("********  1. play   *********\n");
	printf("********  0. exit   *********\n");
	printf("*****************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);// 1 0 4
		switch (input)
		{
		case 1:
			game();
			printf("������\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}
