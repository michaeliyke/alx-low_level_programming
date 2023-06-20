/**
 * _isalpha - check for alphabet character
 * @c: the character to check against
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}

	if (c > 64 && c < 91)
	{
		return (1);
	}

	return (0);
}
