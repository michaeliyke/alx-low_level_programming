#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two string
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *t, *p;
	unsigned int size, i = 0;

	t = s1 ? s1 : "\0";
	while (*t != '\0')
		++t;

	size = t - s1;
	t = s2 ? s2 : "\0";

	while (*t != '\0')
		++t;

	size += t - s2;
	p = malloc(sizeof(*p) * (size + 1));

	if (!p)
		return (NULL);

	t = s1;
	while (i < size)
	{
		if (*t == '\0')
			t = s2;
		p[i] = *t, ++i, ++t;
	}

	p[size] = '\0';

	return (p);
}
