#include <string.h>
#include "main.h"

/**
 * *leet - function that enncodes a string into 1337
 *
 * Return:
 */
char *leet(char *s)
{
	char alpha[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int len = strlen(s);
	int i, j;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < alpha[j]; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}
