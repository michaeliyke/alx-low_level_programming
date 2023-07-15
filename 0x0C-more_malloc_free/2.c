/* C program to understand need of typecasting in DMA */
/* www.codewindow.in */

#include <stdio.h>
#include <stdlib.h>

// Driver code
int main()
{
	int n, i;
	int *p; // Integer pointer is declared

	printf("Enter a valid range: ");
	scanf("%d", &n);

	p = malloc(sizeof(int) * n); // An int array of n elements has been assigned to the pointer
	// p = (int *)malloc(n * sizeof(int)); // An int array of n elements has been assigned to the pointer

	if (p == NULL)
	{ // Checking if memory allocation is successful or not
		printf("\nMemory allocation unsuccessful: %d", n);
		exit(0);
	}
	else
	{ // Else memory allocation is successful
		printf("\nMemory allocation successful");
		printf("\nEnter the elements of array: ");

		for (i = 0; i < n; ++i)
			scanf("%d", p + i); // Array elements are taken as input

		printf("\nElements of the array are: ");
		for (i = 0; i < n; i++)
			printf("%d ", *(p + i)); // Print element of the array
	}
	return 0;
}