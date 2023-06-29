#include <stdio.h>
#include "main.h"

/**
 * _strncat -  concatenates two strings limited by n
 * @dest: string  to append to
 * @src: string that will be appended to dest
 * @n: number of strings to append to dest from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	char *temp;

	while (*(dest + x) != '\0')
	{
		x++;
	}
	temp = (dest + x);
	while (*src != '\0' && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}
	*temp = '\0';
	return (dest);
}
