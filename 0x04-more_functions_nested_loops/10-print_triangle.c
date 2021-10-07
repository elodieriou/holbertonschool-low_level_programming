#include "main.h"

/**
 * print_triangme - prints a triangle
 *
 * @size: is the size of the triangle
 */
void print_triangle(int size)
{
	int etage, espace, dieze;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (etage = 0; etage < size; etage++)
		{
			for (espace = size - etage; espace > 1; espace--)
			{
				_putchar(' ');
			}

			for (dieze = 0; dieze <= etage; dieze++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
