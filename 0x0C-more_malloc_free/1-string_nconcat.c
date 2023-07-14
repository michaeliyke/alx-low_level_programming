#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concats two string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to copy
 *
 * Return: pointer to new string;
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len2;

	if (s1 == NULL && s2 == NULL)
		return (copyof("", "", 0));
	if (n == 0 || s2 == NULL)
	{
		if (s1 == NULL)
			return (copyof("", "", 0));
		return (copyof(s1, "", 0));
	}

	len2 = strlen_(s2);

	if (s1 == NULL)
		return (copyof("", s2, (n <= len2 ? n : len2)));

	return (copyof(s1, s2, (n <= len2 ? n : len2)));
}

/**
 * copyof - returns a copy of 2 strs merged together but limited by n
 * @s1: base string
 * @s2: string to merge with
 * @n: limit of bytes to copy
 *
 * Return: pointer to copy of concatenated string
 */
char *copyof(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen_(s1);
	unsigned int size = len1 + n;
	unsigned int i, j;
	char *tem;

	if (s1 == NULL && s2 == NULL)
	{
		return ((char *)malloc(0));
	}

	tem = malloc(sizeof(*tem) * (size + 1));
	if (tem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		tem[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		tem[i + j] = s2[j];
	}
	tem[i + j] = '\0';
	return (tem);
}

/**
 * strlen_ - returns length of a string
 * @string: input string whose length is needed
 *
 * Return: length of string
 */
unsigned int strlen_(char *string)
{
	char *pointer = string;

	while (*string != '\0')
		++string;
	return ((string - pointer));
}
