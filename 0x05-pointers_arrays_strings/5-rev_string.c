#include "main.h"
#include <stdio.h>
#include <string.h>

char *cpy(char *dest, char *src);

/**
 * rev_string -  reverses a string.
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *a)
{
	char *b = a;
	char temp;

	while (*a != '\0')
		a++;
	a--;

	while (a > b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
		a--;
		b++;
	}
}

/**
 * _strcpy - copies *src, including the \0 char,to dest
 * @dest: the destination of copy operation
 * @src: the source of copy operation
 *
 * Return: pointer to str
 */
char *cpy(char *dest, char *src)
{
	int i = len_str(src);
	char *ptr = dest;

	while (i > 0 && *src != '\0')
	{
		*dest++ = *src++;
		i--;
	}
	*dest++ = '\0';
	return (ptr);
}

char *strncpy(char *dest, const char *src, size_t n)
{
	char *ptr = dest;
	while (n > 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return ptr;
}

/**
 * len_str - compute the length of a string
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
