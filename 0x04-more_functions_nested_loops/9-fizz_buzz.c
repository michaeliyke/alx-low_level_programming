#include <stdio.h>

/**
 * main - print FizzBuzz
 *
 * Return: 0 on success
 */
int main(void)
{
	int index = 0;

	while (++index < 101)
	{
		if (index % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (index % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (index % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", index);
		}
	}
	putchar('\n');
	return (0);
}
