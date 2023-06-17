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
	int x;
	int y;

	for (x = 0; x < 9; x++)
	{
		for (y = 1; y < 10; y++)
		{
			if (y > x)
			{
				putchar(x + '0');
				putchar(y + '0');

				if (x < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
