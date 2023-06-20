#include "main.h"

/**
 *print_alphabet - prints alphabets in lower case
 *
 *Return: does not return a value
 */
void print_alphabet(void)
{
	char chars[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(chars[i]);
	}
	_putchar('\n');
}
