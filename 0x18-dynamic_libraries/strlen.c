#include "main.h"

/**
 * _strlen - returns length of a string
 * @string: input string whose length is needed
 *
 * Return: length of string
 */
int _strlen(char *string)
{
	char *pointer = string;

	if (string == NULL || *string == '\0')
		return (0);
	while (*string != '\0')
		++string;
	return ((string - pointer));
}

/**
 * _islower - char
 * @c: char
 *
 * Return: char
 */
int _islower(int c)
{
	return (c);
}

/**
 * _isalpha - char
 * @c: char
 *
 * Return: char
 */
int _isalpha(int c)
{
	return (c);
}

/**
 * _abs - integer
 * @n: integer
 *
 * Return: integer
 */
int _abs(int n)
{
	return (n);
}
