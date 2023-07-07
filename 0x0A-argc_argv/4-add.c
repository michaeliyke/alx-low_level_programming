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
	int result, i;
	char *s;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1, result = 0; i < argc; i++)
	{
		s = argv[i];

		if ((isdigit(*s)))
		{
			result += atoi(s);
		}
		else
		{
			if (*s == '-')
			{
				continue;
			}
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
