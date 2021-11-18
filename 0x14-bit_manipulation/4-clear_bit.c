#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: a pointer to a number
 * @index: the position
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == 0 || index >= 64)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
