#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments
 *
 * @argc: the number of argument
 * @argv: an array of argc
 *
 * Return: always success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
