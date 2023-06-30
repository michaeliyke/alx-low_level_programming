#include "main.h"

int len(char *s);

/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: second string
 *
 * Return: 0 if both are equal, or the negative or positive difference
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;
	int is_substr = 0;
	int size1 = len(s1);
	int size2 = len(s2);
	char m1, m2;

	/* check nulls */
	if (!(s1) && !(s2))
		return (0);

	if (!(s1))
		return 0 - (_putchar(s2[0]));

	if (!(s2))
		return (_putchar(s1[0]));

	/* check for substring */
	while (1)
	{
		m1 = s1[index];
		m2 = s2[index];
		if (!(m1))
		{
			if (!(m2))
				return (0); /* same size */
			if (is_substr)
				return (size1 - size2); /* s1 is shorter */
		}
		if (!(m2))
		{
			if (is_substr)
				return (size1 - size2); // s2 is shorter
			break;
		}
		if (m1 == m2)
		{
			is_substr = 1;
		}
		if (m1 != m2)
		{
			return (_putchar(m1) - _putchar(m2));
		}
		index++;
	}
	return (0);
}

/**
 * check_nulls - checks for null values
 * @s1 - string one
 * @s2 - string two
 *
 * Return
 */

/**
 * len - get the length of a string
 * @s: the string
 *
 * Return: int length of the string
 */
int len(char *s)
{
	int index = 0;

	while (*s != '\0')
	{
		index++;
	}
	return (index);
}
