#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: n elements
 * @size: size of bytes
 *
 * Return: a pointer to the allocated memory of array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);
	if (ar == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*ar = 0;
	return (ar);
}
