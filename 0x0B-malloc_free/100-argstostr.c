#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - concats all its args into a single str sep by newline
 * @argc: arguments count
 * @argv: array of strings containing all the given arguments
 *
 * Return: pointer to the new concatened string
 */
char *argstostr(int argc, char **argv)
{
	char *word, *final_str, *ptr_final;
	int i, size = 0;

	if (argc == 1 || argv == NULL)
		return (NULL);

	for (i = 0 i < argc; i++)
	{
		word = argv[i];
		size += (count(word) + 1); /* + 1 because of the newlines */
	}

	final_str = malloc(sizeof(*final_str) * (size - 1));
	if (final_str == NULL)
		return (NULL);
	ptr_final = final_str;

	for (i = 1; i < argc; i++)
	{
		word = argv[i];
		while (*word != '\0')
		{
			*ptr_final = *word;
			++word, ++ptr_final;
		}
		*ptr_final = '\n';
		++ptr_final;
	}
	*ptr_final = '\0';
	return (final_str);
}

/**
 * count - get the char count of a string starting.
 * Count starts from 0 and includes null terminator
 * @str: pointer the string
 *
 * Return: interger length of the string
 */
int count(char *str)
{
	char *p = str;

	if (str == NULL)
		return (0);
	while (*p != '\0')
		++p;
	return (p - str);
}
