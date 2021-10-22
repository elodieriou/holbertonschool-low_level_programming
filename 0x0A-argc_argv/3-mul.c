#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers
 *
 * @argc: the number of argument
 * @argv: an array of argc
 *
 * Return: always success
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int mul1 = atoi(argv[1]);
		int mul2 = atoi(argv[2]);

		printf("%d\n", mul1 * mul2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
