/**
 * _isupper - checks if a character is uppercase
 * @c: the character to check
 *
 * Return: 1 if true and 0 if false
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
