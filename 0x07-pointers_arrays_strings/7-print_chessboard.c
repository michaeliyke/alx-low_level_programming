#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: char array of arrays for a chess board
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	if (a == NULL || *a == NULL)
		return;
	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[j][i]);
		}
		_putchar('\n');
	}
}
