#include <stdlib.h>
#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: pointer to a character
 * @b: a character
 * @n: n bytes of the memory area pointed by s
 *
 * Return: value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

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
	char *ar;
	unsigned int mul = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mul = nmemb * size;

	ar = malloc(mul);
	if (ar == 0)
		return (NULL);

	_memset(ar, 0, mul);
	return (ar);
}
