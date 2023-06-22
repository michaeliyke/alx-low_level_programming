#include "main.h"
#include "stdio.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;
	int last;
	int first;
	double flt;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			last = i % 10;
			flt = i / 10;
			first = (int)flt;

			_putchar('0' + first);
			_putchar('0' + last);

			last = j % 10;
			flt = j / 10;
			first = (int)flt;

			_putchar(':');
			_putchar('0' + first);
			_putchar('0' + last);

			_putchar('\n');
		}
	}
}
