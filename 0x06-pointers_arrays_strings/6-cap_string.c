#include "main.h"

int is_sep(char c);

/**
 * cap_string - function that capitalizes all words of string
 * @s: input string
 *
 * Return: Pointer to string
 */
char *cap_string(char *s)
{
	char *t = s;
	int count = 0;

	/* No need to attempt to convert first one */
	while (*t != '\0')
	{
		if (is_sep(*t))
		{
			count = 0;
		}
		else if (count == 0)
		{
			if ((*t >= 97 && *t <= 122))
			{
				*t = *t - 32;
				count = 1;
			}
			else
			{
				count = 1;
			}
		}
		t++;
	}
	return (s);
}

/**
 * is_sep - Determine if a char is a separators
 * @c: input char
 *
 * Return: 1 for true and 0 for false
 */
int is_sep(char c)
{
	// int separators[] = {9, 10, 13, 32, 34, 40, 41, 44, 46, 58, 59, 63, 123, 125};
	char separators[] = {'\t', '\n', '\r', ' ', '"', '(', ')', ',', '.', ':', ';', '?', '{', '}'};
	int length = sizeof(separators) / sizeof(char);

	while (--length >= 0)
	{
		if (separators[length] == c)
		{
			return (1);
		}
	}
	return (0);
}
