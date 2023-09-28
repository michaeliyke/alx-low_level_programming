#include "main.h"

/**
 * flip_bits - number of bits you would need to flip to get from number A to B
 * @n:  number A
 * @m: number B
 *
 * Return: integer number of bits to be flipped
 * Example:
 * -------
 * numbers: 5 and 7 are
 * :-  101
 * and 111 respectively
 * To convert 101 to 111, or 111 to 101, only the middle bit need be flipped
 * Similarly for 5 and 9
 * :-   0101
 * and 1001 respectivley
 * To convert 0101 to 1001 or from 1001 to 0101, the fist and second bits
 * need to be flipped
 *
 * This is why we use XOR to first get the difference, then we
 * count the number of set bits in this difference because those are the
 * ones that need to be set in order to convert. see workings below
 *
 * This will computes and returns the number of bits between A to B
 * The number of bits you would need to flip to get from one number to another
 *  is also known as the Hamming distance between the two numbers.
 * It is a measure of how different two binary strings are
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/**
	 * Hamming distance
	 * If n and m where 0101 and 1001 respectively,
	 * diff would be: 0101
	 * :-           ^1001 = 1100
	 * Now, count the set bits of 1100
	 */
	unsigned long int diff = n ^ m;
	unsigned long int dist = 0;

	/**
	 * Brian Kerningham Algorithm of counting set bits
	 * It is faster than using binary conversion approach
	 * As follow for x = 20
	 * x = x & (x-1) = 10100 & 10011 = 10000 = 16
	 * x = x & (x-1) = 10000 & 01111 = 00000 = 0
	 * Amazing - Just two rounds as opposed to going throught all the bits
	 */
	while (diff != 0)
	{
		dist++;
		diff = diff & (diff - 1); /* Clears the rightmost set bit */
	}

	return (dist);
}

/**
 * count_bits - get the number of bits present in an integer
 * @x: integer input
 *
 * Return: the count of the bits in x
 */
unsigned int count_bits(unsigned long int x)
{
	int bits = 0;

	while (x != 0)
	{
		bits++;
		x >>= 1;
	}
	return (bits);
}
