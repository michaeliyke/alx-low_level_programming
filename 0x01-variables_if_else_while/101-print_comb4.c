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
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			for (z = 2; z <= 9; z++)
			{
				if (x < y)
				{
					if (y < z)
					{
						putchar(x + '0');
						putchar(y + '0');
						putchar(z + '0');

						if (y < 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
