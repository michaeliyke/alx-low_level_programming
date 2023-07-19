#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - program that prints opcode of its own main
 *
 */
int main(int argc, char *argv[])
{
	int x, i = 0, (*func_main)(int, char **);
	unsigned char *fn_buff;

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

	func_main = &main;
	fn_buff = (unsigned char *)func_main;

	for (i = 0; i < x; i++)
		printf("%02x ", fn_buff[i]);
	putchar('\n');
	return (0);
}
