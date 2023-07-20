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
	unsigned int i, total = 0;

	va_start(numbers, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		total += va_arg(numbers, unsigned int);
	va_end(numbers);
	return (total);
}
