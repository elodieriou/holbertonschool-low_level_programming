#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize the variable struct dog
 *
 * @d: a pointer to the variable struct dog
 * @name : a pointer to the dog's name
 * @age: dog's age
 * @owner: a pointer to the dog's owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
