#include <stdio.h>
#include <string.h>
#include <unistd.h>

int _putchar(char c);

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
		_putchar(chars[i] + '0');
	}
	_putchar('\n');
}

/**
 * main - prints stuff
 *
 * Return: 0 for success and other number for failure
 */
int main(void)
{

	return (0);
}
