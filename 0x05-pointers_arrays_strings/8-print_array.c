#include "main.h"
#include <stdio.h>

int len_str(char *s);

/**
 * print_array - prints n elements of an array of integers
 * @a: the array whose elemets re printed
 * @n: number of the elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{

		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[n - 1]);
	}
}
