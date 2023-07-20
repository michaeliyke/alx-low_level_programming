#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all its arguments
 * @n: first integer to be summed up
 *
 * Return: integer  sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, x, total = 0;

	va_start(numbers, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		x = va_arg(numbers, unsigned int);
		total += x;
	}
	va_end(numbers);
	return (total);
}
