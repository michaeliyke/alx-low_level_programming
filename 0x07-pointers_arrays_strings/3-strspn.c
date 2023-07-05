#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accepts: chars to search for
 *
 * Return: int number of found substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *p = s, *a = accept, *m;
	int left = 0, right = 0;

	while (*a != '\0' && p >= &s[0])
	{
		if (m && *a == *p && right == 0) /* matched leftward */
		{
			left = 1, a++, p--;
			continue;
		}
		else if (m && *a == *p && left == 0) /* match rightward */
		{
			right = 1, a++;
			continue;
		}
		else
		{
			if (!m && (*a == *p))
			{
				m = p, i++;
				continue;
			}
			else if (m && right && *p == *(p + 1))
			{
				p++;
				continue;
			}
			else if (m && left && *p == *(p + 1))
			{
				p--;
				continue;
			}
			else if (m && *a != *p)
				return (i);
		}
		p++, i++;
	}
	return (i);
}
