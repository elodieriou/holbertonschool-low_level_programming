#include <string.h>
#include "main.h"

/**
 * *_strncat - function concatenates two sting that il will use at most n bytes from src
 * and src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: string that receives a copy of variable src string
 * @src: string copy in the variable dest string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
