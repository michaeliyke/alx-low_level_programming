#include "main.h"

/**
 * read_textfile - read file and display
 * @filename: file to display
 * @letters: number of letters to display
 *
 * Return: number of bytes displayed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_rd, bytes_wr;
	char *contents = malloc(sizeof(int) * (letters + 1));

	if (filename == NULL || contents == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1) /* file cannot be opened */
		return (0);
	bytes_rd = read(fd, contents, letters);
	if (bytes_rd == -1) /* file cannot be read */
		return (0);
	bytes_wr = write(STDOUT_FILENO, contents, bytes_rd);
	if (bytes_rd != bytes_wr) /* some of the bytes or non were written */
		return (0);
	close(fd);
	free(contents);
	return (bytes_wr);
}
