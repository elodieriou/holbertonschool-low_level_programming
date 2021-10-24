#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: pointer to a string
 * @c: a character
 *
 * Return: a pointer to the first occurrence of the charater c in the string s
 */
char *_strchr(char *s, char c)
{
	int i;
	int k;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	for (k = 0; k <= i; k++)
	{
		if (s[k] == c)
		{
			s = s + k;
			return (s);
		}
	}
	return ('\0');
}
