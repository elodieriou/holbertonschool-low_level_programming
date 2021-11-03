#include "3-calc.h"

/**
 * op_add - function that add 2 integers
 *
 *@a: an integer
 *@b: an integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subdivide 2 integers
 *
 * @a: an integer
 * @b: an integer
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplie 2 integers
 *
 * @a: an integer
 * @b: an integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divide 2 integers
 *
 * @a: an integer
 * @b: an integer
 *
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that give the rest of a division
 *
 * @a: an integer
 * @b: an integer
 *
 * Return: the remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
