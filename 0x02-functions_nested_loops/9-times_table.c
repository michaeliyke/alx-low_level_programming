#include "main.h"

/**
 * times_table - some explanations
 *
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;
	int c;
	int first;
	double last;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;

			if (b == 0)
			{
				/* _putchar(b + '0'); */
				_putchar('0');
			}
			if (b > 0 && c < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c > 9)
			{
				first = c / 10;
				last = c % 10;
				_putchar(',');
				_putchar(' ');
				_putchar(first + '0');
				_putchar(last + '0');
			}
		}
		_putchar('\n');
	}
}