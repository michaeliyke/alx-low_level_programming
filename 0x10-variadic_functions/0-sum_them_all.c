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
	for (i = 0; i < n; i++)
	{
		x = va_arg(numbers, int);
		total += x;
	}
	va_end(numbers);
	return (total);
}

int main(void)
{
	printargs(5, 2, 14, 84, 97, 15, -1, 48, -1);
	printargs(84, 51, -1, 3);
	printargs(-1);
	printargs(1, -1);
	return 0;
}
