#include <unistd.h>

/**
 * main - program that prints an array of strings
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(STDERR_FILENO,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);
	return (1);
}
