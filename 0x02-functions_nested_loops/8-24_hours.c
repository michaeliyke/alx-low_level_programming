#include "main.h"

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
			// _putchar(':' + '0');
			// print_ints(j);
		}
		_putchar('\n');
	}
}

/**
 * print_ints - prints the digits of numbers 0-99
 *
 * Return: void
 */
void print_ints(int i)
{
	// int i;
	int last;
	int first;
	double flt;

	if (i < 10)
	{
		_putchar('0');
		_putchar(i + '0');
	}
	else
	{
		last = i % 10;	  // last digit
		flt = i / 10;	  // likely float
		first = (int)flt; // first digit

		_putchar(first + '0');
		_putchar(last + '0');
	}
}