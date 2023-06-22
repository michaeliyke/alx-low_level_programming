#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print times table of a number between 1 and 15
 * @n: an arbitrary number from 1 - 5
 *
 * Return: void
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n > 15 || n < 0)
		return;

	for (a = 0; a < n + 1; a++)
	{
		for (b = 0; b < n + 1; b++)
		{
			c = a * b;
			if (b == 0)
				_putchar('0');
			if (b > 0 && c < 10)
			{
				comma_n_space(3);
				_putchar(c + '0');
			}
			else if (c > 9 && c < 100)
			{
				print_2_digits(c);
			}
			else if (c > 99)
			{
				print_3_digits(c);
			}
		}
		_putchar('\n');
	}
}

/**
 * comma_n_space - print a bunch of spaces preced by a single comma
 * @num: number of comma preceded spaces
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void comma_n_space(int num)
{
	int i;

	_putchar(',');
	for (i = 0; i < num; i++)
	{
		_putchar(' ');
	}
}

/**
 * print_2_digits - print a 2 digit numer
 * @num: the number to print
 *
 * Return: void
 */
void print_2_digits(int num)
{
	comma_n_space(2);
	_putchar((num / 10) + '0');
	_putchar((num % 10) + '0');
}

/**
 * print_3_digits - print a 3 digit numer
 * @num: the number to print
 *
 * Return: void
 */
void print_3_digits(int num)
{
	int d3, d2, d1;
	double d;

	d3 = num % 10; /* 3rd digit */
	d = num / 10;
	d2 = (int)d % 10; /* 2nd digit */
	d = d / 10;
	d1 = (int)d % 10; /* 1st digit */

	comma_n_space(1);
	_putchar(d1 + '0');
	_putchar(d2 + '0');
	_putchar(d3 + '0');
}