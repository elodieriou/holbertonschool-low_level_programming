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
	int i;

	for(i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for(; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
