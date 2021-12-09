#include <stdio.h>

/**
 * main - program that prints an array of strings
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ar[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-09";
	int i = 0;

	while (ar[i] != NULL)
	{
		_putchar(ar[i]);
		_putchar('\n');
	}
	return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
