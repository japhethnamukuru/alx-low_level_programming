#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initalizes a dog structure
 *
 * @d: pointer to structure dog
 *
 * @name: pointer to string
 *
 * @age: float attribute
 *
 * @owner: poiner to string
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
