#include "main.h"

/**
 * _memset - Fills memory with constant byte
 * @s: memory area to fill
 * @b: constant byte
 * @n: number of byte to be filled on memory
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	for (; n > 0; n--, ++p)
	{
		*p = b;
	}
	return (s);
}
