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
	dog_t *newDog;

	while (name[lenName])
		lenName++;
	while (owner[lenOwner])
		lenOwner++;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->name = malloc((lenName + 1) * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc((lenOwner + 1) * sizeof(char));
	if (newDog->owner == NULL)
	{
		free(newDog->owner);
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	_strcpy((*newDog).name, name);
	(*newDog).age = age;
	_strcpy((*newDog).owner, owner);

	return (newDog);
}
