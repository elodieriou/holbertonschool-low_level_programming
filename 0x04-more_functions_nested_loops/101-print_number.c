#include "main.h"

/**
 * print_number - print an integer
 *
 * @n: variable integer
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar ('-');
		n = -n;
	}
	else
	{
		_putchar (n + '0');
	}
}
