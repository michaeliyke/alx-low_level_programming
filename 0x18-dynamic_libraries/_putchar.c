#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strncat - string
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	(void)dest;
	(void)src;
	(void)n;

	return (dest);
}

/**
 * _strncpy - string
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	(void)dest;
	(void)src;
	(void)n;

	return (dest);
}

/**
 * _strcmp - string
 * @s1: string
 * @s2: string
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 10;

	(void)s1;
	(void)s2;

	return (i);
}

/**
 * _memset - string
 * @s: string
 * @b: char
 * @n: integer
 *
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	(void)n;
	(void)b;

	return (s);
}
