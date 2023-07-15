#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates memory block using malloc and free
 * Also deallocates old memory after allocating the new one
 * @ptr: memory block to reallocate
 * @oldsize: size of the old memory block
 * @newsize: desired size of new memory
 *
 * Return: pointer to new memory memory block
 */
void *_realloc(void *ptr, unsigned int oldsize, unsigned int newsize)
{
	char *block, *ptrr = (char *)ptr;
	unsigned int i = 0;

	if (oldsize == newsize)
		return (ptr);

	block = malloc(newsize);

	if (block == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return ((void *)block);

	if (newsize == 0)
	{
		free(ptr);
		return (NULL);
	}

	oldsize /= sizeof(*ptrr);
	for (i = 0; i < oldsize; i++)
		block[i] = ptrr[i];
	free(ptr);
	return ((void *)block);
}