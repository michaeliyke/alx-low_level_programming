#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;
	(void)n;

	n = binary_to_uint("10111010011001101");
	printf("10111010011001101: %u\n", n);
	n = binary_to_uint("1011010");
	printf("1011010: %u\n", n);
	n = binary_to_uint("1100010");
	printf("1100010: %u\n", n);
	n = binary_to_uint("0000000000000000000111111111");
	printf("0000000000000000000111111111: %u\n", n);
	n = binary_to_uint("1e01");
	printf("1e01: %u\n", n);
	n = binary_to_uint(NULL);
	printf("NULL: %u\n", n);

	return (0);
}

/*  function that converts a binary number to an unsigned int */
