#include <stddef.h>
#include "main.h"

/**
 * main - Print _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[8] = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar (str[i]);
	}
	_putchar('\n');
	return (0);
}
