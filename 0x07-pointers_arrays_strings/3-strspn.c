#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: chars to search for
 *
 * Return: int number of found substring
 * Retur the next point after an occurence in the main string
 * from the substr
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;  /* counters */
	unsigned int k = 0; /* To track the last matching position */

	if (s == NULL || accept == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				k++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (k);
			}
		}
	}
	return (k);
}
