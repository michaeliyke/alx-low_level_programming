#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: number of array member elements
 * @size: size of type
 *
 * Return: pointer to new memory block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	block = malloc(nmemb * size);
	char *ptr = (char *)block;
	if (block == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (block);
}
