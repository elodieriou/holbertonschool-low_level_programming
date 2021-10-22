#include <stdio.h>
#include "main.h"

/**
 * main - a program taht prints the number of arguments passed
 *
 * @argc: the number of arguments
 * @argv: an array of size argc but variable not usued
 *
 * Return: always success
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
