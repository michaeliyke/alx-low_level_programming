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

	for (i = 1; i < 50; i++)
	{
		printf("%lu, ", fib(i));
	}
	printf("%lu", fib(50));
	return (0);
}

/**
 * fib - compute the fibonacci of a given number
 * @num: the number whose fibonacci is computed
 *
 * Return: the computed fibonacci value of the number
 */
unsigned long fib(int num)
{
	unsigned long a = 0;
	unsigned long b = 1, c;

	while (num-- > 0)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return (b);
}
