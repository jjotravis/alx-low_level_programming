#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: dog struct
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
				d->name != NULL ? d->name : "(nil)",
				d->age,
				d->owner != NULL ? d->owner : "(nil)");
	}
}
