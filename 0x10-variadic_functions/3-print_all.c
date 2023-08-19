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