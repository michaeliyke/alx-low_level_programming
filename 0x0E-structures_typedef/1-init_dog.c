#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initializes a struct dog type
 * @d: struct dog type pointer to initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
