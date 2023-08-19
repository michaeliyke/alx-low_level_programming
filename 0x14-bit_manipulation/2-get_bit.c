#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer value
 * @index: the index of bit to get
 *
 * Return: he value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;
	/* 1<=index<=n */
	if (index > n)
		return (-1);

	x = n >> (index);
	return (x & 1);
}
