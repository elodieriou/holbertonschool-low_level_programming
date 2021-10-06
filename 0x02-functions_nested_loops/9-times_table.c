#include "main.h"

/**
 * times_table - print a multiplication table of single-digit numbers
 *
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for  (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (b == 0)
			{
				_putchar (b + '0')
					}
			else if (c < 10)
			{
				_putchar (',');
				_putchar (' ');
				_putchar ('_');
				_putchar (c);
			}
			else
			{
				_putchar (',');
				_putchar (' ');
				_putchar (c / 10 + '0');
				_putchar (c % 10 + '0');
			}
		}
		_putchar ('\n');
	}
}
