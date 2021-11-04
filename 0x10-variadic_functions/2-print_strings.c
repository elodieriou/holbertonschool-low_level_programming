#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_string - function that prints strings
 *
 * @separator: the string to be printed between the strings
 * @n: the number of arguments
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *str;

	va_start(args, n);

	while (i < n)
	{
		str = va_arg(args, char*);

		if (str == 0)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != 0)
			printf("%s", separator);

		i++;
	}
	va_end(args);
	printf("\n");
}
