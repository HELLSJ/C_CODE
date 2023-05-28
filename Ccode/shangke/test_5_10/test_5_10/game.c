#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//≥ı ºªØ∆Â≈Ã
void Initboard(char board[3][3], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}