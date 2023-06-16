#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start of program
 *
 * Return: 0 if successful and an error code otherwise
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
