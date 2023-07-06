/**
 * wildcmp -  compares two strings, if both are identical return 1 else 0
 * @s1: input string to compare with
 * @s2: identical string with wildcard to compare with s1
 *
 * Return: return 1 if both are identical or 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (wildcmp(s1, (s2 + 1)));
		return (wildcmp((s1 + 1), s2) || wildcmp(s1, (s2 + 1)));
	}
	if (*s1 == *s2)
		return (wildcmp((s1 + 1), (s2 + 1)));
	return (0);
}
