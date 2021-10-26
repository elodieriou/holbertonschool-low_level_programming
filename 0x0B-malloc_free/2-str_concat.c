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
	int i = 0;
	int len1 = 0, len2 = 0;
	char *s;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		while (s1[len1] != '\0')
			len1++;
	}

	if (s2 == NULL)
		len2 = 0;
	else
	{
		while (s2[len2] != '\0')
			len2++;
	}
	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == 0)
		return ('\0');

	while (i < (len1 + len2 + 1))
	{
		if (i < len1 && s1 != NULL)
			s[i] = s1[i];
		else if (s2 != NULL)
			s[i] = s2[i - len1];
		i++;
	}
	s[i] = '\0';
	return (s);
}
