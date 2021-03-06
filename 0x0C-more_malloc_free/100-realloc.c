#include <stdlib.h>
#include "main.h"

/**
 * _memcpy - fucntion that copies memory area
 *
 * @dest: copy of memory area src
 * @src: memory area copy on dest
 * @n: n bytes copies
 *
 * Return: value of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * _realloc - function that reallocates a memory block using malloc and free
 *
 * @old_size: is the size in bytes of the allocated space for ptr
 * @new_size: is the new size in bytes of the new memory block
 * @ptr: is a pointer with the previously memory allocated
 *
 * Return: the new memory allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == 0)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	nptr = malloc(new_size);
	if (nptr == 0)
		return (NULL);

	_memcpy(nptr, ptr, old_size);

	free(ptr);
	return (nptr);
}
