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
	char alphabets_2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabets[i]);
	}

	for (i = 0; i < 26; i++)
	{
		putchar(alphabets_2[i]);
	}
	putchar('\n');
	return (0);
}
