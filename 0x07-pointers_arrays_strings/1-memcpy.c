#include <string.h>
#include "main.h"

/**
 * _memcpy - fucntion that copies memory area
 *
 * @dest: to memory area dest
 * @src: from memory area src
 * @n: n bytes copies
 *
 * Return: value of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
