#include "main.h"

/**
 * leet - function that enncodes a string into 1337
 *
 * @s: a string
 *
 * Return: the string s
 */
char *leet(char *s)
{
	char alpha[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
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
