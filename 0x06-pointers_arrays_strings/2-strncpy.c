#include <string.h>
#include "main.h"

/**
 * *_strncpy - function that copies a string
 *
 * @dest: receive string copy of src
 * @src: sting copy in dest
 * @n: copy n bytes of src
 *
 * Return: a pointer of variable dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
