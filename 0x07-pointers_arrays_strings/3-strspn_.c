
/**
 * _strspn - gets the length of a prefix substring
 * @str: input string
 * @chars: chars to search for
 *
 * Return: int number of found substring
 */
unsigned int _strspn(char *str, char *chars)
{
	unsigned int i = 0; /* counter for matching characters */
	char *p = chars; /* pointer to iterate over chars */

	while (*str != '\0') /* loop over str until null terminator */
	{
		while (*p != '\0') /* loop over chars until null terminator */
		{
			if (*p == *str) /* if there is a match */
			{
				i++; /* increment counter */
				break; /* break out of inner loop */
			}
			p++; /* move to next character in chars */
		}
		if (*p == '\0') /* if no match was found */
		{
			break; /* break out of outer loop */
		}
		str++; /* move to next character in str */
		p = chars; /* reset pointer to beginning of chars */
	}
	return (i); /* return counter */
}
