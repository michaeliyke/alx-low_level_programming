#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator:  string to be printed between numbers
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (n < 1)
		return;
	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		printf("%s", str == NULL ? "(nil)" : str);
		if (i != n - 1)
			(printf("%s", separator));
	}

	printf("\n");
	va_end(ap);
}
