#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer value for size of memory
 *
 * Return: pointer to the allocated memory block
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
