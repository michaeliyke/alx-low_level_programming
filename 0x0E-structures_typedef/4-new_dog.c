#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new struct dpg type
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return pointer to new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog_t d = {
	    .age = age,
	    .name = malloc(sizeof(char) * strlen(name)),
	    .owner = malloc(sizeof(char) * strlen(owner)),
	};
	if (d.name == NULL || d.owner == NULL)
		return (NULL);
	strcpy(d.name, name);
	strcpy(d.owner, owner);

	ptr = &d;
	return (ptr);
}
