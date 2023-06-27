#include "main.h"
/**
 * _strcpy - copies *src, including the \0 char,to dest
 * @dest: the destination of copy operation
 * @src: the source of copy operation
 *
 * Return: pointer to str
 */
char *_strcpy(char *dest, char *src)
{
	int i = len_str(src);
	char *ptr = dest;

	while (i > 0 && *src != '\0')
	{
		*dest++ = *src++;
		i--;
	}

	if (i > 0)
	{
		*dest++ = '\0';
	}
	return (ptr);
}

/**
 * len_str - compute the length of a string.
 * It counts the string without the trailing null character
 * @s: the str for which length is computed
 *
 * Return: the length of the string
 */
int len_str(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
