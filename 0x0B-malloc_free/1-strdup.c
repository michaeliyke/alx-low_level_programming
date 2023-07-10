#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates a new memory for char array, fills, returns pointer\
 * @str: string chars to fille with
 *
 * Return: pointer to new memory
 */
char *_strdup(char *str)
{
	char *p = str, *str_out;
	unsigned int size, i;

	if (!str)
		return (NULL);
	while (*p != '\0')
		p++;
	size = p - str;
	str_out = malloc(sizeof(*str_out) * size);
	if (!str_out)
		return (NULL);
	for (i = 0; i < size; i++)
		str_out[i] = str[i];
	str_out[size] = '\0';
	return (str_out);
}
