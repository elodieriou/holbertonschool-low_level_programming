#include "main.h"

/**
 * _pow_recursion - function that returns the value of x power of y
 *
 * @x: a number
 * @y: a power
 *
 * Return: the value of x power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
