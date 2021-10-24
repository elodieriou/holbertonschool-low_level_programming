#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: the string search of the string needle
 * @needle: the string find in the string haystack
 *
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)

{
	int i;

	if (*needle == '\0')
		return (haystack);
			for (; *haystack; haystack++)
				for (i = 0; needle[i] == haystack[i];i++)
				{
					if (needle [i + 1] == '\0')
						return (haystack);
				}
			return ('\0');
}
