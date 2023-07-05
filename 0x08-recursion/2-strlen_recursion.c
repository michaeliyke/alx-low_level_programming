/**
 * _strlen_recursion - return the length of a string using recursion
 * @s: input string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;
	return _strlen_recursion(++s) + 1;
}
