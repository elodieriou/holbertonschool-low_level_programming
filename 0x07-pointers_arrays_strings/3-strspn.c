#include <string.h>
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
	return (strspn(s, accept));
}
