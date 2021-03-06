#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog struct
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: New dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
