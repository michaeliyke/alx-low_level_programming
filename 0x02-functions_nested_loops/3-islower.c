/**
 * _islower - check if a a char is lowsercase
 *
 * Return: returns 1 if true and 0 if not
 */
int _islower(int c)
{
	if (c >= 97 || c <= 122)
	{
		return (1);
	}
	return (0);
}