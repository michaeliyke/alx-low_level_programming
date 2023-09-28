#include "main.h"

/**
 * get_bit - returns the bit value corresponding to an index from a given int
 * @n: a long unsigned int input value
 * @index: the index of returned bit
 *
 * Return: the bit value at index
 *
 * Bit here simply means one of the binary values of the input integer value
 * STEPS
 * -----
 * if i have 1000100 - 68 -- n
 * compare & 0001000 - 1000 -- mask = 1<<(4-1) = 1<<(index-1)
 * result =  0000000  - 0 --- result
 * Therefore: 4th bit is 0
 *
 * Edge cases are
 * --------------
 * 1. index should not be > 32 on 32 bit machine and 64 on 64
 * 2. index cannot be negative
 * This is the only real edge cases. Others such as
 * i. index cannot be >= n
 * ii. (1<<index) cannot be > n
 * These aren't really a problem because the bits beyond n will
 * simply be zero and so these result at such points will be 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;
	/**
	 * long int is 4 bytes in 32 bits and 8 bytes in 64
	 * Since a byte is 8 bits
	 * the maths below: 4*8 = 32, 8*8 = 64
	 * This helps us know which arch
	 */
	unsigned int bit_arch = (sizeof(unsigned long int) * 8);

	if (index > bit_arch)
		return (-1);

	mask = (1 << (index));
	return ((n & mask) == 0 ? 0 : 1);
}
