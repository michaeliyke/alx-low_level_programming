#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits  a string into words
 * @s: string input
 *
 * Return: pointer to an array of words
 * terminated by NULL pointer
 */
char **strtow(char *s)
{
	int i, j, tot_wrds = 0, word_cnt = word_count(s);
	char *ptr, *p, *word, **words;

	words = malloc(sizeof(char *) * (word_cnt + 1));
	if (s == NULL || *s == '\0' || words == NULL || word_cnt == 0)
		return (NULL);
	for (ptr = s; *ptr != '\0';)
	{
		while (*ptr != '\0' && isspace_(*ptr))
			ptr++; /* Skip spaces */

		if (*ptr == '\0') /* If we have reached the end */
			break;
		for (p = ptr, i = 0; *ptr != '\0' && !isspace_(*ptr); i++)
			ptr++; /* Means that ptr may advance more than i */
		word = malloc(sizeof(char) * (i + 1));
		if (word == NULL)
		{
			for (j = 0; j < tot_wrds; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < i; j++, p++)
			word[j] = *p;
		word[j] = '\0', words[tot_wrds++] = word;
	}
	words[tot_wrds] = NULL;
	return (words);
}

/**
 * isspace_ - report if a given char token is a space char
 * @character: char token to check
 *
 * Return: 1 if true and 0 if false
 */
int isspace_(char character)
{
	int i;
	char sp_chars[MAX_SPACES] = {'\n', ' ', '\t', '\f', '\r', '\v', '\0'};

	for (i = 0; i < 4; i++)
	{
		if (sp_chars[i] == character)
			return (1);
	}
	return (0);
}

/**
 * word_count - return the number of words in a string
 * separated by single space
 * @s: string input
 *
 * Return: integer word count
 */
int word_count(char *s)
{
	int count = 0;
	char *ptr;

	if (s == NULL || *s == '\0')
		return (0);
	for (ptr = s; *ptr != '\0';)
	{
		while (*ptr != '\0' && isspace_(*ptr))
			ptr++; /* Skip spaces */

		if (*ptr == '\0') /* If we have reached the end, break */
			continue;
		count++; /* word char found, lets move past them */
		while (*ptr != '\0' && !isspace_(*ptr))
			ptr++;
	}
	return (count);
}
