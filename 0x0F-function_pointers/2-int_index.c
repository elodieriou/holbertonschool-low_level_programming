#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: a pointer to an array
 * @size: the size of an array
 * @cmp: a pointer to a function to be used to compare values
 *
 * Return: the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index, i = 0;

	if (size <= 0)
		return (-1);

	if (array == 0)
		return (-1);

	if (cmp == 0)
		return (-1);

	while (i < size)
	{
		index = cmp(array[i]);
		if (index != 0)
			return (i);
		i++;
	}
	return (-1);
}
