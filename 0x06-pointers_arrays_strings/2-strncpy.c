#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destonation string
 * @src: source string
 * @n: amount of src to copy unless it's end of string
 *
 * Return: pointer to destion string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char t;
	char *d = dest;

	if (!(dest) || !(src) || n < 1)
	{
		return dest;
	}

	while (n > 0)
	{
		if (*src)
		{
			t = *src;
			src++;
		}
		else
		{
			t = '\0';
		}
		*d = t;
		d++;
		n--;
	}
	return (dest);
}
