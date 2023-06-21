#include "main.h"
#include "stdio.h"

void print_ints(int);

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;
	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			print_ints(i);
			/* putchar(':' + '0');*/
			/* print_ints(j);*/
		}
		putchar('\n');
	}
}

/**
 * print_ints - prints the digits of numbers 0-99
 *
 * Return: void
 */
void print_ints(int i)
{
	int last;
	int first;
	double flt;

	if (i < 10)
	{
		putchar('0');
		putchar(i + '0');
	}
	else
	{
		last = i % 10;
		flt = i / 10;
		first = (int)flt;

		putchar(first + '0');
		putchar(last + '0');
	}
}
