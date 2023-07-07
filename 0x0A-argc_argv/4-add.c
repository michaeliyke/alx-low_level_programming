#include <stdio.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers.
 * @argc: the total number of arguments passed to the program
 * @argv: an array of string arguments passed to the program
 *
 * Return: return 0 if successful and 1 otherwise
 */
int main(int argc, char *argv[])
{
	int result = 1, i = 0;

	if (argc == 0)
	{
		printf("0\n");
	}
	while (i++ < argc)
	{
		char *x = argv[i];

		if (*x >= '0' && *x <= '9')
		{
			printf("Error\n");
			return (1);
		}
		result *= (int)*x;
	}
	return (0);
}
