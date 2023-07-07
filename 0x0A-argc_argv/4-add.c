#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: the total number of arguments passed to the program
 * @argv: an array of string arguments passed to the program
 *
 * Return: return 0 if successful and 1 otherwise
 */
int main(int argc, char *argv[])
{
	int result = 1, i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	while (i < argc)
	{
		char *x = argv[i];

		if (!(isdigit(x[0])))
		{
			printf("Error\n");
			return (1);
		}
		result *= atoi(x);
		i++;
	}
	printf("%d\n", result);
	return (0);
}
