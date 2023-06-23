#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the char \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int filler = 0;
	int spaces = 0;
	while (n-- > 0)
	{
		while (spaces-- > 0)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		filler += 1;
		spaces = filler;
	}
	if (filler == 0)
	{
		_putchar('\n');
	}
}
