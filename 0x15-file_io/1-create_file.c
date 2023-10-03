#include "main.h"

/**
 * create_file - create a file
 * @filename: file to be created
 * @contents: content
 *
 * Return: 1 on success and -1 on failure
 * Failure:
 * 1. fle cannot be created
 * 2. file cannot be written
 * 3. filename is NULL
 * Permission: 600
 * If exist, truncate
 * If text-content is NULL, leave file empty
 */
int create_file(const char *filename, char *contents)
{
	int fd, bytes_wr, bytes_rd = _strlen(contents);

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_EXCL | O_TRUNC, 0600);
	if (fd == -1 || contents == NULL) /* file cannot be opened */
	{
		close(fd);
		return (fd == -1 ? -1 : 1);
	}

	bytes_wr = write(fd, contents, bytes_rd);
	if (bytes_rd == -1) /* some of the bytes or non were written */
		return (-1);
	close(fd);
	return (1);
}

/**
 * _strlen - length of a str
 * @str: pointer to string
 *
 * Return: size of the string
 */
size_t _strlen(char *str)
{
	size_t i;

	if (str == NULL)
		return (0);
	for (i = 0; *(str + i) != '\0'; i++)
		;
	return (i);
}
