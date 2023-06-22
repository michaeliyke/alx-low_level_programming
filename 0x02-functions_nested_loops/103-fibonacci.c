#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 1;
	unsigned long even_total = 0;
	unsigned long fib_val = 0;

	while (fib_val < 4000000)
	{
		if (fib_val % 2 == 0)
		{
			even_total += fib_val;
		}
		fib_val = fib(i);
		i = i + 1;
	}
	printf("%lu\n", even_total);
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
