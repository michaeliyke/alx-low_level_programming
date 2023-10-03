#include "main.h"

/**
 * main - Program to copy file contents
 * @argc: number of arguments supplied to program
 * @argv: all arguments supplied to program
 *
 * Return: numeric value with 0 as success and other values indicating error
 *
 */
int main(int argc, char *argv[])
{
	int from, to, max_rd = 1024 + 1, num_rd;
	char *buff;

	if (argc != 3)
		dprintf(2, "Error Usage: cp file_from file_to\n"),
		    exit(97);
	from = open(argv[1], O_RDONLY | O_EXCL);
	if (from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		closefd(from), exit(99);
	}
	buff = malloc(sizeof(char) * max_rd);
	while ((num_rd = read(from, buff, max_rd)) != 0)
	{
		buff[num_rd] = '\0';
		if (num_rd == -1)
			break;
		if (write(to, buff, num_rd) == -1)
		{
			closefd(from), closefd(to);
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		free(buff), buff = malloc(sizeof(char) * max_rd);
	}
	free(buff), closefd(from), closefd(to);
	return (0);
}

/**
 * closefd - closes a file descriptor with errors if any
 * @fd: the fd to close
 *
 * Return: void
 */
void closefd(int fd)
{
	if (close(fd) == -1)
	{

		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
