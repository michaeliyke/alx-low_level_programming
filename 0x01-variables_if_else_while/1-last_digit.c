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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	// Last digit of n is: xxx and is greater than str_x, is str_x and is 0, 
	// < 6 but not 0: str_x and is kless than 6 and not 0

	return (0);
}
