#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that return a pointer to a newly allocates space in memory
 *
 * @str: a pointer of string
  *
 * Return : a pointer to the duplicated string, NULL if insufficient memory
 */
char *_strdup(char * str)
{
	int i, j;
	char *s;

	if (str == 0)
	{
		return ('\0');
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	s = malloc(i * sizeof(char));
	if (s == 0)
	{
		return ('\0');
	}

	j = 0;
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	return (s);
}
