#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name:
 *
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}