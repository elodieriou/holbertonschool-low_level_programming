#include <stdio.h>
#include "main.h"

/**
 * main - prints the program's name
 *
 * @argc: the number of command line arguments
 * @argv: an array of size argc
 *
 * Return: Always success
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
