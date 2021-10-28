#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 *
 * @min:
 * @max:
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ar, i;

	if (min > max)
		return (NULL);

	ar = malloc((max - min + 1) * sizeof(int *));
	if (ar == 0)
		return (NULL);

	for (i = 0; min <= max; i++)
		ar[i] = min++;
	return (ar);
}
