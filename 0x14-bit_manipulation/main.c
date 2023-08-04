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

	n = binary_to_uint("1");
	printf("1: %u\n", n);
	n = binary_to_uint("101");
	printf("101: %u\n", n);
	n = binary_to_uint("1e01");
	printf("1e01: %u\n", n);
	n = binary_to_uint("1100010");
	printf("1100010: %u\n", n);
	n = binary_to_uint("0000000000000000000110010010");
	printf("0000000000000000000110010010: %u\n", n);

	return (0);
}
