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

	if (name == NULL || owner == NULL || age <= 0)
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	strcpy(ptr->name, name);
	strcpy(ptr->owner, owner);
	ptr->age = age;
	return (ptr);
}
