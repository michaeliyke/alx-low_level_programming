#include "main.h"

/**
 *print_numbers - prints alphabets in lower case
 *
 *Return: does not return a value
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
