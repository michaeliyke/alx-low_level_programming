#include "main.h"

/**
 *print_alphabet - prints alphabets in lower case
 *
 *Return: does not return a value
 */
void print_alphabet_x10(void)
{
	char chars[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(chars[i]);
		}
		_putchar('\n');

		j = j + 1;
	}
}
