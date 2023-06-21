#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number whose last digit is printed
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int ret_val = n < 0 ? (n % 10) * -1 : n % 10;

	_putchar(ret_val);
	return (ret_val);
}
