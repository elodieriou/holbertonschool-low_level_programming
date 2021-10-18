#include <string.h>
#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: pointer s
 * @b: constant byte b
 * @n: first n bytes
 *
 * Return: value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
