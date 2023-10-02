#include "main.h"

/**
 * main - entry
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *txt = "REQUIREMNTS FOR THE TICKET";

	(void)argc;
	(void)argv;
	(void)txt;
	printf("%d\n", append_text_to_file("REQ.txt", NULL));
	return (0);
}

/**
 * _strlen - find length of string
 * @str: string
 *
 * Return: length
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
