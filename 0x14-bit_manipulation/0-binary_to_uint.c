#include

/**
 * print_octal - converts an integer in base 10 to base 8 and print
 * @b: a number in base 10
 *
 * Return: number of bytes written or -1 if error
 */
int print_bin(unsigned int b)
{
	char *xyz = malloc(sizeof(*xyz) * 40);
	int i = 0;

	if (xyz == NULL)
		return (-1);
	while (b > 0)
	{
		xyz[i] = '0' + b % 8;
		b /= 8;
	}
	return (_writestring(xyz));
}
