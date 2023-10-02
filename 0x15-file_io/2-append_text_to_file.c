#include "main.h"

/**
 * append_text_to_file - append to a file
 * @filename: file to be appended more text
 * @contents: content
 *
 * Return: 1 on success and -1 on failure
 * Failure:
 * 1. fle does not exist or no permission
 * 2. file cannot be written
 * 3. filename is NULL
 * Permission: 600
 * If exist, truncate
 * If text-content is NULL, leave file empty
 */
int append_text_to_file(const char *filename, char *contents)
{
	int fd, bytes_wr, bytes_rd = _strlen(contents);

	if (filename == NULL) /* No file name */
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND | O_EXCL);
	if (fd == -1 || contents == NULL) /* file cannot be opened */
	{
		close(fd);
		return (fd == -1 ? -1 : 1);
	}

	bytes_wr = write(fd, contents, bytes_rd);
	close(fd);
	/* some of the bytes or non were written */
	return (bytes_rd != bytes_wr ? -1 : 1);
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
