#include "main.h"

/**
 * _islower - check for lowercase character
 *
 * @c: variable in lowercase
 *
 * Return: 1 if c is lowercase, 0 if c is therwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
