#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees a dog
 * @d: struct dog type to be freed
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
}
