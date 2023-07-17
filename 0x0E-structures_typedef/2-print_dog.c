#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog type
 * @d: pointer to struct dog type
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name == NULL ? "nil" : d->name);
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: nil\n");
	printf("Owner: %s\n", d->owner == NULL ? "nil" : d->owner);
}
