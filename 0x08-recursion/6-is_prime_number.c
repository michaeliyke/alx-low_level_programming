#include "main.h"

/**
 * is_prime_number - show if an integer is a prime number
 * @n: input integer
 *
 * Return: 1 if the input int is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - reports if a number is a prime number
 * @num: the int number to check
 * @tem: temporary int number used in computing
 *
 * Return: 0 if false and 1 if true
 */
int is_prime(int num, int tem)
{
	if (num < 2)
		return (0);
	else if (num == tem)
		return (1);
	else if (num % tem == 0)
		return (0);
	else
		return is_prime(num, ++tem);
}
