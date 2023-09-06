#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void print_opcode(unsigned char *buff, int x);

/**
 * main - program that prints opcode of its own main
 * @argc: Number of program arguments
 * @argv: string arguments
 *
 * Return: returns 0 on success and other codes otherwise
 */
int main(int argc, char *argv[])
{
	int x, (*main_proto_addr)(int, char **);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_proto_addr = &main;
	print_opcode((unsigned char *)main_proto_addr, x);
	return (0);
}

/**
 * print_opcode - function to print op code
 * @buff: buffer from which to print
 * @x: the number of bytes to be printed
 *
 * Return: void
 */
void print_opcode(unsigned char *buff, int x)
{
	int i;

	for (i = 0; i < x; i++)
	/* printf("%02hhx ", buff[i]); */
	{
		if (i != 0)
			printf(" ");
		printf("%.2hhx", buff[i]);
	}
	printf("\n");
}
