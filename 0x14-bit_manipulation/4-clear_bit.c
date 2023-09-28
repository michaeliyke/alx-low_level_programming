#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: input integer
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/**
	 * long int is 4 bytes in 32 bits and 8 bytes in 64
	 * Since a byte is 8 bits
	 * the maths below: 4*8 = 32, 8*8 = 64
	 * This helps us know which arch
	 */
	unsigned int bit_arch = (sizeof(unsigned long int) * 8);
	unsigned long int mask;

	if (index > bit_arch)
		return (-1);
	/* mask has all bits set to 1 except bit at index */
	mask = ~(1 << index);
	*n &= mask;

	return (1);
}
