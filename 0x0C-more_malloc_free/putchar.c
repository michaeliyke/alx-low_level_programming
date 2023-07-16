#include <unistd.h>

/**
 * _putchar - test putchar
 * @c: char input
 *
 * Return: interger
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
