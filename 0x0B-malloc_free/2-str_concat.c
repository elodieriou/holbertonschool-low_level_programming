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
	int len1 = 0, len2 = 0, len = 0, cat = 0;
	char *s;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	len = len1 + len2;
	s = malloc((sizeof(char) * len) + 1);
	if (s == 0)
	{
		return ('\0');
	}
	len2 = 0;
	while (cat < len)
	{
		if (cat <= len1)
			s[cat] = s1[cat];

		if (cat >= len1)
		{
			s[cat] = s2[len2];
			len2++;
		}
		cat++;
	}
	s[cat] = '\0';
	return (s);
}
