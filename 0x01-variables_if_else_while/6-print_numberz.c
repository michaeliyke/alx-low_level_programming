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

	while (i <= 9)
	{
		putchar((char)i);
		i++;
	}
	putchar('\n');
	return (0);
}
