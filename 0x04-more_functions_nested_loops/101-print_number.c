#include "main.h"
/**
 * print_number -  prints an integer
 * @n: the integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	if (n >= 1000 && n < 10000)
	{
		print_4_digits(n);
	}
	else if (n >= 100 && n < 1000)
	{
		print_3_digits(n);
	}
	else if (n >= 10 && n < 100)
	{
		print_2_digits(n);
	}
	else if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else if (n < 0)
	{
		_putchar('-');
		print_number(n * -1);
	}
}

/**
 * print_2_digits - print a 2-digit number
 * @n: number to be printed
 *
 * @Return: void
 */
void print_2_digits(int n)
{
	int a;

	a = n % 10;
	n = n / 10;

	_putchar(n + '0');
	_putchar(a + '0');
}

/**
 * print_3_digits - print a 3-digit number
 * @n: number to be printed
 *
 * @Return: void
 */
void print_3_digits(int n)
{
	int a, b;

	b = n % 10;
	n = n / 10;
	a = n % 10;
	n = n / 10;

	_putchar(n + '0');
	_putchar(a + '0');
	_putchar(b + '0');
}

/**
 * print_4_digits - print a 4-digit number
 * @n: number to be printed
 *
 * @Return: void
 */
void print_4_digits(int n)
{
	int a, b, c;

	c = n % 10;
	n = n / 10;
	b = n % 10;
	n = n / 10;
	a = n % 10;
	n = n / 10;

	_putchar(n + '0');
	_putchar(a + '0');
	_putchar(b + '0');
	_putchar(c + '0');
}
