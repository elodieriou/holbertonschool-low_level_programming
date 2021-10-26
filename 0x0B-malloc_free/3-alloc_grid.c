#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2D array of int
 *
 * @width:
 * @height:
 *
 * Return: an array or 0 if <= 0
 */
int **alloc_grid(int width, int height)
{
	char **ar;
	int lw, lh;

	if (width <= 0 || height <= 0)
		return ('\0');

	ar = malloc((width + height) * sizeof(int *));
	if (ar == 0)
		return ('\0');

	for (lw = 0; lw < width; lw++)
	{
		for (lh = 0; lh < height; lh++)
		{
			ar[lw][lh] = 0;
		}
	}
	return (ar);
}
