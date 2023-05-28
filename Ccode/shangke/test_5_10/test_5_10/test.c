#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
//三子棋游戏测试
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
		printf("请选择:>");
		scanf("%d", &input);// 1 0 4
		switch (input)
		{
		case 1:
			game();
			printf("猜数字\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
