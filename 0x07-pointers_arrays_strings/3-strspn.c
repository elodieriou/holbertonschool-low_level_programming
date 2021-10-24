#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: the initial substring of the string pointed by s
 * @accept: only those character contained in the string by accept
 *
 * Return: return the length of the initial sbstring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int sum = 0;
	unsigned int i, k;

	for (i = 0; s[i] != 32; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				sum = sum + 1;
			}
		}
	}
	return (sum);
}
