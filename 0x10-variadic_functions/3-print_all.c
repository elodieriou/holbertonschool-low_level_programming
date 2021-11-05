#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - function that print a char
 *
 * @separator: the separator of arguments
 * @args : the list of variadic arguments
 *
 * Return: Nothing
 */
void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_integer - function that print an integer
 *
 * @separator: the separator of arguments
 * @args: the list of variadic arguments
 *
 * Return: Nothing
 */
void print_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
 * print_float - function that print a float
 *
 * @separator: the separator of arguments
 * @args: the list of variadic arguments
 *
 * Return: Nothing
 */
void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_str - function that print a str
 *
 * @separator: the separator of arguments
 * @args: the list of variadic arguments
 *
 * Return: Nothing
 */
void print_str(char *separator, va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("%s%s", separator, "(nil)");
	else
		printf("%s%s", separator, str);
}

/**
 * print_all - function taht prints anything
 *
 * @format: is a list of types of arguments
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	type_t remi[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	unsigned int i = 0, j = 0;
	char *separator = "";
	va_list args;

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != 0)
	{
		j = 0;
		while (remi[j].type)
		{
			if (format[i] == *remi[j].type)
			{
				remi[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
