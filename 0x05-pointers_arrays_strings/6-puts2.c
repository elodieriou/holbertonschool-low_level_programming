#include <string.h>
#include "main.h"

/**
 * puts2 - print every character of a string, starting with the first character
 *
 * @str: string
 *
 */
void puts2(char *str)
{
	int i, n = strlen(str);

	for (i = 0; i <= n; i += 2)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
