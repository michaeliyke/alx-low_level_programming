#include "main.h"

/**
 * _strstr - locates a substring
 * @str: main string
 * @substr: substring
 *
 * Return: a pointer to the first occurence of substr
 * Partial match is not supported
 */
char *_strstr(char *str, char *substr)
{
	int i, j; /* counters */

	if (str == NULL || substr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{ /* loop through the main str */
		for (j = 0; substr[j] != '\0'; j++)
		{ /* loop through the substr looking for a complete match */
			if (substr[j] != str[j + i])
				break; /* match is incomplete */
		}
		if (substr[j] == '\0')
		{ /* the substr matching ran to the end, match is complete */
			if (substr[j - 1] == str[j - 1 + i])
				return (str + i);
		}
	}
	return (NULL);
}
