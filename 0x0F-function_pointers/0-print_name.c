#include <stdlib.h>

/**
 * print_name - prints a string name
 * @name: a string
 * @f: function that prints name
 *
 * Return void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
