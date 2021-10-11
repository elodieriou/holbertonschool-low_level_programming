#include <string.h>
#include "main.h"

/**
 * rev_string - print a string, in reverse
 *
 * @s: string
 *
 */
void rev_string(char *s)
{
	int length, i;
	char *begin, *end, swap;

	length = strlen(s);
	begin = s;
	end = s;

	for (i = 0; i < length - 1; i++)
	{
		end++;
	}

	for (i = 0; i < length / 2; i++)
	{
		swap = *end;
		*end = *begin;
		*begin = swap;

		begin++;
		end--;
	}
}
