#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char:", sizeof(char));
	printf("Size of an int:", sizeof(int));
	printf("Size of a long:", sizeof(long));
	printf("Size of a long long:", sizeof(long long));
	printf("Size of a float:", sizeof(float));

	return (0);
}