#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: an int value
 * @y: power of x
 *
 * Return: computed value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, --y));
}
