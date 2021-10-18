#include <string.h>
#include "main.h"

/**
 * _strpbrk - function that searches a string for any of set of bytes
 *
 * @s: a string
 * @accept: characters to match with the s string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
