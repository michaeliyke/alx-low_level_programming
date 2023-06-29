#include <stdio.h>
#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @dest: string  to append to
 * @src: string that will be appended to dest
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	char *temp;

	while (*(dest + x) != '\0')
	{
		x++;
	}
	temp = (dest + x);
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (dest);
}
