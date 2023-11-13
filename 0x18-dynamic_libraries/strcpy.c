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
	int i = _strlen(src);
	char *ptr = dest;

	while (i > 0 && *src != '\0')
	{
		*dest++ = *src++;
		i--;
	}
	*dest++ = '\0';
	return (ptr);
}

/**
 * _puts - string
 * @s: string
 *
 * Return: void
 */
void _puts(char *s)
{
	(void)s;
}

/**
 * _atoi - string
 * @s: string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 10;

	(void)s;
	return (i);
}

/**
 * _strcat - string
 * @dest: string
 * @src: string
 *
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	(void)src;
	return (dest);
}
