#include "main.h"

/**
 * set_bit - sets the nth bit of an integer to 1
 * @n: pointer to unsigned long interger input
 * @index: index is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if success and -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/**
	 * long int is 4 bytes in 32 bits and 8 bytes in 64
	 * Since a byte is 8 bits
	 * the maths below: 4*8 = 32, 8*8 = 64
	 * This helps us know which arch
	 */
	unsigned int bit_arch = (sizeof(unsigned long int) * 8);

	if (index > bit_arch)
		return (-1);
	*n |= (1 << index);

	return (1);
}
