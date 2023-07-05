#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: int niumber whose suare root is calculated
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (sq_root(n, 1));
}

/**
 * sq_root - calculates the square root of a number
 * @n: the number whose square root is calculated
 * @y: temporary variable
 *
 * Return: int value being the square root of n
 */
int sq_root(int n, int y)
{
	if (y * y == n)
		return (y);
	if (y == n || n < 0)
		return (-1);
	return sq_root(n, ++y);
}
