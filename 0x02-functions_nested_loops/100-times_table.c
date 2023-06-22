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
	int a, b, c;

	if (n > 15 || n < 0)
		return;

	for (a = 0; a < n + 1; a++)
	{
		for (b = 0; b < n + 1; b++)
		{
			c = a * b;
			if (b == 0)
				_putchar('0');
			if (b > 0 && c < 10)
			{
				comma_n_space(3);
				_putchar(c + '0');
			}
			else if (c > 9 && c < 100)
			{
				print_2_digits(c);
			}
			else if (c > 99)
			{
				print_3_digits(c);
			}
		}
		_putchar('\n');
	}
}
