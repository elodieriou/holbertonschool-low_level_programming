#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
 * @s: string
 *
 * Return: size of the string
 */
int _strlen(const char *s)
{
	int i;

	while (s[i])
		i++;
	return (i);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 * Return: the converted number or 0 if b is not 0 or 1, or b = NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int len, power = 1;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		value += (b[len] - '0') * power;
		power *= 2;
	}
	return (value);
}
