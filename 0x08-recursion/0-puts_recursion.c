#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: input string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
		_puts_recursion(++s);
	else
		_putchar('\n');
	_putchar(*s);
	if (!*s)
	{
		_puts_recursion("M");
		_putchar('M');
	}
}
