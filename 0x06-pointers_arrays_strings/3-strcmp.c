#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: second string
 *
 * Return: 0 if both are equal, or the negative or positive difference
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0, is_substr = 0, size1 = len(s1), size2 = len(s2);
	char m1, m2;

	if ((size1 == 0) || (size2 == 0))
		return (size1 - size2); /* check nulls */
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
			return (m1 - m2);
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
		s++;
	}
	return (index);
}
