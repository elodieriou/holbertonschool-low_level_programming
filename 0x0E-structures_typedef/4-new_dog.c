#include <stdlib.h>
#include "dog.h"

/**
 * *_strcpy - copy the string pointed including the terminating null byte
 *
 * @src: string 1 copy in dest
 * @dest: string 2 copy of src
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int lenName = 0, lenOwner = 0;
	dog_t *nDog;

	nDog = malloc(sizeof(dog_t));
	if (nDog == NULL)
	{
		return (NULL);
	}

	while (name[lenName])
		lenName++;
	while (owner[lenOwner])
		lenOwner++;

	nDog->name = malloc((lenName + 1) * sizeof(int));
	if (nDog->name == NULL)
	{
		free(nDog->name);
		return (NULL);
	}

	nDog->owner = malloc((lenOwner + 1) * sizeof(int));
	if (nDog->owner == NULL)
	{
		free(nDog->owner);
		free(nDog);
		return (NULL);
	}

	_strcpy((*nDog).name, name);
	(*nDog).age = age;
	_strcpy((*nDog).owner, owner);

	return (nDog);
}
