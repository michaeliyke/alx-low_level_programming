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
		printf("%llu, ", fib2(i));
	}
	printf("%llu\n", fib2(98));
	return (0);
}

/**
 * fib2 - compute the fibonacci of a given number
 * @num: the number whose fibonacci is computed
 *
 * Return: the computed fibonacci value of the number
 */
long long unsigned fib2(int num)
{
	long long unsigned a = 0;
	long long unsigned b = 1, c;

	while (num-- > 0)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return (b);
}
