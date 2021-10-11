#include <string.h>
#include "main.h"

/**
 * puts_half - print half of a string
 *
 * @str: string
 *
 */
void puts_half(char *str)
{
	int i, n = strlen(str);

	if (n % 2 == 0)
	{
		for (i = n / 2; i < n; i++)
		{
			_putchar (str[i]);
		}
	}
	else
		for (i = ((n - 1) / 2); i < n; i++)
		{
			_putchar (str[i]);
		}
	_putchar ('\n');
}
