#include "main.h"
/*
void display_bits(unsigned int v)
{
	unsigned int mask = 1 << 31, c;

	for(c = 1; c <= 32; ++c)
	{
		putchar()
		if(c % 8 == 0)
			putchar(' ');
	}
	putchar('\n');
} */

int *count_bits(int c);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;

	n = binary_to_uint("1");
	printf("%u\n", n);
	/* n = binary_to_uint("101"); */
	/* printf("%u\n", n); */
	/* n = binary_to_uint("1e01"); */
	/* printf("%u\n", n); */
	/* n = binary_to_uint("1100010"); */
	/* printf("%u\n", n); */
	/* n = binary_to_uint("0000000000000000000110010010"); */
	/* printf("%u\n", n); */

	return (0);
}
