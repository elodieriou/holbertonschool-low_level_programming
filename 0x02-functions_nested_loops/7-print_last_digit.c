#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: is last digit of a number
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar ((n % 10) + '0');
		return (n % 10);
	}
	else
	{
		_putchar ((n % 10) + '0');
		return (n % 10);
	}
}
