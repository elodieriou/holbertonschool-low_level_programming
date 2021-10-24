#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: points to a character
 * @accept: points to a character
 *
 * Return: a pointer.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
