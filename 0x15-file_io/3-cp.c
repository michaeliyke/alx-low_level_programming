#include "main.h"

/**
 * main - check the code
 * @ac: ac
 * @av: av
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res, to, from;
	size_t len = 0;

	(void)res;
	if (ac != 3)
	{
		dprintf(2, ERR_USAGE);
		exit(97);
	}
	from = open(av[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(2, ERR_CANTRD, av[1]);
		exit(98);
	}
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_EXCL, 0664);
	if (to == -1)
	{
		to = open(av[2], O_WRONLY | O_TRUNC);
		if (to == -1)
		{
			dprintf(2, ERR_CANTWT, av[2]);
			exit(99);
		}
	}

	f_copy(&from, &to, av[1], av[2]);
	return (0);
}

/**
 * f_copy - copy file contents from one fd to another
 * @from: fd of the from file
 * @to: fd of the to file
 * @pathA: path name of from file
 * @pathB: path naame of of the to file
 *
 * Return: void
 */
void f_copy(int *from, int *to, char *pathA, char *pathB)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(*from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(*to, buffer, BUFFER_SIZE);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", pathB);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", pathA);
	}
	if (close(*to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", *to);
		exit(100);
	}
	if (close(*from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", *from);
		exit(100);
	}
}
