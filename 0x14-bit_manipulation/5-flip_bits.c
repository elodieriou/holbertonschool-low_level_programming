#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: a number
 * @m: another number
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;

	n = n ^ m;

	while (n > 0)
	{
		n &= (n - 1);
		count++;
	}

	return (count);
}
