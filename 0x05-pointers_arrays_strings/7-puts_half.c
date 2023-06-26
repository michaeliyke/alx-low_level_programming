#include "main.h"
int len_str(char *s);

/**
 * puts_half - prints half of a string
 * @str: the string to print
 *
 */
void puts_half(char *str)
{
	int i = 0;
	int len = len_str(str);

	while (*(str + i) != '\0')
	{
		if (i < (len / 2))
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

/**
 * len_str - compute the length of a string
 * @s: the str for which length is computed
 *
 * Return: the length of the string
 */
int len_str(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i - 1);
}
