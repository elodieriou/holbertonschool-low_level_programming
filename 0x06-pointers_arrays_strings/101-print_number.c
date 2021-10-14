#include "main.h"

/**
 * print_number - print an integer
 *
 * @n: variable integer
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar ('-');
		n = -n;
	}

	i = n;

	if (i / 10 > 0)
	{
		print_number(i / 10);
	}
	_putchar (i % 10 + '0');
}
