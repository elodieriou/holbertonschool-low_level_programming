#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 *
 * @separator: the string to be printed between numbers
 * @n: the number of arguments
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	while (i < n)
	{
		printf("%d", va_arg(args, unsigned int));
		if (i != n - 1 && separator != 0)
			printf("%s", separator);
		i++;
	}

	va_end(args);

	printf("\n");
}
