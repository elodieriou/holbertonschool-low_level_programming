#include <stdlib.h>
#include "main.h"

/**
 * jack_bauer - prints every hours and minutes of a day
 */
void jack_bauer(void)
{
	int h1, h2, m3, m4;

	for (h1 = 0; h1 <= 2; h1++)
	{
		for (h2 = 0; h2 <= 9; h2++)
		{
			if ((h1 <= 1 && h2 <= 9) || (h1 <= 2 && h2 <= 3))
			{
				for (m3 = 0; m3 <= 5; m3++)
				{
					for (m4 = 0; m4 <= 9; m4++)
					{
						_putchar (h1 + '0');
						_putchar (h2 + '0');
						_putchar (':');
						_putchar (m3 + '0');
						_putchar (m4 + '0');
						_putchar ('\n');
					}
				}
			}
		}
	}
}
