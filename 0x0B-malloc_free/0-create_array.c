#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates and inits a char array
 * @size: size of array to be created
 * @c: char to init the array with
 *
 * Return: pointer to the new array
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(sizeof(*p) * size);

	if (size < 1)
		return (NULL);
	if (!p)
		return (NULL);
	for (unsigned int i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
