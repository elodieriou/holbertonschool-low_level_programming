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
	int i;
	int len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		char rev = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = rev;
	}
}
