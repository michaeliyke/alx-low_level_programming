#include <stdio.h>

/**
 * _strchr - locates a char in a string
 * @s: pointer to the source string
 * @c: char to be located
 *
 * Return: pointer to the first occurence of char
 */
char *_strchr(char *s, char c)
{

	if (!(*s) || c == '\0')
		return (NULL);
	for (; *s != '\0'; ++s)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
