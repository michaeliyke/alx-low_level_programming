#include <stdio.h>

/**
 * _strchr - locates a char in a string
 * @sp: pointer to the source string
 * @c: char to be located
 *
 * Return: pointer to the first occurence of char
 */
char *_strchr(char *sp, char c)
{
	char *s = sp;
	while (*s != '\0')
	{
		if (*s == c)
			break;
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
