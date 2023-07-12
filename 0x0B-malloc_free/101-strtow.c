#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits  a string into words
 * @str: string input
 *
 * Return: pointer to final string
 */
char **strtow(char *str)
{
	char *start = str, *end, *word, **words, **words_;
	int words_count = count_words(str) + 1; /* Plus 1 for null char */

	if (str == NULL || *str == '\0')
		return (NULL);

	words = malloc(sizeof(**words) * words_count);
	words_ = words;

	if (words == NULL)
		return (NULL);

	while (*start != '\0')
	{
		end = start;
		while (!isspace_(end))
		{
			++end;
		}
		if (end > start)
		{
			word = malloc(sizeof(*word) * (end - start));
			if (word == NULL)
				return (NULL);
			fillword(word, start, end);
			*words = word;
			++words;
			start = end;
		}
		else
		{
			++start;
		}
	}
	// ++words;
	// *words = "\0";
	return (words_);
}

/**
 * fillword - fill a word memory slot with chars within a given boundary
 * @word: word meomry slot
 * @ch: start word boudary in memory
 * @p2: end word boudary in memory
 *
 * Return: void
 */
void fillword(char *word, char *start, char *end)
{
	int i;

	if (word == NULL || start == NULL || end == NULL)
	{
		return;
	}
	for (i = 0; i <= end - start; i++)
	{
		word[i] = *(start + i);
	}
	word[i] = '\0';
}

/**
 * isspace - report if a given char token is a space char
 * @ch: char token to check
 *
 * Return: 1 if true and 0 if false
 */
int isspace_(char *character)
{
	if (character == NULL)
		return (0);

	char sp_chars[MAX_SPACES] = {'\n', ' ', '\t', '\f', '\r', '\v', '\0'};
	int i;

	for (i = 0; i < 4; i++)
	{
		if (sp_chars[i] == *character)
			return (1);
	}
	return (0);
}

/**
 * count_spaces - counts number of distinct spaces in a string
 * @str: input string
 *
 * Return: integer number of distinct spaces
 */
int count_words(char *str)
{
	int count = 0, prev_space = 1;

	while (*str != '\0')
	{
		if (isspace_(str) && prev_space == 0)
		{
			prev_space = 1;
		}
		else if (prev_space == 1 && isspace_(str) == 0)
		{
			prev_space = 0;
			++count;
		}
		++str;
	}
	return (count);
}
