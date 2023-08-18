#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: main string
 * @accept: a set of characters to check for a match
 *
 * Return: pointer to the first matching
 * This forms the new start of the string essentially
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j; /* counters */

	if (s == NULL || accept == NULL)
		return (NULL);
	for (i = 0; s[i] != '\0'; i++)
	{ /* loop through the main string */
		for (j = 0; accept[j] != '\0'; j++)
		{ /* loop through the accept string for a possible match */
			if (accept[j] == s[i])
				return (s + i);
		}
	}
	return (NULL);
}
