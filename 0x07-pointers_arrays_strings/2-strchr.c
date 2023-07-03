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

	for (; *s != '\0'; ++s)
	{
		if (*s == c)
			break;
	}
	return *s == c ? (s) : (NULL);
}
