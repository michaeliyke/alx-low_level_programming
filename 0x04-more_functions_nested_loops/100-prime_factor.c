#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long pf, largest = 0;
	unsigned long div = 0;
	while (num > 0)
	{
		if (num % div == 0)
		{
			num = num / div;
		}
		if (is_prime_factor(div))
		{
			pf = div;
			if (pf > largest)
			{
				largest = pf;
			}
		}
		div++;
	}
	printf("%lu", largest);
	return (0);
}

/**
 * is_prime_factor - checks if a number is a prime factors
 * @factor: the  umber to be checked
 *
 * Return: 0 if false and 1 if true
 */
int is_prime_factor(unsigned long factor)
{
	unsigned long i;
	for (i = 0; i < factor; i++)
	{
		if (i == factor)
			return (1);

		if (factor % i == 0)
			return (0);
	}
	return (0);
}