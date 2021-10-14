#include <string.h>
#include "main.h"

/**
 * rot13 - function that enncodes a string into 1337
 *
 * @s: a string
 *
 * Return: the string s in rot13
 */
char *rot13(char *s)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int len = strlen(s);
	int i, j;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
