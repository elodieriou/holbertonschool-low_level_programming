#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 *
 * @array: a pointer to an array
 * @size: array's size
 *
 * Return: element of an array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
