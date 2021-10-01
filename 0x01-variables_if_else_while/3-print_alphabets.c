#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/**
	 * print lowercase letters
	 */
	for (n = 'a'; n <= 'z'; n++)
		putchar (n);

	/**
	 * print uppercase letters
	 */
	for (n = 'A'; n <= 'Z'; n++)
		putchar (n);
	putchar ('\n');
	return (0);
}
