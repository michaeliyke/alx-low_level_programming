#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int col_count = 0, hashes = 0, row_count;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	while (col_count++ < size)
	{
		row_count = 0;
		hashes = size - (col_count - 1);

		while (row_count++ < size)
		{
			if (row_count >= hashes)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
