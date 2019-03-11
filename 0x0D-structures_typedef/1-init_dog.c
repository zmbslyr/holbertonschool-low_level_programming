#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a dog
 * @d: Name of struct
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
