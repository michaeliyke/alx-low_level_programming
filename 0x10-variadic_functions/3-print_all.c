#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - print arbitrary data values
 * @format: format of values
 *
 * Return: void
 */
void print_all(const char *const fmt, ...)
{
	va_list ap;
	int i = 0;
	char c, *sep = ", ";

	if (fmt == NULL)
	{
		printf("\n");
		return;
	}
	va_start(ap, fmt);
	c = fmt[0];
	while (c != '\0')
	{
		if (fmt[i + 1] == '\0')
			sep = "";
		switch (c)
		{
		case '\0': /* % at pos \0 means no formatter */
			return;
		case 'c':
			printf("%c%s", va_arg(ap, int), sep);
			break;
		default:
			/* print other formats here*/
			print_all_ext(c, ap, sep);
		}
		i++;
		c = fmt[i];
	}
	printf("\n");
}

/**
 * print_all_ext - print other specs
 * @c: the character spec
 * @ap: the va_list object where arguments were obtained from
 * @sep: output seprator
 *
 * Return: void
 */
void print_all_ext(char c, va_list ap, char *sep)
{
	char *s;

	switch (c)
	{
	case 's': /* handle string printing */
		s = va_arg(ap, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s%s", s, sep);
		break;
	case 'f': /* handle floats printing */
		printf("%f%s", va_arg(ap, double), sep);
		break;

	case 'i': /* handle integer printing */
		printf("%i%s", va_arg(ap, int), sep);
		break;
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar_(char c)
{
	fflush(stdout);
	return (write(1, &c, 1));
}
