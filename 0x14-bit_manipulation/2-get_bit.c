#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: a number
 * @index: the position
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len = 0, num = 0;

	num = n;
	while (n)
	{
		n >>= 1;
		len++;
	}

	if (index >= len)
		return (-1);
	else
		return (num >> index & 1);
}
