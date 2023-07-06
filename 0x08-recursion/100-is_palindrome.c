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
	char *end = s + strlen_(s, 0) - 1;

	return (is_palindrome_(start, end));
}

/**
 * is_palindrome_ - recursively determines if a string is a panlindrome
 * @start: pointer to start of string
 * @end: pointer to end of string
 *
 * Return: 1 if s is a palindrome and 0 if not
 */
int is_palindrome_(char *start, char *end)
{
	if (start >= end)
		return (1);
	if (tolower_(*start) != tolower_(*end))
	{
		if (!(isalpha_(*start)))
			return (is_palindrome_(start + 1, end));
		if (!(isalpha_(*end)))
			return (is_palindrome_(start, end - 1));
		return (0);
	}

	return (is_palindrome_(start + 1, end - 1));
}

/**
 * tolower_ - convert a char to lowercase
 * @c: char to be converted
 *
 * Return: void
 */
char tolower_(char c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	else
		return (c);
}

/**
 * isalpha_ - skips a char if it is not an alphabet
 * @c: char to skip
 *
 * Return: 1 if char should be skipped, 0 if not
 */
int isalpha_(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/**
 * strlen_ - returns the length of the string
 * @s: input string
 * @i: base counter
 *
 * Return: length og the string
 */
int strlen_(char *s, int i)
{
	return ((*s != '\0') ? (strlen_(++s, ++i)) : (i));
}
