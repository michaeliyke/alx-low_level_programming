#include "main.h"

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 *@s: string input
 *
 * Return:  returns 1 if a string is a palindrome and 0 if no
 */
int is_palindrome(char *s)
{
	char *start = s;
	char *end = s + strleng(s, 0) - 1;

	return (is_palindrome_(s, start, end));
}

/**
 * is_palindrome_ - recursively determines if a string is a panlindrome
 * @s: input string
 * @start: pointer to start of string
 * @end: pointer to end of string
 *
 * Return: 1 if s is a palindrome and 0 if not
 */
int is_palindrome_(char *s, char *start, char *end)
{
	lower(start), lower(end);
	if (*start != *end)
	{
		if (skip(*start))
			return (is_palindrome_(s, start + 1, end));
		if (skip(*end))
			return (is_palindrome_(s, start, end - 1));
		return (0);
	}

	if (((start + 1) == (end - 1)) || ((start + 1) > (end - 1)))
		return (1);

	return (is_palindrome_(s, start + 1, end - 1));
}

/**
 * strleng - returns the length of the string
 * @s: input string
 * @i: base counter
 *
 * Return: length og the string
 */
int strleng(char *s, int i)
{
	return ((*s != '\0') ? (strleng(++s, ++i)) : (i));
}

/**
 * skip - skips a char if it is not an alphabet
 * @c: char to skip
 *
 * Return: 1 if char should be skipped, 0 if not
 */
int skip(char c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (0);
	else
		return (1);
}

/**
 * lower - convert a char to lowercase
 * @c: char to be converted
 *
 * Return: void
 */
void lower(char *c)
{
	if (*c > 64 && *c < 91)
		*c += 32;
}
