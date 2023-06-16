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
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 1; i < 26; i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}
