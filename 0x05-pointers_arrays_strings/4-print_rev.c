#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 * @s: the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = len_str(s);

	while (length-- >= 0)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}

/**
 * len_str - compute the length of a string
 * @s: the str for which length is computed
 *
 * Return: the length of the string
 */
int len_str(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
