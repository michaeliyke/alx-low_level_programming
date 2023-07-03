#include "main.h"

/**
 * _memcpy - copies n bytes of memory area to memory area dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to be copied
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	for (; n > 0; --n, ++p, ++src)
	{
		*p = *src;
	}
	return (dest);
}
