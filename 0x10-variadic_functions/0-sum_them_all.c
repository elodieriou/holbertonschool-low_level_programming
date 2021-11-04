#include "variadic_functions.h"

/**
 * sum_them_all - function that add all parameters
 *
 * @n: undefine arguments
 *
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list args;

	if (args == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, unsigned int);
		i++;
	}

	va_end(args);

	return (sum);
}
