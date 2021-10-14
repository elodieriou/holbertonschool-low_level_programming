#include <string.h>
#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 *
 * @str: a string
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i - 1] == ' ' || str[i - 1] == '\t' ||
		    str[i - 1] == '\n' || str[i - 1] == ',' ||
		    str[i - 1] == ';' || str[i - 1] == '.' ||
		    str[i - 1] == '!' || str[i - 1] == '?' ||
		    str[i - 1] == '"' || str[i - 1] == '(' ||
		    str[i - 1] == ')' || str[i - 1] == '{' ||
		    str[i - 1] == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
