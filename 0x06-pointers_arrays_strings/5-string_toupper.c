#include "main.h"

/**
 * string_toupper - converts lowercase chars in a string to uppercase
 * @s: input string
 *
 * Return: pointer to converted string
 */
char *string_toupper(char *s)
{
	char *t = s;

	while (*t != '\0')
	{
		if (*t >= 97 && *t <= 122)
		{
			*t = *t - 32;
		}
		t++;
	}
	return (s);
}
