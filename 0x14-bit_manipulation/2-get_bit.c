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
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask;

	mask = (1 << (index));
	return ((n & mask) == 0 ? 0 : 1);
}
