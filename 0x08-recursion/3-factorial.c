#include "main.h"

/**
 * factorial -  returns the factorial of a given number.
 * @n: input number
 *
 * Return: factorial valaue of n
 */
int factorial(int n)
{
	if (n <= 1)
	{
		return (n < 0 ? (-1) : (1));
	}
	return (n * factorial(n - 1));
}
