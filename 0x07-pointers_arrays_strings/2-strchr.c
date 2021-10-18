#include <string.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: a string
 * @c: a character
 *
 * Return: a pointer to the first occurrence of the charater c in the string s
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
