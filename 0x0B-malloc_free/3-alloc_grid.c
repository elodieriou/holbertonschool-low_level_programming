#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2D array of int
 *
 * @width: row of integers
 * @height: column of integers
 *
 * Return: a 2D array or 0 if <= 0
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int m, lw, lh;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(height * sizeof(int *));
	if (ar == 0)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		ar[m] = malloc(width * sizeof(int));
		if (ar[m] == 0)
		{
			while (m >= 0)
				free(ar[m--]);

			free(ar);
			return (NULL);
		}
	}

	for (lh = 0; lh < height; lh++)
	{
		for (lw = 0; lw < width; lw++)
			ar[lh][lw] = 0;
	}
	return (ar);

}
