#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print from a given number to 98
 * @n: The number from which to start
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (1)
	{
		if (n == 98)
		{
			puts("98");
			break;
		}

		printf("%d, ", n);

		if (n > 98)
			n = n - 1;
		if (n < 98)
			n = n + 1;
	}
}
