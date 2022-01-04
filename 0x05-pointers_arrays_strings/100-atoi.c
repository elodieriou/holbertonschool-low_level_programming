#include <string.h>
#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: a pointer to a string
 * Return: an integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int number = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			number = number * 10 + (s[i] - '0');
		else if (number > 0)
			break;
		s++;
	}
	return (number * sign);
}
