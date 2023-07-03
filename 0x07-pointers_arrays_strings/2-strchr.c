#include "main.h"
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
