#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string that recieves a copy of variable s2
 * @s2: string copy in the variable s2
 * @n: bytes from s2
 *
 * Return: a pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, str = 0, len1 = 0, len2 = 0;
	char *s;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		while (s1[len1])
		len1++;
	}

	if (s2 == NULL)
		len2 = 0;
	else
	{
		while (s2[len2])
		len2++;
	}

	if (n >= len2)
		str = len1 + len2;
	else
		str = len1 + n;

	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == 0)
		return (NULL);

	while (i < (str))
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
