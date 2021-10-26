#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars
 *
 * @size: size of array
 * @c: a character
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	str = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
