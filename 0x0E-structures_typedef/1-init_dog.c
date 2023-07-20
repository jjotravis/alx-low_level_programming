#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes variable of typr dog
 * @d: structure to initialize
 * @name: Name of dog
 * @age: age of dog
 * @owner: Owner's name
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
