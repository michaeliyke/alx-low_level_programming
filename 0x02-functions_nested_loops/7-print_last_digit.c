/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number whose last digit is printed
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		return (-n % 10);
	}
	return (n % 10);
}
