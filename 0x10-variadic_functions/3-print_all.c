#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - print arbitrary data values
 * @format: format of values
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
}

/**
 * getfmt - gets the right format handler
 * @c: format spec
 *
 * Return: function pointer to the right spec handler
 */
void getfmt(char *c)
{
	int i = 0;

	while (fmts[i].fmt != NULL)
		if (*fmts[i].fmt == *c)
			return (fmts[i].printer);
	return (NULL);
}

void intprint(int *x)
{
	printf("%d", *x);
}

void charprint(char *c)
{
	printf("%c", *c);
}

void floatprint(float *x)
{
	printf("%f", *x);
}

void strprint(int *x)
{
	printf("%s", x);
}