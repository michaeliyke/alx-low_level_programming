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
	int l = len_str(a);

	if (l != n)
		n = l;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}

/**
 * len_str - compute the length of a string
 * @s: the str for which length is computed
 *
 * Return: the length of the string
 */
int len_str(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i - 1);
}
