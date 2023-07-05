#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: input string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	do_print(s);
	_putchar('\n');
}

/**
 * do_print - prints a string in reverse
 * @s: the input string
 *
 * Return: void
 */
void do_print(char *s)
{
	if (*s != '\0')
	{
		do_print(++s);
		_putchar(*s);
	}
}
