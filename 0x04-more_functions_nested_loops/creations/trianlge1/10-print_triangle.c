#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int counter_1 = 0, counter_2;
	int hash_fill = 1, hashes;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	while (counter_1++ < size)
	{
		counter_2 = 0;
		hashes = hash_fill;

		while (counter_2++ < size)
		{
			if (hashes-- > 0)
			{
				_putchar('#');
			}
			else
			{
				_putchar('.');
			}
		}
		_putchar('\n');

		hash_fill++;
	}
}
