#include <string.h>
#include "main.h"

/**
 * *_strcpy - copy the string pointed including the terminating null byte
 *
 * @src: string 1 copy in dest
 * @dest: string 2 copy of src
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
