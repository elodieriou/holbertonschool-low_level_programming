#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: a string
 * @s2: a string
 *
 * Return: a pointer contents of s1 with the contents of s2
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *s;

	if (s1 == 0 && s2 == 0)
	{
		return ('\0');
	}

	s = malloc((i + j + 1) * sizeof(char));
	if (s == 0)
	{
		return ('\0');
	}

	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
