#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print times table of a number between 1 and 15
 * @n: an arbitrary number from 1 - 5
 *
 * Return: void
 */
void print_times_table(int n)
{
	int a, b, c, d3, d2, d1;
	double d;

	if (n > 15 || n < 0)
		return;

	for (a = 0; a < n + 1; a++)
	{
		for (b = 0; b < n + 1; b++)
		{
			c = a * b;

			if (b == 0)
			{
				/* _putchar(b + '0'); */
				_putchar('0');
			}
			if (b > 0 && c < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c > 9 && c < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else if (c > 99)
			{
				d3 = c % 10; /* 3rd digit */
				d = c / 10;
				d2 = (int)d % 10; /* 2nd digit */
				d = d / 10;
				d1 = (int)d % 10; /* 1st digit */

				_putchar(' ');
				_putchar(',');
				_putchar(d1 + '0');
				_putchar(d2 + '0');
				_putchar(d3 + '0');
			}
		}
		_putchar('\n');
	}
}
