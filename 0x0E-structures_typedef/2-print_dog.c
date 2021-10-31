#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that print a struct dog
 *
 * @d: a pointer to the struct dog
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", (d->age) ? d->age : 0);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
