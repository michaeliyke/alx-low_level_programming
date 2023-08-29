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
	int total, i;
	int sign = 0; /* Minus sign on/off switch */
	char *arg;

	if (argc == 1)
	{ /* No number passed to the program */
		printf("0\n");
		return (0);
	}
	for (i = 1, total = 0; i < argc; i++)
	{ /* Loop through all program string arguments, assign each to arg */
		arg = argv[i];
		if (strcmp(arg, "-") == 0)
		{ /* if the arg is just a minus sign */
			sign = !sign;
			continue;
		}
		if (strcmp(arg, "+") == 0)
			continue; /* Plus is the default */
		while (*arg == '-')
		{ /* Skip the sign part of a negative value like -7 */
			arg++;
			sign = !sign;
		}
		while (*arg == '+') /* Skip any positive signs */
			arg++;
		if (is_num(arg))
		{ /* Here we simply add or subtract as needed */
			total = sign ? total - atoi(arg) : total + atoi(arg);
			sign = 0; /* reset minus sign here*/
			continue;
		}
		printf("Error\n");
		return (1);
	}
	printf("%d\n", total);
	return (0);
}

/**
 * is_num - checks if a string is all digits
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
