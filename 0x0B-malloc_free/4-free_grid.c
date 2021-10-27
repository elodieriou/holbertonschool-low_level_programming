#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a 2D grid
 *
 * @grid: an array
 * @height: column of integers
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
		free(grid[f]);

	free(grid);
}
