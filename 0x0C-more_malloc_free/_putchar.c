#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
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
 * _putstring - write a string to the stdout
 * @str - string to write
 *
 * Return: on successful return 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putstring(char *str)
{
	char *p = str;
	int n;

	if (str == NULL)
		return (-1);

	while (*p != '\0')
		n = _putchar(*p++);
	if (n != 1)
		return (n);
	return (1);
}

/**
 * writeline - write a string to the stdout followed by newline
 * @str - string to write
 *
 * Return: on successful return 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int writeline(char *str)
{
	int n = _putstring(str);

	if (n == 1)
		_putchar('\n');
	return (n);
}

/**
 * isdigits - reports if eachchars of a string is a digit beween 0 and 9
 * @x: input string
 *
 * Return: 1 if true and 0 if false
 */
int isdigits(char *x)
{
	while (*x != '\0')
	{
		if (isdigit_(*x) == 0)
			return (0);
		++x;
	}
	return (1);
}

/**
 * isdigit - reports if eachchars of a string is a digit beween 0 and 9
 * @x: input char
 *
 * Return: 1 if true and 0 if false
 */
int isdigit_(char x)
{
	return (x > 47 && x < 58);
}

/**
 * atoi - convert a string into number
 * -check null and return 0
 * skip leading white spaces using while and ptr++
 * determine the sign if provided from the frist char
 * initialize result
 * Loop on if digit
 * set digit
 * check if result > INT_MAX / 10 || (result == IN_MAX / 10 && digit > INT_MAX %10)
 *       then return if sign is 1 INT_MAX else INT_MIN
 * result = (result * 10) + digit
 * p++
 * end loop
 * return sign * result
 */

/**
 *  atoi - convert a string into number
 * returns 0 if str is not numeric
 * @str: string input
 *
 * Return: integer value on the string
 */
int atoi_(char *str)
{
	int sign, result, digit;

	if (str == NULL || *str == '\0')
		return (0);
	while (isspace_(*str))
		++str;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	else if (*str == '+')
	{
		++str;
	}
	result = 0;
	while (isdigit_(*str))
	{
		digit = *str - '0';
		if (result > INT_MAX / 10 ||
		    (result == INT_MAX / 10 && digit > INT_MAX % 10))
		{
			return (sign == 1 ? INT_MAX : INT_MIN);
		}
		result = ((result * 10) + digit);
		++str;
	}
	return (sign * result);
}

/**
 * isspace_ - report if a given char token is a space char
 * @c: char token to check
 *
 * Return: 1 if true and 0 if false
 */
int isspace_(char c)
{
	int i;
	char sp_chars[7] = {'\n', ' ', '\t', '\f', '\r', '\v', '\0'};

	for (i = 0; i < 7; i++)
	{
		if (sp_chars[i] == c)
			return (1);
	}
	return (0);
}

/**
 * convert intiger into a string and print it
 * create buffer of 20 slots
 * init iterator to 0
 * init sign to 1
 * if num is neg, set sign to neg and make num postive
 * use do while loop to generate digits in reverse order as follows
 * do add '0'+ num % 10 to buffer on slot i++
 * set num to num divided by 10
 * while num is greater than 0
 * if sign is neg, include the - sign
 * end with null-terminator
 *
 * Reverse the string using two pointers
 * use i, and j to reverse the string - i is lready at the end of the string
 * reset j to 0
 * using j, loop through the string and print it using putchar
 */

/**
 * printint - Print an integer to the std output
 * @n: interger to print
 *
 * Return: void
 */
void printint(int n)
{
	char buff[20], temp;
	int i = 0, sign = 1, j;

	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	do
	{
		buff[i++] = '0' + n % 10;
		n /= 10;
	} while (n > 0);
	if (sign < 0)
		buff[i++] = '-';
	buff[i] = '\0';
	j = 0;
	i--;
	while (i > j)
	{
		temp = buff[j];
		buff[j] = buff[i];
		buff[i] = temp;
		i--;
		j++;
	}
	j = 0;
	while (buff[j] != '\0')
	{
		_putchar(buff[j]);
		j++;
	}
}
