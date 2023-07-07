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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	char *a = argv[1];
	char *b = argv[2];

	if (!(is_num(a) && is_num(b)))
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (atoi(a) * atoi(b)));
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
