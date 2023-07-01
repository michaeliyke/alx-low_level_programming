#include "main.h"

/**
 * reverse_array - reverses the contents of an array of integers
 * @a: pointer to the array contents
 * @n: the number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *b = a;
	int c;

	while (*b != a[n - 1])
	{
		b++;
	}

	while (b > a)
	{
		c = *b;
		*b = *a;
		*a = c;
		a++;
		b--;
	}
}
