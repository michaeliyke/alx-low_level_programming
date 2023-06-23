#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int counter_1 = 0, printed = 0, counter_2;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	while (counter_1++ < size)
	{
		counter_2 = 0;
		printed = 0;

		while (counter_2++ < size)
		{
			if (counter_2 == counter_1 || printed > 0)
			{
				_putchar('#');
				printed = 1;
			}
			else
			{
				_putchar('.');
			}
		}
		_putchar('\n');
	}
}
