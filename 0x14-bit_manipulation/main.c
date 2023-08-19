#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = get_bit(ULONG_MAX, 19);
	printf("%d\n", n); /* 1 */
	n = get_bit(ULONG_MAX, 0);
	printf("%d\n", n); /* 1 */
	n = get_bit(ULONG_MAX, 20000);
	printf("%d\n", n); /* -1 */
	return (0);
}
