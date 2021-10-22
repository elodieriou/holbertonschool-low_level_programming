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
	int num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (argc >= 0 || argc < 2)
	{
		printf("%d\n", num1 * num2);
	}
	if (argc - 1 == 0)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
