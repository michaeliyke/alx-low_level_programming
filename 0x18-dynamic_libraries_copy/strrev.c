#include "main.h"

/**
 * _strrev -  reverses a string.
 * @a: pointer to string to reverse
 *
 * Return: void
 */
void _strrev(char *a)
{
	char *b = a;
	char temp;

	while (*a != '\0')
	{
		a++;
	}
	a--;
	while (a > b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
		a--;
		b++;
	}
}

/**
 * _isupper - char
 * @c: char
 *
 * Return: integer
 */
int _isupper(int c)
{
	return (c);
}

/**
 * _isdigit - char
 * @c: char
 *
 * Return: char
 */
int _isdigit(int c)
{
	return (c);
}
