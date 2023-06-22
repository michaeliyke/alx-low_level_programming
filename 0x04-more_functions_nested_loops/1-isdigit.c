/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if true and 0 if false
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
