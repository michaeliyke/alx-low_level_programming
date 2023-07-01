#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: input string
 *
 * Return: pointer to the string
 */
char *leet(char *s)
{
	char *p = s;
	char ab[5][3] = {
	    {'A', 'a', '4'},
	    {'E', 'e', '3'},
	    {'O', 'o', '0'},
	    {'T', 't', '7'},
	    {'L', 'l', '1'},
	};

	while (*p != '\0')
	{
		int length = 5;
		while (--length >= 0)
		{
			char *x = ab[length];
			if (*p == x[0] || *p == x[1])
			{
				*p = x[2];
			}
		}
		p++;
	}
	return (s);
}
