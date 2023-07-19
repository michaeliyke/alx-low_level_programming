#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - program entry
 * @argc: number of arguments passed to the program
 * @argv: string arguments passed to the program
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int (*optn)(int, int), a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);
	optn = get_op_func(op);
	if (optn == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((b == 0 && *op == '/') || (b == 0 && *op == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", optn(a, b));
	return (0);
}
