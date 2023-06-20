/**
 * _islower - check if a a char is lowsercase
 * @c: the character to check against
 *
 * Return: returns 1 if true and 0 if not
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
