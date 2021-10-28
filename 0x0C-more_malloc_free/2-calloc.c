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
	int *ar, mul = 0, i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mul = nmemb * size;

	ar = malloc(mul);
	if (ar == 0)
	{
		free(ar);
		return (NULL);
	}

	while (i < mul)
	{
		ar[i] = 0;
		i++;
	}
	return (ar);
}
