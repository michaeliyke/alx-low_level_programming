#include "main.h"

/**
 * print_last_digit - prints the last digit of a number. 8044
 * @n: the number whose last digit is printed
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int res = (n % 10) * -1;
	_putchar(res);
	return res;
}
