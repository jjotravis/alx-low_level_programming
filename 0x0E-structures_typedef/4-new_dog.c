#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: NULL if it fails or dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dd;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dd = malloc(sizeof(dog_t));
	if (dd == NULL)
		return (NULL);

	dd->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (dd->name == NULL)
	{
		free(dd);
		return (NULL);
	}

	dd->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (dd->owner == NULL)
	{
		free(dd->name);
		free(dd);
		return (NULL);
	}

	dd->name = strcpy(dd->name, name);
	dd->age = age;
	dd->owner = strcpy(dd->owner, owner);

	return (dd);
}

