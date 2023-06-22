#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
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

void print_2_digits(int num)
{
	comma_n_space(2);
	_putchar((num / 10) + '0');
	_putchar((num % 10) + '0');
}

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