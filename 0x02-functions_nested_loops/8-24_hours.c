#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: is last digit of a number
 *
 * Return: value of the last digit
 */
void jack_bauer(void)
{
	int n1, n2, n3, n4;

	for (n1 ='0'; n1 <= '2'; n1++)
	{
		for (n2 = '0'; n2 <= '3'; n2++)
		{
			for (n3 = '0'; n3 <= '5'; n3++)
			{
				for (n4 = '0'; n4 <= '9'; n4++)
				{
					_putchar (n1);
					_putchar (n2);
					_putchar (':');
					_putchar (n3);
					_putchar (n4);
					_putchar ('\n');
				}
			}
		}
	}
}
