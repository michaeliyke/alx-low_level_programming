#include <stdio.h>

/**
 * main - sum of all profucts of 3 or 5 between 0 and 1024
 *
 * Return: void
 */
int main(void)
{
	int count, total = 0;

	for (count = 0; count < 1024; count++)
	{
		if (count != 0 && (count % 3 == 0 || count % 5 == 0))
			total += count;
	}

	printf("%d\n", total);

	return (0);
}
