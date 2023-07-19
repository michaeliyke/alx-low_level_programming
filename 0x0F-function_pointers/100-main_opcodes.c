#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - program that prints opcode of its own main
 *
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	int x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	int (*func_main)(int, char **) = &main;
	unsigned char *fn_buff = (unsigned char *)func_main;
	int i = 0;

	for (i = 0; i < x; i++)
		printf("%02x ", fn_buff[i]);
	putchar('\n');
	return (0);
}
