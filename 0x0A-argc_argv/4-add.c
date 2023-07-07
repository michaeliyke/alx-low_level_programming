#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that adds positive numbers.
 * @argc: the total number of arguments passed to the program
 * @argv: an array of string arguments passed to the program
 *
 * Return: return 0 if successful and 1 otherwise
 */
int main(int argc, char *argv[])
{
	int result, i, tem;
	char *s;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1, result = 0; i < argc; i++)
	{
		s = argv[i];
		tem = atoi(s);

		if (!is_num(s))
		{
			if (*s == '-' && is_num(s + 1))
				continue;
			printf("Error\n");
			return (1);
		}
		result += tem;
	}
	printf("%d\n", result);
	return (0);
}

/**
 * is_num - check if a string is all digits
 * @s: pointer to string
 *
 * Return: returns 1 if true and 0 otherwise
 */
int is_num(char *s)
{
	while (*s != '\0')
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}
