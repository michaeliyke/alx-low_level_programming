#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 1; i < 98; i++)
	{
		printf("%lu, ", (int)fib2(i));
	}
	printf("%lu\n", (int)fib2(98));
	return (0);
}

/**
 * fib2 - compute the fibonacci of a given number
 * @num: the number whose fibonacci is computed
 *
 * Return: the computed fibonacci value of the number
 */
long int fib2(int num)
{
	long int a = 0;
	long int b = 1, c;

	while (num-- > 0)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return (b);
}
