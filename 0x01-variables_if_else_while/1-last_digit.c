#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start of program
 *
 * Return: 0 if successful and an error code otherwise
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		last = n % -10;
	}
	else if (n == 0)
	{
		last = 0;
	}
	else
	{
		last = n % 10;
	}

	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}

	if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}

	if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, last);
	}

	return (0);
}