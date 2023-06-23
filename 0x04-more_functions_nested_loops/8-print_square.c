#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int counter_1 = 0, counter_2;

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
			_putchar('#');
		}
		_putchar('\n');
	}
}
