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
	char alphabets[] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(alphabets[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
