#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that adds positive numbers
 *
 * @argc: the number of argument
 * @argv: an array of argc
 *
 * Return: always success
 */
int main(int argc, char *argv[])
{
	int a, a2;

	for (a = 1; a < argc; a++)
	{
		for (a2 = 0; a2 != '\0'; a2++)
		{
			if (argc  < '0' || argc  > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		if (argc > 1)
		{
			int add = atoi(argv[a2]);

			add = add + 1;
			printf("%d\n", add);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
