#include <stdio.h>
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
	int i, j;
	int len1 = 0, len2 = 0;
	char *s;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == 0)
		return ('\0');

	for (i = 0; i < len1; i++)
		*(s + i) = *(s1 + i);

	for (j = 0; j < (len1 + len2); j++)
	{
		*(s + len1 + j) = *(s2 + j);
	}
	*(s + (len1 + len2)) = '\0';
	return (s);
}
