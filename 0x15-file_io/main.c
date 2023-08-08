
#include "main.h"

/**
 * main - check the code
 * @ac: arg count
 * @av: argv list
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	(void)ac;
	(void)av;

	/* if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	} */
	res = create_file("abc", NULL);
	printf("-> %i)\n", res);
	return (0);
}
