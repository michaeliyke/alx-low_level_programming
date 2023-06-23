#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: number of times that _ should be printed on terminal
 *
 * Return: void
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}