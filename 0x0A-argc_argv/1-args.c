#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments
 * @argc: the total number of arguments passed to the program
 * @argv: an array of string arguments passed to the program
 *
 * Return: return 0 if successful and 1 otherwise
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
