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

		while (counter_2++ < size)
		{
			if (counter_2 == counter_1)
			{
				_putchar('#');
			}
			else
			{
				printed++;
				_putchar('.');
			}
		}
		_putchar('\n');
	}
}
